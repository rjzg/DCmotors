int enA = 9;
int in1 = 8;
int in2 = 7;


void setup() {
  Serial.begin(9600);
  pinMode(in2, OUTPUT);
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  digitalWrite(A0, INPUT);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  
  int pot = analogRead(A0);
  int pow = map(pot,1023,0,0,255);
  
  if(pow <= 125){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    int pow = map(pot,1023,500,255,0);
    analogWrite(enA,pow);
  }
  if(pow >= 130){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    int pow2 = map(pot,500,1023,255,0);
    analogWrite(enA,pow2);  
  }

 

  
  
}
