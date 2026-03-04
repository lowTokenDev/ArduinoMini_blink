
/*
Arduino Mini blink
*/

const int ledPin = 13; 

const long interval = 2000;       // Intervalle de clignotement (en millisecondes)

int ledState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {

    digitalWrite(ledPin, ledState);
    ledState = !ledState;
    delay(interval);
}
