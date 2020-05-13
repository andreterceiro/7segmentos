/*
  Blink
 Turns on an LED on for one second, then off for one second, repeatedly.
 
 This example code is in the public domain.
 */

// Pin 13 hs an LED connected on most Arduino boards.
// give it a name:
int G = 0;
int F = 1;
int A = 2;
int B = 3;
int E = 4;
int D = 5;
int C = 6
;

// the setup routine runs once when you press reset:
void setup() {                
  pinMode(0, OUTPUT);     
  pinMode(1, OUTPUT);     
  pinMode(2, OUTPUT);     
  pinMode(3, OUTPUT);     
  pinMode(4, OUTPUT);     
  pinMode(5, OUTPUT);     
  pinMode(6, OUTPUT);     
  pinMode(7, OUTPUT);     
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(13, HIGH);
 
  // 0
  piscar(1,1,1,1,1,1,0);
  Serial.println("0");
  
  // 1
  piscar(0,1,1,0,0,0,0);
  Serial.println("1");
  
  // 2
  piscar(1,1,0,1,1,0,1);
  Serial.println("2");  
  
  //3
  piscar(1,1,1,1,0,0,1);
  Serial.println("3");
  
  //4
  piscar(0,1,1,0,0,1,1);
  Serial.println("4");
  
  //5
  piscar(1,1,0,1,1,0,1);
  Serial.println("5");

  //6  
  piscar(1,0,1,1,1,1,1);
  Serial.println("6");
  
  //7
  piscar(1,1,1,0,0,0,0);
  Serial.println("7");
  
  //8
  piscar(1,1,1,1,1,1,1);
  Serial.println("8");
  
  //9
  piscar(1,1,1,1,0,1,1);
  Serial.println("9");
}

void piscar(int valorA, int valorB, int valorC, int valorD, int valorE, int valorF, int valorG) {
  int i = 0;
  
  while (i < 5) {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
    digitalWrite(E, LOW);
    digitalWrite(F, LOW);
    digitalWrite(G, LOW);
    
    delay(500);

    digitalWrite(0, 1);
    digitalWrite(1, 1);
    digitalWrite(2, 1);
    digitalWrite(3, 1);
    digitalWrite(4, 1);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    delay(5000);  
/*
    digitalWrite(A, valorA);
    digitalWrite(B, valorB);
    digitalWrite(C, valorC);
    digitalWrite(D, valorD);
    digitalWrite(E, valorE);
    digitalWrite(F, valorF);
    digitalWrite(G, valorG);
    */
  
    delay(500);
    
    i = i + 1;
  }
}
