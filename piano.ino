#define sa 262
#define re 294
#define ga 330
#define ma 349
#define pa 392
#define dha 440
#define ni 493

 int C = 10;
 int D = 9;
 int E = 8;
int F = 7;
 int G = 6;
 int A = 5;
 int B = 4;

 int speaker = 11;
 int LED = 13;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(C, INPUT);
  digitalWrite(C,HIGH);
  
  pinMode(D, INPUT);
  digitalWrite(D,HIGH);
  
  pinMode(E, INPUT);
  digitalWrite(E,HIGH);
  
  pinMode(F, INPUT);
  digitalWrite(F,HIGH);
  
  pinMode(G, INPUT);
  digitalWrite(G,HIGH);
  
  pinMode(A, INPUT);
  digitalWrite(A,HIGH);
  
  pinMode(B, INPUT);
  digitalWrite(B,HIGH);

   digitalWrite(LED,LOW);
}

void loop()
{
  while(digitalRead(C) == LOW)
  {
    tone(speaker,sa);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(D) == LOW)
  {
    tone(speaker,re);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(E) == LOW)
  {
    tone(speaker,ga);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(F) == LOW)
  {
    tone(speaker,ma);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(G) == LOW)
  {
    tone(speaker,pa);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(A) == LOW)
  {
    tone(speaker,dha);
    digitalWrite(LED,HIGH);
  }

  while(digitalRead(B) == LOW)
  {
    tone(speaker,ni);
    digitalWrite(LED,HIGH);
  }

  noTone(speaker);
  digitalWrite(LED,LOW);

}
