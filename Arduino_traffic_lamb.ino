const int redPin = 8;  
const int yellowPin = 9; 
const int greenPin = 10; 

int redDelay = 3000;

void setup() {
  pinMode(redPin, OUTPUT);  
  pinMode(yellowPin, OUTPUT); 
  pinMode(greenPin, OUTPUT);  
}

void loop() {

  digitalWrite(redPin, HIGH);
  delay(redDelay);
  digitalWrite(redPin, LOW);
  delay(300);

  digitalWrite(yellowPin, HIGH);
  delay(2000);
  digitalWrite(yellowPin, LOW);
  delay(300);

  digitalWrite(greenPin, HIGH);
  delay(2000);
  digitalWrite(greenPin, LOW);
  delay(300);
}
