
#define PIN_BUTTON 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_BUTTON,INPUT);
}

void loop() / put your main code here, to run repeatedly:
  static int prev_status = LOW;
  int current_status;
  static unsigned int count = 0;
  
  current_status = digitalRead(PIN_BUTTON);

  
  if( !prev_status && current_status ){
    //button has been pressed
    delay(50);
    if(digitalRead(PIN_BUTTON)){
      ++count;
      Serial.print("Button Pressed:");
      Serial.println(count);
    }
  }

  prev_status = current_status;

}
