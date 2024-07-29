const int swPin = 32; //4:ConnectorA 9:ConnectorB
const int ledPin = 25; //4:ConnectorA 9:ConnectorB 10:Builtin

void setup() {
  Serial.begin(115200);
  pinMode(swPin, INPUT);
  pinMode(ledPin, OUTPUT);
}


void loop() { 
  if (digitalRead(swPin) == HIGH) {
    digitalWrite(ledPin, LOW); //off
    Serial.println("Pushed");
    delay(300);
  } else {
    digitalWrite(ledPin, HIGH); //on
    Serial.println("Not Pushed");
    delay(300);
    
  }
}