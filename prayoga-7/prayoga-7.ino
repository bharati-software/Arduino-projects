#define PIN_SEGMENT_A     4
#define PIN_SEGMENT_B     5
#define PIN_SEGMENT_C     6
#define PIN_SEGMENT_D     8
#define PIN_SEGMENT_E     9
#define PIN_SEGMENT_F     3
#define PIN_SEGMENT_G     2
#define PIN_SEGMENT_DP    7

#define PIN_BUTTON        10

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

  Serial.begin(9600);
  
  pinMode(PIN_BUTTON,INPUT);

}



void loop() {
  // put your main code here, to run repeatedly:
  
  static int prev_status = LOW;
  int current_status;
  static unsigned int count = 0;
  
  current_status = digitalRead(PIN_BUTTON);

  
  if( !prev_status && current_status){
    //button has been pressed
    delay(50);
    if(digitalRead(PIN_BUTTON)){
      ++count;
      Serial.print("Button Pressed:");
      Serial.println(count);
    }
  }

  prev_status = current_status;

  switch(count % 10){
    case 0:{ 
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 1:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 2:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 3:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }    
    case 4:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 5:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 6:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 7:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 8:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 9:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }    
  }
  
}
