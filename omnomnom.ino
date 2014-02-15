#include <Servo.h> 
 
Servo servo1;  
 
void setup() 
{ 
  servo1.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
void dispense(int num)
{
  for (int i=0; i<=num; i++)
  {
    servo1.write(180);
    delay(500);
    servo1.write(0);
    delay(500);
  }
  servo1.write(80);
}
 
void loop() 
{ 
    dispense(5);
    delay(10000);

  
} 
