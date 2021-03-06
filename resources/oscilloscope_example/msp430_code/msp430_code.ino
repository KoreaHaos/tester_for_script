/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.
  
  Hardware Required:
  * LaunchPad with an LED
  
  This example code is in the public domain.
*/

// most launchpads have a red LED
#define LED RED_LED

//see pins_energia.h for more LED definitions
//#define LED GREEN_LED
  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);  
}

// the loop routine runs over and over again forever:
void loop() {
  
   digitalWrite(LED, LOW);
  delay(4000);
  
  int i;
  for(i = 0; i < 50; i++)
  {
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(2);               // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(19);               // wait for a second
  }
   digitalWrite(LED, LOW);
   delay(500);
   for(i = 0; i < 50; i++)
  {
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(7);               // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(13);               // wait for a second
  }
   digitalWrite(LED, LOW);
   delay(500);
   for(i = 0; i < 50; i++)
  {
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(10);               // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(10);               // wait for a second
  }
   digitalWrite(LED, LOW);
   delay(500);
   for(i = 0; i < 50; i++)
  {
    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(19);               // wait for a second
    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    delay(1);               // wait for a second
  }
 digitalWrite(LED, LOW);
   delay(500);
  
}
  
  
  
  
  
  
