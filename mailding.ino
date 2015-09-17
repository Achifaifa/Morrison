int mailled=8;
int switchin=3;
int switchout=5;
int onled=13;
int mailsensor=2;
int inbox=0;

void setup() {                
  pinMode(mailled, OUTPUT);     
  pinMode(switchin, INPUT);
  pinMode(switchout,OUTPUT);
  pinMode(onled, OUTPUT);
  digitalWrite(switchout, HIGH);
}

void loop() {
  
  int switchstatus=digitalRead(switchin);
  if (switchstatus==1){
    digitalWrite(onled, HIGH);
    if (digitalRead(mailsensor)==1){
      inbox++;
    }
  }

  else{
    digitalWrite(onled,LOW);
  }
  
  if (inbox>0){
      digitalWrite(mailled, HIGH);
    }
}
