void setup() {
  Serial.begin(9600);
    pinMode(13, OUTPUT);  
}
  int dummy=0;

void loop() {
  
  delay(1000);
    digitalWrite(13,HIGH);
  dummy++;
  Serial.print( dummy);
  Serial.print(" sec have elapsed, exact time in ms is ");
  int actual=millis();
  Serial.println(actual);
  delay(1000);
   digitalWrite(13,LOW);
  dummy++;
  Serial.print( dummy);
  Serial.println(" sec have elapsed");
}



