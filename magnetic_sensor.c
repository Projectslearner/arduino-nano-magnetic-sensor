/*
    Project name : Magnetic Sensor
    Modified Date: 11-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-magnetic-sensor
*/

const int magnetSensorPin = 2; // Pin connected to the magnetic sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(magnetSensorPin, INPUT); // Set the sensor pin as input
}

void loop() 
{
  int sensorValue = digitalRead(magnetSensorPin); // Read the sensor value
  
  // Print the sensor value to the Serial Monitor
  Serial.print("Magnetic Sensor Value: ");
  Serial.println(sensorValue);
  
  delay(100); // Delay for stability
}
