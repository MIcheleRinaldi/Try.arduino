const int potPin = 0;                    //Assegno il potenziometro al pin 0;
const int transistorPin = 11;            //Assegno il transistor al pin 11;
int potValue = 0;                       //Variabile potenza che inizialmente è di 0;
void setup() {
pinMode(transistorPin, OUTPUT);          //Decido che il mio output finisce al pin 11;
}
void loop() {                            //Creo una funzione standard di arduino che mi consente di;
potValue = analogRead(potPin) / 4;       //Legge il valore del pin analogico selezionato;
analogWrite(transistorPin, potValue);    //Scrive il valore analogico del pin 11 in questo caso e vi aggiunge il valore di potValue;
}
