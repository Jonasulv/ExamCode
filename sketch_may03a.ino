int Clockpin = 22;
int Outpin = 7;

char enable = 0;
char Sek = 0;
char Sek10 = 0;
char Min = 0;
char Min10 = 0;

int latchsek = 29;
int latch10sek = 28;
int latchmin = 27;
int latch10min = 26;

int presek0 = 50;
int presek1 = 51;
int presek2 = 52;
int presek3 = 53;

int preSek0 = 44;
int preSek1 = 45;
int preSek2 = 46;
int preSek3 = 47;

int premin0 = 38;
int premin1 = 39;
int premin2 = 40;
int premin3 = 41;

int preMin0 = 36;
int preMin1 = 35;
int preMin2 = 34;
int preMin3 = 33;

void setup() {
  pinMode(Clockpin, OUTPUT);
  pinMode(Outpin, OUTPUT);
  
  pinMode(presek0, OUTPUT);
  pinMode(presek1, OUTPUT);
  pinMode(presek2, OUTPUT);
  pinMode(presek3, OUTPUT);

  pinMode(preSek0, OUTPUT);
  pinMode(preSek1, OUTPUT);
  pinMode(preSek2, OUTPUT);
  pinMode(preSek3, OUTPUT);

  pinMode(premin0, OUTPUT);
  pinMode(premin1, OUTPUT);
  pinMode(premin2, OUTPUT);
  pinMode(premin3, OUTPUT);

  pinMode(preMin0, OUTPUT);
  pinMode(preMin1, OUTPUT);
  pinMode(preMin2, OUTPUT);
  pinMode(preMin3, OUTPUT);
  
  pinMode(latch10min, OUTPUT);
  pinMode(latchmin, OUTPUT);
  pinMode(latch10sek, OUTPUT);
  pinMode(latchsek, OUTPUT);

  
  digitalWrite(latchsek, LOW);
  digitalWrite(latch10sek, LOW);
  digitalWrite(latchmin, LOW);
  digitalWrite(latch10min, LOW);

  digitalWrite(presek0, HIGH);
  digitalWrite(presek1, LOW);
  digitalWrite(presek2, LOW);
  digitalWrite(presek3, HIGH);
 
  enable = enable + 1;
  Sek = Sek + 3;
 
}

