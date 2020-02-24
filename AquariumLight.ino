//Define the pins you used on your Arduino with their corresponding LED colors.
#define REDPIN 3
#define GREENPIN 6
#define BLUEPIN 5

void setup() {
  //Telling the Arduino what each used pin’s job is.
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}

void loop() {
  //Declare variables for red, green, and blue lights. Declare variables for the sonar sensor to compute the equation for distance. 
  int r, g, b;

  //To output white lights.
  r = 255;
  g = 255;
  b = 255;

  analogWrite(REDPIN, r);
  analogWrite(BLUEPIN, b);
  analogWrite(GREENPIN, g); 
}
