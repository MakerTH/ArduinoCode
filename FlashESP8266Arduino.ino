//Pin CH_PD >> Pin 3 on Arduino
//Pin GPIO_0 >> Pin 2 on Arduino

void setup() {
 pinMode(3, OUTPUT);
 pinMode(2, OUTPUT);
 digitalWrite(2,LOW);
 digitalWrite(3, LOW);
 delay(1000);
 digitalWrite(3, HIGH);
}
void loop()
{
} 
