#define NOTE_C3 131
#define NOTE_D3 147
#define NOTE_E3 165
#define NOTE_F3 175
#define NOTE_G3 196
#define NOTE_A3 220
#define NOTE_B3 247
#define NOTE_C4 262

int melody[]={
  NOTE_C4,NOTE_G3,NOTE_G3,NOTE_A3,NOTE_G3,0,NOTE_B3,NOTE_C4
};
int noteDurations[]={
  4,8,8,4,4,4,4,4
};
int lovemelody[]={
  NOTE_G3,NOTE_F3,NOTE_E3,NOTE_D3,NOTE_C3
};
int lovenoteDurations[]={
  4,4,4,2,4
};

int buttonState = 0;
int num=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(12,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(12);
  if(buttonState == HIGH){
    for(int i=0;i<8;i++){
    int noteDuration =1000/noteDurations[i];
    tone(8,melody[i],noteDuration);

    int pauseBetweenNotes = noteDuration*1.3;
    delay(pauseBetweenNotes);
    noTone(8);
    }
  }
  else{
    for(int i=0;i<8;i++){
    int noteDuration =1000/lovenoteDurations[i];
    tone(8,lovemelody[i],noteDuration);

    int pauseBetweenNotes = noteDuration*1.3;
    delay(pauseBetweenNotes);
    noTone(8);
  }
  }
  delay(200);
}