void loop() {



  if(enable == 1){
  
  digitalWrite(latchsek, HIGH);
  
    if(Sek == 1){
      digitalWrite(presek0, HIGH);
      digitalWrite(presek1, LOW);
      digitalWrite(presek2, LOW);
      digitalWrite(presek3, LOW);
    }

    if(Sek == 2){
      digitalWrite(presek0, LOW);
      digitalWrite(presek1, HIGH);
      digitalWrite(presek2, LOW);
      digitalWrite(presek3, LOW);
    }

    if(Sek == 3){
      digitalWrite(presek0, HIGH);
      digitalWrite(presek1, HIGH);
      digitalWrite(presek2, LOW);
      digitalWrite(presek3, LOW);
    }

    if(Sek == 4){
      digitalWrite(presek0, LOW);
      digitalWrite(presek1, LOW);
      digitalWrite(presek2, HIGH);
      digitalWrite(presek3, LOW);
    }

    if(Sek == 5){
      digitalWrite(presek0, HIGH);
      digitalWrite(presek1, LOW);
      digitalWrite(presek2, HIGH);
      digitalWrite(presek3, LOW);
    }

    if(Sek == 6){
      digitalWrite(presek0, LOW);
      digitalWrite(presek1, HIGH);
      digitalWrite(presek2, HIGH);
      digitalWrite(presek3, LOW);
    }

    if(Sek == 7){
      digitalWrite(presek0, HIGH);
      digitalWrite(presek1, HIGH);
      digitalWrite(presek2, HIGH);
      digitalWrite(presek3, LOW);
    }

    if(Sek == 8){
      digitalWrite(presek0, LOW);
      digitalWrite(presek1, LOW);
      digitalWrite(presek2, LOW);
      digitalWrite(presek3, HIGH);
    }

    if(Sek == 9){
      digitalWrite(presek0, HIGH);
      digitalWrite(presek1, LOW);
      digitalWrite(presek2, LOW);
      digitalWrite(presek3, HIGH);
    }

    if(Sek == 0){
      digitalWrite(presek0, LOW);
      digitalWrite(presek1, LOW);
      digitalWrite(presek2, LOW);
      digitalWrite(presek3, LOW);
    }

  digitalWrite(latchsek, LOW);

    digitalWrite(presek0, HIGH);
    digitalWrite(presek1, LOW);
    digitalWrite(presek2, LOW);
    digitalWrite(presek3, HIGH);

  digitalWrite(latch10sek, HIGH);

    if(Sek == 1){
      digitalWrite(preSek0, HIGH);
      digitalWrite(preSek1, LOW);
      digitalWrite(preSek2, LOW);
      digitalWrite(preSek3, LOW);
    }

    if(Sek10 == 2){
      digitalWrite(preSek0, LOW);
      digitalWrite(preSek1, HIGH);
      digitalWrite(preSek2, LOW);
      digitalWrite(preSek3, LOW);
    }

    if(Sek10 == 3){
      digitalWrite(preSek0, HIGH);
      digitalWrite(preSek1, HIGH);
      digitalWrite(preSek2, LOW);
      digitalWrite(preSek3, LOW);
    }

    if(Sek10 == 4){
      digitalWrite(preSek0, LOW);
      digitalWrite(preSek1, LOW);
      digitalWrite(preSek2, HIGH);
      digitalWrite(preSek3, LOW);
    }

    if(Sek10 == 5){
      digitalWrite(preSek0, HIGH);
      digitalWrite(preSek1, LOW);
      digitalWrite(preSek2, HIGH);
      digitalWrite(preSek3, LOW);
    }

    if(Sek10 == 6){
      digitalWrite(preSek0, LOW);
      digitalWrite(preSek1, HIGH);
      digitalWrite(preSek2, HIGH);
      digitalWrite(preSek3, LOW);
    }

    if(Sek10 == 7){
      digitalWrite(preSek0, HIGH);
      digitalWrite(preSek1, HIGH);
      digitalWrite(preSek2, HIGH);
      digitalWrite(preSek3, LOW);
    }

    if(Sek10 == 8){
      digitalWrite(preSek0, LOW);
      digitalWrite(preSek1, LOW);
      digitalWrite(preSek2, LOW);
      digitalWrite(preSek3, HIGH);
    }

    if(Sek10 == 9){
      digitalWrite(preSek0, HIGH);
      digitalWrite(preSek1, LOW);
      digitalWrite(preSek2, LOW);
      digitalWrite(preSek3, HIGH);
    }

    if(Sek10 == 0){
      digitalWrite(preSek0, LOW);
      digitalWrite(preSek1, LOW);
      digitalWrite(preSek2, LOW);
      digitalWrite(preSek3, LOW);
    }
  digitalWrite(latch10sek, LOW);

    digitalWrite(preSek0, HIGH);
    digitalWrite(preSek1, LOW);
    digitalWrite(preSek2, HIGH);
    digitalWrite(preSek3, LOW);

  digitalWrite(latchmin, HIGH);

    if(Min == 1){
      digitalWrite(premin0, HIGH);
      digitalWrite(premin1, LOW);
      digitalWrite(premin2, LOW);
      digitalWrite(premin3, LOW);
    }

    if(Min == 2){
      digitalWrite(premin0, LOW);
      digitalWrite(premin1, HIGH);
      digitalWrite(premin2, LOW);
      digitalWrite(premin3, LOW);
    }

    if(Min == 3){
      digitalWrite(premin0, HIGH);
      digitalWrite(premin1, HIGH);
      digitalWrite(premin2, LOW);
      digitalWrite(premin3, LOW);
    }

    if(Min == 4){
      digitalWrite(premin0, LOW);
      digitalWrite(premin1, LOW);
      digitalWrite(premin2, HIGH);
      digitalWrite(premin3, LOW);
    }

    if(Min == 5){
      digitalWrite(premin0, HIGH);
      digitalWrite(premin1, LOW);
      digitalWrite(premin2, HIGH);
      digitalWrite(premin3, LOW);
    }

    if(Min == 6){
      digitalWrite(premin0, LOW);
      digitalWrite(premin1, HIGH);
      digitalWrite(premin2, HIGH);
      digitalWrite(premin3, LOW);
    }

    if(Min == 7){
      digitalWrite(premin0, HIGH);
      digitalWrite(premin1, HIGH);
      digitalWrite(premin2, HIGH);
      digitalWrite(premin3, LOW);
    }

    if(Min == 8){
      digitalWrite(premin0, LOW);
      digitalWrite(premin1, LOW);
      digitalWrite(premin2, LOW);
      digitalWrite(premin3, HIGH);
    }

    if(Min == 9){
      digitalWrite(premin0, HIGH);
      digitalWrite(premin1, LOW);
      digitalWrite(premin2, LOW);
      digitalWrite(premin3, HIGH);
    }

    if(Min == 0){
      digitalWrite(premin0, LOW);
      digitalWrite(premin1, LOW);
      digitalWrite(premin2, LOW);
      digitalWrite(premin3, LOW);
    }

  digitalWrite(latchmin, LOW);

    digitalWrite(premin0, LOW);
    digitalWrite(premin1, LOW);
    digitalWrite(premin2, LOW);
    digitalWrite(premin3, LOW);

  digitalWrite(latch10min, HIGH);
  
    if(Min == 1){
      digitalWrite(preMin0, HIGH);
      digitalWrite(preMin1, LOW);
      digitalWrite(preMin2, LOW);
      digitalWrite(preMin3, LOW);
    }

    if(Min == 2){
      digitalWrite(preMin0, LOW);
      digitalWrite(preMin1, HIGH);
      digitalWrite(preMin2, LOW);
      digitalWrite(preMin3, LOW);
    }

    if(Min == 3){
      digitalWrite(preMin0, HIGH);
      digitalWrite(preMin1, HIGH);
      digitalWrite(preMin2, LOW);
      digitalWrite(preMin3, LOW);
    }

    if(Min == 4){
      digitalWrite(preMin0, LOW);
      digitalWrite(preMin1, LOW);
      digitalWrite(preMin2, HIGH);
      digitalWrite(preMin3, LOW);
    }

    if(Min == 5){
      digitalWrite(preMin0, HIGH);
      digitalWrite(preMin1, LOW);
      digitalWrite(preMin2, HIGH);
      digitalWrite(preMin3, LOW);
    }

    if(Min == 6){
      digitalWrite(preMin0, LOW);
      digitalWrite(preMin1, HIGH);
      digitalWrite(preMin2, HIGH);
      digitalWrite(preMin3, LOW);
    }

    if(Min == 7){
      digitalWrite(preMin0, HIGH);
      digitalWrite(preMin1, HIGH);
      digitalWrite(preMin2, HIGH);
      digitalWrite(preMin3, LOW);
    }

    if(Min == 8){
      digitalWrite(preMin0, LOW);
      digitalWrite(preMin1, LOW);
      digitalWrite(preMin2, LOW);
      digitalWrite(preMin3, HIGH);
    }

    if(Min == 9){
      digitalWrite(preMin0, HIGH);
      digitalWrite(preMin1, LOW);
      digitalWrite(preMin2, LOW);
      digitalWrite(preMin3, HIGH);
    }

    if(Min == 0){
      digitalWrite(preMin0, LOW);
      digitalWrite(preMin1, LOW);
      digitalWrite(preMin2, LOW);
      digitalWrite(preMin3, LOW);
    }

  digitalWrite(latch10min, LOW);

    digitalWrite(preMin0, LOW);
    digitalWrite(preMin1, LOW);
    digitalWrite(preMin2, LOW);
    digitalWrite(preMin3, LOW);


  tone(13, 1000);
  delay(1000);
  noTone(13);
  enable = enable - 1;
 }
 
  digitalWrite(Clockpin, HIGH);
  delay(500);
  digitalWrite(Clockpin, LOW);
  delay(500);

 
}
