//Arduino code to switch on and off a button;

// constants won't change.
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
int stato = 0;               // variable to create the statements of the button

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  
  // check if the buttonState is on HIGH and apply a value of 1
  // so what happend is that the reading loop will be: 1-0;1-1;1-0;1-1;
  if (buttonState == HIGH){
    stato = 1 - stato;
  }
  
  // if it is, the buttonState is HIGH:
  if (stato == 1) {    
    // turn LED on:    
    digitalWrite(ledPin, HIGH);  
  } 
  // else
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }delay(100);
}
