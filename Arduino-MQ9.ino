
void setup() 
{
    Serial.begin(9600);
}
 
void loop() 
{
    float vol;
    int sensorValue = analogRead(A0);
    vol=(float)sensorValue/1024;
    Serial.print("The gas density is ");
    Serial.println(vol);
    delay(100);
}
