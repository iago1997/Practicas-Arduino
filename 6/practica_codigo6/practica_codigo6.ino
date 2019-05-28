
const int PIN = 5;
const int ledPin2= 6;
int ledPin = 8;


void setup() {
  
  Serial.begin(9600);
  pinMode(ledPin2, OUTPUT);
  pinMode(PIN, INPUT);
  pinMode(ledPin, OUTPUT);
    
}

void loop() {
  
  int cm = ping(ledPin2,PIN);

  if(cm <=20) {
  digitalWrite(ledPin, HIGH);}
  else {
  digitalWrite(ledPin, LOW);}
  
  delay(1000);
}
 int ping(int ledpin2, int PIN){
 long duracion, distancia;

  digitalWrite(ledPin2, LOW);
  delayMicroseconds(4);
  digitalWrite(ledPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(ledPin2, LOW);
  
  duracion = pulseIn(PIN,HIGH);
  distanceCm=duracion * 10 /294 / 2;
  return distancia;
}
