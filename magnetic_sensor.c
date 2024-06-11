/*
    Project name : Magnetic Sensor
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-magnetic-sensor
*/

const int magnetSensorPin = 2; // Pin connected to the magnetic sensor
const int ledPin = 13; // Pin connected to the LED

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(magnetSensorPin, INPUT); // Set the sensor pin as input
  pinMode(ledPin, OUTPUT); // Set the LED pin as output
}

void loop() {
  int sensorValue = digitalRead(magnetSensorPin); // Read the sensor value
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Magnetic Sensor Value: ");
  Serial.println(sensorValue);
  
  // Toggle the LED based on the sensor value
  if (sensorValue == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  delay(100); // Delay for stability
}
