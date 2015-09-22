int mailled=8;      // Mail indicator output
int switchin=3;     // Input for the door switch
int switchout=5;    // (Workaraound) Always on high to give positive input to the switch
int onled=13;       // ON / OFF indicator
int mailsensor=2;   // Sensor for the mail (ON -> No letters)
int doorbell=4;     // Doorbell input
int doorbellsig=6;  // Doorbell output

void setup() {                
  pinMode(mailled, OUTPUT);     
  pinMode(switchin, INPUT);
  pinMode(switchout,OUTPUT);
  pinMode(onled, OUTPUT);
  pinMode(doorbell, INPUT);
  pinMode(doorbellsig, OUTPUT);
  digitalWrite(switchout, HIGH);
}

void loop() {
  
  // Detect if the functions are enabled
  int switchstatus=digitalRead(switchin);

  if (switchstatus==1){
    digitalWrite(onled, HIGH);

    // If the mail detector circuit is open, turn the LEDs on
    if (digitalRead(mailsensor)==0){
      digitalWrite(mailled, HIGH);
    }
  }

  // If the circuit is disabled, don't do anything
  else{
    digitalWrite(onled,LOW);
  }

  // If the doorbell switch is pressed, activate the doorbell output
  if(digitalRead(doorbell)==1){
    digitalWrite(doorbellsig, HIGH);
  }
}
