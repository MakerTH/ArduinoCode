
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to


float sensorValue = 0;        // value read from the pot
float fsr = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue = analogRead(analogInPin);
  sensorValue = sensorValue*5/1023;
  fsr = (21.31*pow(sensorValue,4))-(86.74*pow(sensorValue,3))+(142.9*pow(sensorValue,2))-(29.84*sensorValue);

  // print the results to the serial monitor:
  Serial.print("FSR sensor = " );
  Serial.print(fsr);

  delay(200);
}
