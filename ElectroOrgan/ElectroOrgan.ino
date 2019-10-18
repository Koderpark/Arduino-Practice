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
#define B4 493
#define C5 523

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<13; i++) pinMode(i, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(0) == LOW){  tone(13, C4, 100);}
  if(digitalRead(1) == LOW){  tone(13, C4s, 100);}
  if(digitalRead(2) == LOW){  tone(13, D4, 100);}
  if(digitalRead(3) == LOW){  tone(13, D4s, 100);}
  if(digitalRead(4) == LOW){  tone(13, E4, 100);}
  if(digitalRead(5) == LOW){  tone(13, F4, 100);}
  if(digitalRead(6) == LOW){  tone(13, F4s, 100);}
  if(digitalRead(7) == LOW){  tone(13, G4, 100);}
  if(digitalRead(8) == LOW){  tone(13, G4s, 100);}
  if(digitalRead(9) == LOW){  tone(13, A4, 100);}
  if(digitalRead(10) == LOW){ tone(13, A4s, 100);}
  if(digitalRead(11) == LOW){ tone(13, B4, 100);}
  if(digitalRead(12) == LOW){ tone(13, C5, 100);}
}
