// this code is to connect the obd port to a bluetooth device
// this has been tried and tested on phone and works perfectly

#include<SoftwareSerial.h>

SoftwareSerial BTSerial(3,2); // TX | RX of hc-05 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BTSerial.begin(9600);
  Serial.println("Serial Monitor started.....");
  Serial.println("Trying to connect to bt....");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    BTSerial.write(Serial.read());
  }
  if(BTSerial.available()){
    Serial.write(BTSerial.read());
  }
  delay(50);
}
