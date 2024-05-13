
#include <ESP8266WiFi.h>
// WiFi parameters
String  ssid = "Redmi Note 12 Pro+ 5G";
String  password = "m67275kr";
void setup() {
// Start Serial
Serial.begin(115200);
// Connect to WiFi
WiFi.begin(ssid, password);
while (WiFi.status() != WL_CONNECTED) {
delay(500);
Serial.println(".");
}
Serial.println("");
Serial.println("WiFi connected");

// Print the IP address
Serial.println(WiFi.localIP());
}
void loop() {
  // put your main code here, to run repeatedly:
}
