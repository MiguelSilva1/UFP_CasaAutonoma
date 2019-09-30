int rele1_persiana = 2;
String message;

void setup()
{
  //Define pinos para o rele como saida
  Serial.begin(9600);
  pinMode(rele1_persiana, OUTPUT);
}

void loop()
{
  while (Serial.available()) {
    message = Serial.readString();
      message.trim();

    Serial.println(message);
    if (message.equals("100")) { //fecha persiana
      digitalWrite(rele1_persiana, LOW); //liga relé
    }
    if (message.equals("0")) { //abre persiana
      digitalWrite(rele1_persiana, HIGH); //desliga relé
    }
  }
}
