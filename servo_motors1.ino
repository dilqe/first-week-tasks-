#include <Servo.h>
int servosignal = 3; 
Servo myservo;
int moveforward = 6;
int movebackward = 12;
int position = 0;
void setup()
{
myservo.attach(servosignal); 
pinMode(moveforward,INPUT);
pinMode(movebackward,INPUT);
myservo.write(position);
}

void loop()
{
 int forwardpush = digitalRead(moveforward);
 int backwardpush = digitalRead(movebackward);
 if(forwardpush == HIGH)
{
 myservo.write(position);
 position++; // positon = position -1
 delay(50);
}
if(backwardpush == HIGH)  
{ 
 myservo.write(position);
 position--; // positon = position -1
 delay(50);  
 }
}