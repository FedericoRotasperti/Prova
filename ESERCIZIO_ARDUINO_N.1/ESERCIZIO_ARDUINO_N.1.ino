// Includo la libreria per avere una seriale aggiuntiva (per il Bluetooth)
#include <SoftwareSerial.h>

// Dichiaro una nuova variabile che rappresenta la serial aggiuntiva
// e che usa i pin 2-3 come RX-TX
SoftwareSerial btSerial(2, 3);

// Messaggio letto
char msg;

void setup() {
  // put your setup code here, to run once:
  // Inizializzo tutte le seriali
  Serial.begin(9600);
  btSerial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  // Riscrivo sulla seriale ciò che ricevo dalla serial softwware
  if(btSerial.available() > 0) {
    msg = btSerial.read();
    Serial.println(msg);
  }

}
