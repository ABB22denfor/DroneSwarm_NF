#include <ESP32Servo.h>
 
// Sensor & motor
Servo esc;
 
void setup() {
  Serial.begin(115200);
 
  // Initiera ESC
  esc.attach(25); // Din ESC signalpinne till GPIO 25
  esc.writeMicroseconds(1000); // Arm ESC
  delay(500); // Vänta på bekräftelse från ESC
}
 
void loop() {
  int baseThrottle = 1300; // Justera om motorn inte startar
 
  esc.writeMicroseconds(baseThrottle); // Styr motorn

  Serial.println("run");

  delay(2000);

  esc.writeMicroseconds(0); // Styr motorn

  Serial.println("not");

  delay(1000);
}
