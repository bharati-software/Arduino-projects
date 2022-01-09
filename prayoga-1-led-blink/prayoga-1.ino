
#define LED_PIN 3
#define LED_DELAY 2500

void setup()
{ 
  pinMode(LED_PIN,OUTPUT);
}

void loop()
{
  digitalWrite(LED_PIN,HIGH);
  delay(LED_DELAY);
  digitalWrite(LED_PIN,LOW);
  delay(LED_DELAY);
}
