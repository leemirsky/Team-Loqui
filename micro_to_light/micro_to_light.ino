int sound_analog = A0;
int sound_digital = 7;
int LED = 2;

void setup()
{ Serial.begin(9600);
  pinMode(sound_digital,INPUT);
  pinMode(LED,OUTPUT);
}
void loop()
{
  int val_digital = digitalRead(sound_digital);
  int val_analog = analogRead(sound_analog);
  
  Serial.println("Analog ");
  Serial.println(val_analog);
  Serial.println("Digital ");
  Serial.println(val_digital);
  delay(5000);

  if (val_digital == HIGH)
  {
    digitalWrite(LED,HIGH);
   }
   else
   {
    digitalWrite(LED,LOW);
   }
}
