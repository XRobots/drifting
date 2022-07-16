int var;

void setup() {

  pinMode(A0,INPUT);
  Serial.begin(115200);


}

void loop() {

  var = analogRead(A0);
  Serial.println(var);

  delay(10);

  


}
