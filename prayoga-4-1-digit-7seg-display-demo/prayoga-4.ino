
#define PIN_SEGMENT_A   4
#define PIN_SEGMENT_B   5
#define PIN_SEGMENT_C   6
#define PIN_SEGMENT_D   8
#define PIN_SEGMENT_E   9
#define PIN_SEGMENT_F   3
#define PIN_SEGMENT_G   2
#define PIN_SEGMENT_DP   7

#define COUNT_DELAY 500


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_SEGMENT_A,OUTPUT);
  pinMode(PIN_SEGMENT_B,OUTPUT);
  pinMode(PIN_SEGMENT_C,OUTPUT);
  pinMode(PIN_SEGMENT_D,OUTPUT);
  pinMode(PIN_SEGMENT_E,OUTPUT);
  pinMode(PIN_SEGMENT_F,OUTPUT);
  pinMode(PIN_SEGMENT_G,OUTPUT);
  pinMode(PIN_SEGMENT_DP,OUTPUT);

  digitalWrite(PIN_SEGMENT_DP,LOW);

}

void loop() {
  // put your main code here, to run repeatedly:

  //0
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,HIGH);
  digitalWrite(PIN_SEGMENT_E,HIGH);
  digitalWrite(PIN_SEGMENT_F,HIGH);
  digitalWrite(PIN_SEGMENT_G,LOW);

  delay(COUNT_DELAY);

  //1
  digitalWrite(PIN_SEGMENT_A,LOW);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,LOW);
  digitalWrite(PIN_SEGMENT_E,LOW);
  digitalWrite(PIN_SEGMENT_F,LOW);
  digitalWrite(PIN_SEGMENT_G,LOW);

  delay(COUNT_DELAY);

  //2
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,LOW);
  digitalWrite(PIN_SEGMENT_D,HIGH);
  digitalWrite(PIN_SEGMENT_E,HIGH);
  digitalWrite(PIN_SEGMENT_F,LOW);
  digitalWrite(PIN_SEGMENT_G,HIGH);

  delay(COUNT_DELAY);

  //3
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,HIGH);
  digitalWrite(PIN_SEGMENT_E,LOW);
  digitalWrite(PIN_SEGMENT_F,LOW);
  digitalWrite(PIN_SEGMENT_G,HIGH);

  delay(COUNT_DELAY);

  //4
  digitalWrite(PIN_SEGMENT_A,LOW);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,LOW);
  digitalWrite(PIN_SEGMENT_E,LOW);
  digitalWrite(PIN_SEGMENT_F,HIGH);
  digitalWrite(PIN_SEGMENT_G,HIGH);

  delay(COUNT_DELAY);

  //5
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,LOW);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,HIGH);
  digitalWrite(PIN_SEGMENT_E,LOW);
  digitalWrite(PIN_SEGMENT_F,HIGH);
  digitalWrite(PIN_SEGMENT_G,HIGH);

  delay(COUNT_DELAY);

   //6
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,LOW);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,HIGH);
  digitalWrite(PIN_SEGMENT_E,HIGH);
  digitalWrite(PIN_SEGMENT_F,HIGH);
  digitalWrite(PIN_SEGMENT_G,HIGH);

  delay(COUNT_DELAY);

  //7
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,LOW);
  digitalWrite(PIN_SEGMENT_E,LOW);
  digitalWrite(PIN_SEGMENT_F,LOW);
  digitalWrite(PIN_SEGMENT_G,LOW);

  delay(COUNT_DELAY);

  //8
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,HIGH);
  digitalWrite(PIN_SEGMENT_E,HIGH);
  digitalWrite(PIN_SEGMENT_F,HIGH);
  digitalWrite(PIN_SEGMENT_G,HIGH);

  delay(COUNT_DELAY);

  //9
  digitalWrite(PIN_SEGMENT_A,HIGH);
  digitalWrite(PIN_SEGMENT_B,HIGH);
  digitalWrite(PIN_SEGMENT_C,HIGH);
  digitalWrite(PIN_SEGMENT_D,HIGH);
  digitalWrite(PIN_SEGMENT_E,LOW);
  digitalWrite(PIN_SEGMENT_F,HIGH);
  digitalWrite(PIN_SEGMENT_G,HIGH);

  delay(COUNT_DELAY);
  

}
