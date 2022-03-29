void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT); 
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
pinMode(12, OUTPUT);
int prawo = 0;
int lewo = 0;
Serial.begin(9600);
}

void loop() {
int prawo = 0;
int lewo = 0;
digitalWrite(8, HIGH);
digitalWrite(10, HIGH);
digitalWrite(12, HIGH);
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
lewo = analogRead(A5);
prawo = analogRead(A4);
Serial.print(lewo);
Serial.print(" ");
Serial.print(prawo);
Serial.println("");
delay(30);

  if (lewo1() == 1 && prawo1() == 1) { //Jesli oba czujniki widza linii
analogWrite(11, 70);
analogWrite(9, 70);
  } else if (lewo1() == 0) { //Jesli lewy czujnik nie widzi linii
analogWrite(11, 80);
analogWrite(9, 25);  
  } else if (prawo1() == 0) { //Jesli prawy czujnik nie widzi linii
    analogWrite(11, 25);
    analogWrite(9, 80);
  }
}

boolean lewo1() {
   if (analogRead(A5) < 230) { //Jesli czujnik widzi linie, to
    return 1; //Zwroc 1
  } else { //Jesli czujnik nie jest nad linią, to
    return 0; //Zwroc 0
  } 
}

boolean prawo1() {
   if (analogRead(A4) < 230) { //Jesli czujnik widzi linie, to
    return 1; //Zwroc 1
  } else { //Jesli czujnik nie jest nad linią, to
    return 0; //Zwroc 0
  } 
}


  
