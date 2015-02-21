
#define REDPIN 6
#define GREENPIN 3
#define BLUEPIN 5

int r;
int g;
int b;

void setup()
{
 r = 105; //these intial values were based on trial and error. Adjust as desired.
 g = 255;
 b = 255;
  
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
  
  
  analogWrite(REDPIN,r);
  analogWrite(BLUEPIN,b);
  analogWrite(GREENPIN,g);

}

void loop()
{
 
  ++r;
  --b;  
  
  if (r>255) {
    r = 255;
  }
  if (b<30) {
    b = 30;
  }
 
 g = b;
 
  
  analogWrite(REDPIN,r);
  analogWrite(BLUEPIN,b);
  analogWrite(GREENPIN,g);
 /* Serial.print("\t");
  Serial.print(r);
  Serial.print("\t");
  Serial.println(b);*/
  delay(5000);
  
}
