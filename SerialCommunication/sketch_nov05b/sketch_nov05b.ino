void setup() 
{
  Serial.begin(9600);   //시리얼모니터
}
void loop()
{
  while(1){
    /*if(Serial.available()){
      String inString = Serial.readStringUntil('\n');
      Serial.println(inString);
    }*/
    delay(5000);
    Serial.println("1234");
  }
}
