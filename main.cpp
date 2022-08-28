
#include<Arduino.h>
#include "WiFi.h"
 
const char *ssid = "ESP32_WROOM"; 
const char *password = "1234";
 
void setup() {
 
  Serial.begin(115200);
  WiFi.softAP(ssid, password); // connecting to soft AP mode
 
  Serial.println();
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
  Serial.print("ssid: ");
  Serial.println(ssid);

 
}
 
void loop() {}