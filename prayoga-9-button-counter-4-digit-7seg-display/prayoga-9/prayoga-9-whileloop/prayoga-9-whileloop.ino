#define PIN_SEGMENT_A     4
#define PIN_SEGMENT_B     2
#define PIN_SEGMENT_C     8
#define PIN_SEGMENT_D     6
#define PIN_SEGMENT_E     5
#define PIN_SEGMENT_F     3
#define PIN_SEGMENT_G     9
#define PIN_SEGMENT_DP    7


#define CTRL_PIN_D1       10
#define CTRL_PIN_D2       11
#define CTRL_PIN_D3       12
#define CTRL_PIN_D4       13

#define PIN_BUTTON        A5

#define MAX_COUNT_VALUE  10000UL

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  sevent_seg_display_pin_setup();
  pinMode(PIN_BUTTON,INPUT);
}

void loop() {

  static unsigned int count = 0;
  static int number = 0,digit_pos = 0;
  static unsigned long curr_time = millis();
  
  if(is_button_pressed()){
    ++count;
    //Serial.println(count);
  }

  number = count % MAX_COUNT_VALUE;

  if(number == 0){
    display_digit(0,1);
  }

  digit_pos = 1;
  while(number){
    display_digit(number%10,digit_pos);
    digit_pos++;
    delay(5);
    number = number / 10;
  }

}


void sevent_seg_display_pin_setup(void)
{
  pinMode(PIN_SEGMENT_A,OUTPUT);
  pinMode(PIN_SEGMENT_B,OUTPUT);
  pinMode(PIN_SEGMENT_C,OUTPUT);
  pinMode(PIN_SEGMENT_D,OUTPUT);
  pinMode(PIN_SEGMENT_E,OUTPUT);
  pinMode(PIN_SEGMENT_F,OUTPUT);
  pinMode(PIN_SEGMENT_G,OUTPUT);
  pinMode(PIN_SEGMENT_DP,OUTPUT);
  
  pinMode(CTRL_PIN_D1,OUTPUT);
  pinMode(CTRL_PIN_D2,OUTPUT);
  pinMode(CTRL_PIN_D3,OUTPUT);
  pinMode(CTRL_PIN_D4,OUTPUT);
  
  digitalWrite(PIN_SEGMENT_DP,HIGH);
}

bool is_button_pressed(void)
{
  static int prev_status = LOW;
  int current_status;
  int is_button_pressed = false;
  
  current_status = digitalRead(PIN_BUTTON);
  
  if( !prev_status && current_status ){
    //button has been pressed
    delay(50);
    if(digitalRead(PIN_BUTTON)){
      is_button_pressed = true;
    }
  }

  prev_status = current_status;

  return is_button_pressed;

}


void display_digit(int digit, int digit_pos){
  switch(digit_pos){
    case 1:{
      digitalWrite(CTRL_PIN_D4,HIGH);
      digitalWrite(CTRL_PIN_D3,LOW);
      digitalWrite(CTRL_PIN_D2,LOW);
      digitalWrite(CTRL_PIN_D1,LOW);
      break;
    }
    case 2:{
      digitalWrite(CTRL_PIN_D4,LOW);
      digitalWrite(CTRL_PIN_D3,HIGH);
      digitalWrite(CTRL_PIN_D2,LOW);
      digitalWrite(CTRL_PIN_D1,LOW);
      break;
    }
    case 3:{
      digitalWrite(CTRL_PIN_D4,LOW);
      digitalWrite(CTRL_PIN_D3,LOW);
      digitalWrite(CTRL_PIN_D2,HIGH);
      digitalWrite(CTRL_PIN_D1,LOW);
      break;
    }

    case 4:{
      digitalWrite(CTRL_PIN_D4,LOW);
      digitalWrite(CTRL_PIN_D3,LOW);
      digitalWrite(CTRL_PIN_D2,LOW);
      digitalWrite(CTRL_PIN_D1,HIGH);
      break;
    }
  }
  switch(digit % 10){
    case 0:{ 
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 1:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 2:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,HIGH);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 3:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }    
    case 4:{
      digitalWrite(PIN_SEGMENT_A,HIGH);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 5:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 6:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,HIGH);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 7:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,HIGH);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,HIGH);
      digitalWrite(PIN_SEGMENT_G,HIGH);
      break;
    }
    case 8:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,LOW);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }
    case 9:{
      digitalWrite(PIN_SEGMENT_A,LOW);
      digitalWrite(PIN_SEGMENT_B,LOW);
      digitalWrite(PIN_SEGMENT_C,LOW);
      digitalWrite(PIN_SEGMENT_D,LOW);
      digitalWrite(PIN_SEGMENT_E,HIGH);
      digitalWrite(PIN_SEGMENT_F,LOW);
      digitalWrite(PIN_SEGMENT_G,LOW);
      break;
    }    
  }
  
}
