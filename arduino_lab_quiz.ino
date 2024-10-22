const int redPin = 8;  
const int yellowPin = 9; 
const int greenPin = 10; 
const int buttonPin = 2;

int is_button_active = 0;
int button_clicked_time = 0;

int redDelay = 3000;
int waiting = 2000;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);  
  pinMode(yellowPin, OUTPUT); 
  pinMode(greenPin, OUTPUT);  
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  unsigned long startTime = millis();
  while (millis() - startTime < waiting) {
    if (digitalRead(buttonPin) == LOW) {
      delay(500);
      button_clicked_time += 1;
      Serial.println(button_clicked_time);
      startTime = millis();
    }
  }
  if (button_clicked_time == 1) {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(5000);
    digitalWrite(redPin, LOW);
  }
  if (button_clicked_time == 2) {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(5000); 
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
  }
  if (button_clicked_time == 3) {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, HIGH);
    delay(5000); 
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  }
  if (button_clicked_time == 4) {
    Serial.println("ERRORR");
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(5000);    

    }
  button_clicked_time = 0;


  
//  digitalRead(buttonPin);
//  Serial.println(digitalRead(buttonPin));
//  if (digitalRead(buttonPin) == LOW) {
//    is_button_active = 1;
//  }
//  
//  Serial.println(is_button_active);
//  digitalWrite(redPin, HIGH);
//  delay(redDelay);
//  digitalWrite(redPin, LOW);
//  delay(300);
//
//  digitalWrite(yellowPin, HIGH);
//  delay(2000);
//  digitalWrite(yellowPin, LOW);
//  delay(300);
//
//  digitalWrite(greenPin, HIGH);
//  delay(2000);
//  digitalWrite(greenPin, LOW);
//  delay(300);
}
