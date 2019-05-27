// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.

  for ( int i = 11 ; i <= 13 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

// the loop routine runs over and over again forever:
void loop() {
  
  for (int i=8 ; i <= 13 ; i++)
  {
    if(i==10){
       tone(9, 440);
  delay(200);
      noTone(9);
    }
       digitalWrite( i , HIGH) ;
       delay (200) ;
       digitalWrite( i , LOW);
       delay (200) ;
    

  }
}
