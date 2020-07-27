/* Acceleration test
 modified July 26 2020
 by Anyang Wang
*/
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.writeMicroseconds(1000);
  Serial.begin(9600);
}

// Accelerate PWM 1ms -> 1.1ms in 10s, and stay at max rpm for 30s 

void loop(){
   int i;

   for (i = 1000; i <= 1101; i++){
        myservo.writeMicroseconds(i);   
        delay(100);    
        }

    if (i>1100)  
    delay(30000);

}


/*//the part if needed to control target rpm w/o PC input
void loop() {
  int val;
  val = analogRead(A0);
  val = map(val,0,1023,1000,2000);
  myservo.writeMicroseconds(val);              
}
*/
