/*
  Created 25 Oct 2016
  Start:13:00
  End:14:10
  by Jaime Vega Arenaldi
  jh.vega.arenaldi@gmail.com
  
*/

#define RELAY1  8
#define RELAY2  9
#define LED1    2
#define LED2    3
#define LED3    4
#define LED4    5
#define LED5    6
#define SWACT  12

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an output.
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(LED1,   OUTPUT);
  pinMode(LED2,   OUTPUT);
  pinMode(LED3,   OUTPUT);
  pinMode(LED4,   OUTPUT);
  pinMode(LED5,   OUTPUT);
  // initialize digital pin as an input.
  pinMode(SWACT,  INPUT);
  // setup pin 12 to HIGH 
  digitalWrite(SWACT,HIGH);
}

// the loop function runs over and over again forever
void loop() {
  if ( digitalRead(SWACT) == LOW )
  {
  digitalWrite(RELAY1, HIGH);   // Light turns on (Arduino activates relay #1, remains on)
  digitalWrite(RELAY2, HIGH);   // Solenoid activated (Arduino activates relay #2, remains on)
  digitalWrite(LED1,HIGH);     // LED #1 turns on
  delay(3750) ;
  digitalWrite(LED2,HIGH); // After 3.75 seconds - LED #2 turns on
  delay(3750);
  digitalWrite(LED3,HIGH); // After 7.5 seconds - LED #3 turns on
  delay(3750);
  digitalWrite(LED4,HIGH); // After 11.25 second - LED #4 turns on
  delay(3750);
  digitalWrite(LED5,HIGH); // After 15 seconds - LED #5 turns on
  digitalWrite(RELAY2, LOW);    // Solenoid deactivated (Arduino deactivates relay #2)
  digitalWrite(RELAY1, LOW);    // Light turns off (Arduino deactivates relay #1)
  delay(1000);
 // After 16 seconds - Turn off all LEDs
     for (int led=1; led<7; led++)
     { digitalWrite(led,LOW); }
  }
 }
