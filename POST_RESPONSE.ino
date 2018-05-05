void postJSON() {
  String json = Serial.readString();
  Serial.println(json);
  
  WiFiClient client;
  if (!client.connect(host, port))
    {
      Serial.println("Error");
    }

   // Send request to the server:
   Serial.print("Requesting POST: ");
   client.println("POST / HTTP/1.1");
   client.println("Host: 192.168.0.101");
   client.println("Accept: */*");
   client.println("Content-Type: application/json");
   client.print("Content-Length: ");
   client.println(json.length());
   client.println();
   client.print(json);
   delay(5000);
}
