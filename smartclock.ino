// variables that won't change
const int alarmPowerPin = 2;
const int hourPin = 4;
const int minutePin = 7;

// variables that will change
// intializing starting hour and time
int currentHour = 1;
int currentMinute = 1;


void setup() {
  // put your setup code here, to run once:
  pinMode(alarmPowerPin, OUTPUT);
  pinMode(hourPin, OUTPUT);
  pinMode(minutePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // pressing and keeping the alarm button on (high state)
  digitalWrite(alarmPowerPin, HIGH);
  // incrementing the hour by turning on the hour pin
  digitalWrite(hourPin, HIGH);
  delay(1000);
  digitalWrite(hourPin, LOW);
  delay(1000);

  // changing the minute now
  digitalWrite(minutePin, HIGH);
  delay(1000);
  digitalWrite(minutePin, LOW);

}
