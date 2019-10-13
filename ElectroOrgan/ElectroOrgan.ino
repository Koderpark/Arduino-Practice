#define C4 261
#define C4s 277
#define D4 293
#define D4s 311
#define E4 329
#define F4 349
#define F4s 369
#define G4 391
#define G4s 415
#define A4 440
#define A4s 466
#define B4 493s
#define C5 523

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<13; i++) pinMode(i, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(0) == HIGH){  Serial.print("C ");  tone(13, C4, 1);}
  if(digitalRead(1) == HIGH){  Serial.print("C# "); tone(13, C4s, 1);}
  if(digitalRead(2) == HIGH){  Serial.print("D ");  tone(13, D4, 1);}
  if(digitalRead(3) == HIGH){  Serial.print("D# "); tone(13, D4s, 1);}
  if(digitalRead(4) == HIGH){  Serial.print("E ");  tone(13, E4, 1);}
  if(digitalRead(5) == HIGH){  Serial.print("F ");  tone(13, F4, 1);}
  if(digitalRead(6) == HIGH){  Serial.print("F# "); tone(13, F4s, 1);}
  if(digitalRead(7) == HIGH){  Serial.print("G ");  tone(13, G4, 1);}
  if(digitalRead(8) == HIGH){  Serial.print("G# "); tone(13, G4s, 1);}
  if(digitalRead(9) == HIGH){  Serial.print("A ");  tone(13, A4, 1);}
  if(digitalRead(10) == HIGH){ Serial.print("A# "); tone(13, A4s, 1);}
  if(digitalRead(11) == HIGH){ Serial.print("B ");  tone(13, B4, 1);}
  if(digitalRead(12) == HIGH){ Serial.print("C ");  tone(13, C5, 1);}
}
