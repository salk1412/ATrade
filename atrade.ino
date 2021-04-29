#include <Servo.h>
int button = 11;
int led = 2;
Servo i;
Servo ii;
Servo iii;
Servo iiii;
void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
pinMode(led, OUTPUT) ;
i.attach(9);
ii.attach(10);
iii.attach(12);
iiii.attach(13);
}
void loop() {
  // put your main code here, to run repeatedly:
int buttonStatus = digitalRead(button);
if (buttonStatus == HIGH)
{
    digitalWrite(led, HIGH);
    i.write(0);                                  
    ii.write(0);              
    delay(600);     
    i.write(75);                  
    ii.write(75);              
    delay(600);      
    i.write(0);                                  
    ii.write(0);  
    iii.write(0);                                  
    iiii.write(0);              
    delay(600);     
    iii.write(75);                  
    iiii.write(75);              
    delay(600);      
    iii.write(0);                                  
    iiii.write(0);  
}
else
{
digitalWrite(led,LOW);
}
}
