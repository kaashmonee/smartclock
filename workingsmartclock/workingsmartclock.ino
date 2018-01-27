int n = 0;

int currentTime = 1;
int currentMinute 

void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  /*Serial.println("High");
  digitalWrite(7, HIGH);
  delay(500);
  Serial.println("Low");
  digitalWrite(7, LOW);
  delay(500);*/
  if(Serial.available() > 0) {
    int a = Serial.read();
    Serial.println(a);
    if(a == 49) {
      digitalWrite(7, HIGH);
      delay(100);
      Serial.println("LOW");
      digitalWrite(7, LOW);
      delay(100);
      Serial.println("Back to high");
      delay(100);
    }
  }
 
 /* else if(Serial.available() && Serial.readString() == "n") {
  }*/
   
}
