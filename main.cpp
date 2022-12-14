//@LionoMaker
/*
Note:
please read this article before using ESP32 diffferent Modes
https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/wifi.html?highlight=wifi_mode_apsta#wi-fi-mode
*/

//Paractice this code on Platformio


#include<Arduino.h>
#include "WiFi.h"
 
const char *ssid = "ESP32_WROOM"; 
const char *password = "12345678"; //use eight character
 
void setup() {
 
  Serial.begin(115200);
  WiFi.softAP(ssid, password); // connecting to soft AP mode
 
//  WiFi.mode(WIFI_MODE_AP);
//  Serial.println(WiFi.softAPmacAddress()); // getting Macaddress
 
  Serial.println();
  Serial.print("IP address: ");
  Serial.println(WiFi.softAPIP());
  Serial.print("ssid: ");
  Serial.println(ssid);

 
}
 
void loop() {}
