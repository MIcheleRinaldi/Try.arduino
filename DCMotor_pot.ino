const int potPin = 0;                    //Assegno il potenziometro al pin 0;
const int transistorPin = 11;            //Assegno il transistor al pin 11;
int potValue;                            //Variabile potenza che inizialmente è di 0;
int potValueMapped;

void setup() {
  pinMode(transistorPin, OUTPUT);         //Decido che il mio output finisce al pin 11;
}

void loop() {                             //Creo una funzione standard di arduino che mi consente di;
  potValue = analogRead(potPin);          //Legge il valore del pin analogico selezionato;
  potValueMapped = map(potValue, 0, 1024, 0 , 255  );
  analogWrite(transistorPin, potValueMapped);    //Scrive il valore analogico del pin 11 in questo caso e vi aggiunge il valore di potValue;
}
