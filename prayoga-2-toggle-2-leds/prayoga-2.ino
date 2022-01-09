
#define LED1_PIN 3
#define LED2_PIN 5

#define LED_DELAY 500

void setup()
{ 
  pinMode(LED1_PIN,OUTPUT);
  pinMode(LED2_PIN,OUTPUT);
}

void loop()
{
  digitalWrite(LED1_PIN,HIGH);
  digitalWrite(LED2_PIN,HIGH);
  delay(LED_DELAY);
  digitalWrite(LED2_PIN,LOW);
  delay(LED_DELAY);
  digitalWrite(LED1_PIN,LOW);
  digitalWrite(LED2_PIN,HIGH);
  delay(LED_DELAY);
  digitalWrite(LED2_PIN,LOW);
  delay(LED_DELAY);
}
