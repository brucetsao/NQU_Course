void setup() {
  // put your setup code here, to run once:
      pinMode(13,OUTPUT) ;
      pinMode(7,INPUT);
      
}

void loop() {
  // put your main code here, to run repeatedly:
    if (digitalRead(7) == LOW)
      {
           digitalWrite(13,HIGH);
      }

}
