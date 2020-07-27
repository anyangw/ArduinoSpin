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


// Accelerate PWM 1ms -> 1.1ms in 10s, and stay at max rpm for 30s and deaccelerate in 10 s, then wait for 30 s 
void loop(){
   int i=1001;

   for (i = 1001; i <= 1101; i++){
        myservo.writeMicroseconds(i);   
        delay(100);    
        }

    if (i=1101){
        myservo.writeMicroseconds(i);  
        delay(30000);
        i++;
        }
/* if do not need deacceleration control
    if(i>1101){
        myservo.writeMicroseconds(1000);   
        delay(100000);
        }
*/
   for (i = 1102; i >= 1000; i--){
        myservo.writeMicroseconds(i);   
        delay(100);    
        }

   if(i=1000)
        delay(30000);
       
   return 0;
}


/*//the part if needed to control target rpm w/o PC input
void loop() {
  int val;
  val = analogRead(A0);
  val = map(val,0,1023,1000,2000);
  myservo.writeMicroseconds(val);              
}
*/