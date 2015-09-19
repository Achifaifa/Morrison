int mailled=8;
int switchin=3;
int switchout=5;
int onled=13;
int mailsensor=2;
int doorbell=4;
int doorbellsig=6;

void setup() {                
  pinMode(mailled, OUTPUT);     
  pinMode(switchin, INPUT);
  pinMode(switchout,OUTPUT);
  pinMode(onled, OUTPUT);
  pinMode(doorbell, INPUT);
  pinMode(doorbellsig, OUTPUT);
  pinMode()
  digitalWrite(switchout, HIGH);
}

void loop() {
  
  int switchstatus=digitalRead(switchin);

  if (switchstatus==1){
    digitalWrite(onled, HIGH);
    if (digitalRead(mailsensor)==0){
      digitalWrite(mailled, HIGH);
    }
  }

  else{
    digitalWrite(onled,LOW);
  }

  if(digitalRead(doorbell)==1){
    digitalWrite(doorbellsig, HIGH);
  }
}
