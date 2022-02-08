
void setup() {
  // put your setup code here, to run once:
  display_setup();
  disply_dir_right_to_left();
  button_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  int number;
  int digit;
  int digit_pos = 4;
  static int count = 9999;
  
  if(is_button_pressed()){
    count++;
  }
  
  number = count % 10000;
  if(number == 0){
    display_digit(0,4);
  }
  while(number != 0){
    digit = number % 10;
    display_digit(digit,digit_pos);
    delay(5);
    number = number/10;
    digit_pos--;
  }
  
}
