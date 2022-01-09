/* 4 LED ಗಳನ್ನು ಉಪಯೋಗಿಸಿ  0 ರಿಂದ 15 ರ ತನಕ ಸಂಖ್ಯೆಗಳ 
ಎಣಿಕೆಯನ್ನು ಪ್ರದರ್ಶಿಸಿ . ಪ್ರತಿ ಎಣಿಕೆಯ ನಡುವೆ 1 ಸೆಕೆಂಡ್ 
ವಿಳಂಬವನ್ನು ಇರಿಸಿ. */

#define LED0  5
#define LED1  4
#define LED2  3
#define LED3  2

void setup()
{ 
  pinMode(LED0,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);


  

}

void loop()
{
  //0
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  
  delay(1000);
  
  //1
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  
  delay(1000);
  
  
  //2
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  
  delay(1000);
  
  //3
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  
  delay(1000);
  
  //4
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  
  delay(1000);
  
  //5
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  
  delay(1000);
  
  //6
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  
  delay(1000);
  
  //7
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  
  delay(1000);

  //8
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  
  delay(1000);
  
  
  //9
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  
  delay(1000);
  
  //10
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  
  delay(1000);
  
  //11
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  
  delay(1000);
  
  //12
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  
  delay(1000);
  
  //13
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  
  delay(1000);
  
  //14
  digitalWrite(LED0,LOW);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  
  delay(1000);

  //15
  digitalWrite(LED0,HIGH);
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);

   delay(1000);
  
  
  

}
