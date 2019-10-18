#include <Servo.h>

#define e0clk 2
#define e0dt  3
#define e1clk 4
#define e1dt  5
#define e2clk 6
#define e2dt  7
#define e3clk 8
#define e3dt  9

#define sp0 10
#define sp1 11
#define sp2 12
#define sp3 13

int e0last = LOW ,e1last = LOW ,e2last = LOW ,e3last = LOW;
int e0n = LOW, e1n = LOW, e2n = LOW, e3n = LOW;
int e0pos = 179, e1pos, e2pos, e3pos;
Servo s0,s1,s2,s3;

 void setup() {
   for(int i=2; i<=9; i++)pinMode(i,INPUT);
   for(int i=10; i<=13; i++)pinMode(i, OUTPUT);
   s0.attach(sp0);
   s1.attach(sp1);
   s2.attach(sp2);
   s3.attach(sp3);
   Serial.begin (9600);
 } 

 void loop() { 
   e0n = digitalRead(e0clk);
   e1n = digitalRead(e1clk);
   e2n = digitalRead(e2clk);
   e3n = digitalRead(e3clk);

   //예로 소스코드 통일해줄것.(나머지 추가)
   if ((e0last == LOW) && (e0n == HIGH)) {
     if (digitalRead(e0dt) == LOW) e0pos-=5;
     else e0pos+=5;
     s0.write((abs(e0pos)) % 110 + 110);
     Serial.println (e0pos);
   }

   if ((e1last == LOW) && (e1n == HIGH)) {
     if (digitalRead(e1dt) == LOW) e1pos-=5;
     else e1pos+=5;
     s1.write((abs(e1pos)) % 180);
     Serial.println (e1pos);
   }

   if ((e2last == LOW) && (e2n == HIGH)) {
     if (digitalRead(e2dt) == LOW) e2pos-=5;
     else e2pos+=5;
     s2.write((abs(e2pos)) % 180);
     Serial.println (e2pos);
   }

   if ((e3last == LOW) && (e3n == HIGH)) {
     if (digitalRead(e3dt) == LOW) e3pos-=5;
     else e3pos+=5;
     s3.write((abs(e3pos)) % 180);
     Serial.println (e3pos);
   }
   e0last = e0n;
   e1last = e1n;
   e2last = e2n;
   e3last = e3n;
 } 
