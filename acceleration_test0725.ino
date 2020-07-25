/* Acceleration test
 modified July 24 2020
 by Anyang Wang
*/
#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.writeMicroseconds(1000);
  Serial.begin(9600);
}

void loop(){
  int i;
  for (i = 1000; i < 1200; i++){
        myservo.writeMicroseconds(i);
        delay(100);
        }

// hold rotation at target RPM for t sec, here is 10,000ms
  if (i == 1200){
        myservo.writeMicroseconds(i);
        delay(10000);
        }

            return(0);
}


/*//the part if needed to control target rpm w/o PC input
void loop() {
  int val;
  val = analogRead(A0);
  val = map(val,0,1023,1000,2000);
  myservo.writeMicroseconds(val);              
}
*/
