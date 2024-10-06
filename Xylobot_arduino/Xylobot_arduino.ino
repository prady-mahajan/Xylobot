#include <Servo.h>
Servo myservo;
Servo myservo1;
Servo myservo2;
Servo myservo3;
int pos = 0;

void setup()
{
Serial.begin(9600);
while (!Serial);
myservo1.attach(3);
myservo.attach(9);
myservo2.attach(5);
myservo3.attach(10);
}

void loop() {
for(pos = 0; pos <= 180; pos += 1)
if (Serial.available())
{
  int state = Serial.parseInt();
    
if (state ==1)
{
  myservo1.write(0);
  delay(200);
  myservo.write(20);
  delay(200);
  myservo.write(-20);
}
  
if (state ==2)
{
  myservo1.write(90);
  delay(200);
  myservo.write(20);
  delay(200);
  myservo.write(-20);
}
  
if (state ==3)
{
  myservo1.write(180);
  delay(200);
  myservo.write(20);
  delay(200);
  myservo.write(-20); 
}
  
if (state ==4)
{
  myservo2.write(50);
  delay(200);
  myservo3.write(20);
  delay(200);
  myservo3.write(-20); 
}
  
if (state ==5)
{
  myservo2.write(170);
  delay(200);
  myservo3.write(20);
  delay(200);
  myservo3.write(-20);
}
  
if (state ==6)
{
  myservo2.write(100);
  delay(200);
  myservo3.write(20);
  delay(200);
  myservo3.write(-20); 
}
  
}
}
