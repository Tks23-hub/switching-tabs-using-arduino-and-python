//created by mohamed soliman 

const int trigPin = 12;
const int echoPin = 11;
long duration;
int distance;
bool motionDetected = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

float maxLenInMicroSec = 100 * 2 / 0.034;

void loop() {
  sendTrig();
  duration = pulseIn(echoPin, HIGH, maxLenInMicroSec);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance >= 1 && distance <= 100) {
    if (!motionDetected) {
      motionDetected = true;
      Serial.println("Motion detected!");
    }
  } else {
    if (motionDetected) {
      motionDetected = false;
      Serial.println("Motion ended!");
    }
  }
  
  delay(500);
}

void sendTrig() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
}