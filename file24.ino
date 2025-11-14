int sensor;
int led=9;

void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);
}

void loop() {
  sensor=analogRead(A1);
  int brightness=map(sensor,0,500,255,0);
  analogWrite(led,brightness);
  Serial.print("Sensor Value:");
  Serial.print(sensor);
  Serial.print("          LED Brightness:");
  Serial.println(brightness);
}
