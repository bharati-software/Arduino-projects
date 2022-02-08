#define PIN_BUTTON    A5  

void button_setup(void)
{
  pinMode(PIN_BUTTON,INPUT);
}

bool is_button_pressed()
{
  static int prev_status = LOW;
  int current_status;
  bool status = false;
  
  current_status = digitalRead(PIN_BUTTON);

  if( !prev_status && current_status){
    //button has been pressed
    delay(50);
    if(digitalRead(PIN_BUTTON)){
      status = true;
    }
  }

   prev_status = current_status; 

   return status;
}
