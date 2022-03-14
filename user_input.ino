#define redbutton_pin 13
#define greenbutton_pin 12
#define bluebutton_pin 11 
void setup()
{
  pinMode(redbutton_pin, INPUT);
  pinMode(greenbutton_pin, INPUT);
  pinMode(bluebutton_pin, INPUT);
}

void loop()
{
  int find_red = digitalRead(redbutton_pin);
  int find_green = digitalRead(greenbutton_pin);
  int find_blue = digitalRead(bluebutton_pin);
  
  if(find_red == HIGH){
  //Program corresponding to find red color ball
  }
  else if(find_green == HIGH){
 //Program corresponding to find green color ball
  }
  else if(find_blue == HIGH){
  //Program corresponding to find blue color ball
  }
}
