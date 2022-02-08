#define PIN_SEGMENT_A  4   
#define PIN_SEGMENT_B  2    
#define PIN_SEGMENT_C  8   
#define PIN_SEGMENT_D  6  
#define PIN_SEGMENT_E  5   
#define PIN_SEGMENT_F  3   
#define PIN_SEGMENT_G  9   
#define PIN_SEGMENT_DP 7  

#define PIN_DIGIT_1   10
#define PIN_DIGIT_2   11
#define PIN_DIGIT_3   12
#define PIN_DIGIT_4   13

void display_setup(void)
{
  pinMode(PIN_SEGMENT_A,OUTPUT);
  pinMode(PIN_SEGMENT_B,OUTPUT);
  pinMode(PIN_SEGMENT_C,OUTPUT);
  pinMode(PIN_SEGMENT_D,OUTPUT);
  pinMode(PIN_SEGMENT_E,OUTPUT);
  pinMode(PIN_SEGMENT_F,OUTPUT);
  pinMode(PIN_SEGMENT_G,OUTPUT);
  pinMode(PIN_SEGMENT_DP,OUTPUT);

  pinMode(PIN_DIGIT_1,OUTPUT);
  pinMode(PIN_DIGIT_2,OUTPUT);
  pinMode(PIN_DIGIT_3,OUTPUT);
  pinMode(PIN_DIGIT_4,OUTPUT);


  digitalWrite(PIN_SEGMENT_DP,HIGH);

  
}


void display_digit(int  digit,int digit_pos)
{
  switch(digit_pos){
    case 1:{
      digitalWrite(PIN_DIGIT_1,HIGH);
      digitalWrite(PIN_DIGIT_2,LOW);
      digitalWrite(PIN_DIGIT_3,LOW);
      digitalWrite(PIN_DIGIT_4,LOW);
      break;
    }

    case 2:{
      digitalWrite(PIN_DIGIT_1,LOW);
      digitalWrite(PIN_DIGIT_2,HIGH);
      digitalWrite(PIN_DIGIT_3,LOW);
      digitalWrite(PIN_DIGIT_4,LOW);
      break;
    }
    
    case 3:{
      digitalWrite(PIN_DIGIT_1,LOW);
      digitalWrite(PIN_DIGIT_2,LOW);
      digitalWrite(PIN_DIGIT_3,HIGH);
      digitalWrite(PIN_DIGIT_4,LOW);
      break;
    }

    case 4:{
      digitalWrite(PIN_DIGIT_1,LOW);
      digitalWrite(PIN_DIGIT_2,LOW);
      digitalWrite(PIN_DIGIT_3,LOW);
      digitalWrite(PIN_DIGIT_4,HIGH);
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




