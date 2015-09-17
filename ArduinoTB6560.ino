

#define stepaxisx  8
#define diraxisx  9
int a;

void setup() 
{
  Serial.begin(9600);
  pinMode(stepaxisx, OUTPUT);
  pinMode(diraxisx, OUTPUT);
}


void loop() 
{
  Forwardx(1800);
  Backx(1800);
}

void  Forwardx(int pluse)
{
     for(a=0;a<pluse;a++)
     {     
    digitalWrite(diraxisx, LOW);
    digitalWrite(stepaxisx, HIGH);   
    delay(1);               
    digitalWrite(stepaxisx, LOW);  
    delay(1); 
     }       
}


void  Backx(int pluse)
{
       for(a=0;a<pluse;a++)
     {
    digitalWrite(diraxisx, HIGH);
    digitalWrite(stepaxisx, HIGH);   
    delay(1);               
    digitalWrite(stepaxisx, LOW);  
    delay(1); 
     }    
}
