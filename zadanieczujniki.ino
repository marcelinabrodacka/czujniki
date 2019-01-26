int pomiarruchu = 0;
int pomiartemp = 0;
float napiecie = 0;

void setup(){
Serial.begin(9600);
}

void loop(){
    pomiarruchu = digitalRead (2);
    pomiartemp = analogRead(A0);
  	napiecie = (pomiartemp * 5.0)/1024;
    int temperatura = (napiecie - 0.5) * 100 ;
    int temperaturaF = (temperatura * 9.0 / 5.0) + 32.0;
    if (pomiarruchu==1){
        Serial.println("Wykryto ruch");
        Serial.print(temperatura); Serial.println(" stopni Celsjusza");
        Serial.print(temperaturaF); Serial.println(" stopni Fahrenheita");
      
    }
    else{
        Serial.println("Porusz sie, aby uruchomic termometr");
    }
    delay (1000);
}