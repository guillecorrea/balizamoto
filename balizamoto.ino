/* Balizas moto */

int BIZQ = PB4;
int BDER = PB2;
int REL = PB1;

float t1=0;
int bot1=0;
int bot2=0;
int rb1=0;
int rb2=0;

void setup() {
  
 pinMode(REL, OUTPUT);
 pinMode(BIZQ, INPUT);
 pinMode(BDER, INPUT);
 
 digitalWrite(REL,LOW);
  
 t1=millis();
 
}


void loop() {

  bot1 = digitalRead(BIZQ);
  bot2 = digitalRead(BDER);

  // detecta el comando para activar la baliza
  // uno luego el otro antes de 1s dependiendo en que giño se conecten los cables 
  
  if(bot2 == HIGH && rb1 == 0){ rb2 =1 ; }
  if(bot1 == HIGH && rb2 == 1){ rb1 =1 ; } 

  // si ya se cumplio el comando y si sigue parpadeando reinicio el contador
  if((rb2==1 && rb1==1) && (bot2 == HIGH || bot1 ==HIGH)){ t1=millis(); }

  // si paso mas de un segundo reinicio el tiempo, los flags y apago el relay
  if( (millis()-t1 > 1000)){  t1=millis(); rb2=0; rb1=0;digitalWrite(REL,LOW); }    

  // si se cumplio el comando activo el relay
  if(rb2==1 && rb1==1){ digitalWrite(REL,HIGH); }

}
