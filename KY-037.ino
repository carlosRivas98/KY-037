int mic = 2;
int led = 3;
int valor;
int estado;

void setup() {
  // put your setup code here, to run once:
  pinMode(mic, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = digitalRead(mic);
  if (valor == HIGH)
  {
    estado = digitalRead(led);
    digitalWrite(led, !estado);
    delay(500);
  }
}
