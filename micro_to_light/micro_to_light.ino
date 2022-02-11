int soundSensor = A0;
int LED = 2;

void setup()
{ Serial.begin(9600);
  pinMode(soundSensor,INPUT);
  pinMode(LED,OUTPUT);
}
void loop()
{
  int statusSensor = analogRead (soundSensor);
  Serial.println(statusSensor); 
  delay(15000);

  /*if (statusSensor == 1)
  {
    digitalWrite(LED,HIGH);
   }
   else
   {
    digitalWrite(LED,LOW);
   }*/
}
