void getRequest() {
  if (WiFi.status() == WL_CONNECTED){
      HTTPClient http;
      http.begin("http://192.168.0.103:3000/testrelay");
      int httpCode = http.GET();//Send the request 
      if (httpCode > 0) { //Check the returning code
        String payload = http.getString();   //Get the request response payload
        Serial.println(payload);
      }
      http.end();
    }
    delay(1500);
}
