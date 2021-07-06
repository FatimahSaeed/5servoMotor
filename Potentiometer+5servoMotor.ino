// C++ code
//
#include <Servo.h>
 
int servoPin1 = 3;
int servoPin2 = 5;
int servoPin3 = 9;
int servoPin4 = 10;
int servoPin5 = 11;
 
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pot_pin1 = A5;
int pot_pin2 = A4;
int pot_pin3 = A3;
int pot_pin4 = A2;
int pot_pin5 = A1;
 
int angle = 0;   // servo position in degrees
 
void setup()
{
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);
  servo5.attach(servoPin5);
}
 
 
void loop()
{
   angle = analogRead(pot_pin1);
  angle = map (angle , 0 , 1023 , 0 , 90) ;
  servo1.write(angle);
  delay(15);
  
   angle = analogRead(pot_pin2);
  angle = map (angle , 0 , 1023 , 0 , 90) ;
  servo2.write(angle);
  delay(15);
  
   angle = analogRead(pot_pin3);
  angle = map (angle , 0 , 1023 , 0 , 90) ;
  servo3.write(angle);
  delay(15);
  
   angle = analogRead(pot_pin4);
  angle = map (angle , 0 , 1023 , 0 , 90) ;
  servo4.write(angle);
  delay(15);
  
   angle = analogRead(pot_pin5);
  angle = map (angle , 0 , 1023 , 0 , 90) ;
  servo5.write(angle);
  delay(15);
}