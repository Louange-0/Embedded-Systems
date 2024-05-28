#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  
  if (Serial.available()) {
    String input = Serial.readString();
//    Serial.println("Liza: " + input); 
    mySerial.println("Liza: " + input); 
    delay(100); 
  }

  
  if (mySerial.available()) {
    String response = mySerial.readString();
    Serial.println(response); 
  }
}
