#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
IPAddress apIP(192, 168, 4, 1);

String _ssid     = "onlime 14"; // Для хранения SSID
String _password = "9887614555"; // Для хранения пароля сети
String _ssidAP = "WiFi";   // SSID AP точки доступа
String _passwordAP = ""; // пароль точки доступа
const char* host = "192.168.0.103";
const int port = 3000; 

void setup() {
  Serial.begin(9600);
  Serial.println("");
  Serial.println("Start 1-WIFI");
  WIFIinit();  //Запускаем WIFI
}

void loop()
{   
   postJSON();
   getRequest();
}
