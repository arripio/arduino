int umidade;
void setup()
{
pinMode(13, OUTPUT);
Serial.begin(9600);
Serial.println("Sensor de Umidade e Temperatura");
}
void loop()
{
Serial.println(umidade);
umidade = analogRead(A0);

if(umidade <=200) { digitalWrite(13, HIGH); 
Serial.println("Solo Irrigando "); 
Serial.print("Umidade Atual e:"); 
Serial.println(umidade); 
delay(1000);
} else { 
  
digitalWrite(13, LOW); 
Serial.print("Desigando Bomba"); 
Serial.print("Solo Com Umidade Atual de: "); 
Serial.print(umidade); } delay(1000);
}
