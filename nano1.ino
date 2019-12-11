#define Do 3817
#define Re 3401
#define Mi 3030
#define Fa 2865
#define Sol 2551
#define La 2273
#define Si 2024
#define Do_h 1912
#define Re_h 1704
#define Mi_h 1517
#define Fa_h 1433
#define Sol_h 1276
#define La_h 1136
#define Si_h 1012
#define Kong 1000000

int length_Ievan_Polkka;
int length_Castle_in_the_Sky;
int length_Bad_Apple;
int length_SONG;

int scale_Ievan_Polkka[] = 
{
  Mi,La,La,Si,   Do_h,Do_h,La,La,La,La,Do_h,   Si,Fa,Fa,Fa,   Si,La,La,La,La,   
  Mi,La,La,Si,   Do_h,Do_h,La,La,La,La,Do_h,  Mi_h,Mi_h,Mi_h,Re_h,Do_h,Do_h,Si,   Do_h,La,La,La,Do_h,   
  Mi_h,Mi_h,Re_h,Do_h,   Si,Fa,Fa,Fa,Fa,Si,   Re_h,Re_h,Re_h,Re_h,Do_h,Do_h,Si,Si,   Do_h,La,La,La,La,    
  Mi_h,Mi_h,Re_h,Do_h,   Si,Fa,Fa,Fa,Fa,Si,  Re_h,Re_h,Re_h,Re_h,Do_h,Si,   Do_h,La,La,La,La
};

static const unsigned short durt_Ievan_Polkka[] = 
{
  2,2,3,1,   1,1,1,1,2,1,1,   2,2,2,2,   2,2,2,1,1,   
  2,2,3,1,   1,1,1,1,2,1,1,  1,1,1,1,2,1,1,   2,2,2,1,1,   
  2,2,2,2,   2,2,1,1,1,1,  1,1,1,1,1,1,1,1,   2,2,2,1,1,   
  2,2,2,2,   2,2,1,1,1,1,  1,1,1,1,2,2,   1,1,2,3,1
};

int scale_Castle_in_the_Sky[] = 
{
  La,Si,  Do_h,Si,Do_h,Mi_h,  Si,Mi,Mi,  
  La,Sol,La,Do_h,  Sol,Mi,  Fa,Mi,Fa,Do_h,  
  Mi,Kong,Do_h,Do_h,Do_h,  Si,Fa,Fa,Si,  Si,Kong,La,Si,  
  Do_h,Si,Do_h,Mi_h,  Si,Mi,Mi,   La,Sol,La,Do_h,  
  Sol,Re,Mi,  Fa,Do_h,Si,Do_h,  Re_h,Re_h,Mi_h,Do_h,  
  Do_h,Si,La,La,Si,Sol,  La,Do_h,Re_h,  Mi_h,Re_h,Mi_h,Sol_h,  
  Re_h,Sol,Sol,  Do_h,Si,Do_h,Mi_h,  Mi_h,  
  La,Si,Do_h,Si,Re_h,Re_h,  Do_h,Sol,  Fa_h,Mi_h,Re_h,Do_h,  
  Mi_h,Mi_h,  La_h,Sol_h,Sol_h,  Mi_h,Re_h,Do_h,Kong,Do_h,  
  Re_h,Do_h,Re_h,Re_h,Sol_h,  Mi_h,Mi_h,  La_h,Sol_h,  
  Mi_h,Re_h,Do_h,Kong,Do_h,  Re_h,Do_h,Re_h,Si, La
};

short durt_Castle_in_the_Sky[] = 
{ 
  1,1,  3,1,2,2,  6,1,1,  
  3,1,2,2,  6,2,  3,1,2,2,  
  4,1,1,1,1,  3,1,2,2,  4,1,2,2,  
  3,1,2,2,  6,1,1,  3,1,2,2,  
  6,1,1,  2,1,2,3,  1,1,1,5,  
  1,1,1,1,2,2,  6,1,1,  3,1,2,2,  
  6,1,1,  3,1,2,2,  8,  
  1,1,2,2,1,1,  3,5,  2,2,2,2,  
  6,2,  4,2,2,  1,1,4,1,1,  
  4,1,1,2,2,  6,2,  4,4,  
  1,1,4,1,1,  2,1,3,2, 6
};

int scale_Bad_Apple[] = 
{
  La,Si,Do_h,Re_h,Mi_h,La_h,Sol_h,  Mi_h,La,Mi_h,Re_h,Do_h,Si,  La,Si,Do_h,Re_h,Mi_h,Re_h,Do_h,  Si,La,Si,Do_h,Si,La,Sol,Si,  
  La,Si,Do_h,Re_h,Mi_h,La_h,Sol_h,  Mi_h,La,Mi_h,Re_h,Do_h,Si,  La,Si,Do_h,Re_h,Mi_h,Re_h,Do_h,  Si,Do_h,Re_h,Mi_h,  
  Sol_h,La_h,Mi_h,Re_h,Mi_h,Re_h,Mi_h,  Sol_h,La_h,Mi_h,Re_h,Mi_h,Re_h,Mi_h,  Re_h,Do_h,Si,Sol,La,Sol,La,  Si,Do_h,Re_h,Mi_h,La,Mi_h,Sol_h,  
  Sol_h,La_h,Mi_h,Re_h,Mi_h,Re_h,Mi_h,  Sol_h,La_h,Mi_h,Re_h,Mi_h,Re_h,Mi_h,  Re_h,Do_h,Si,Sol,La,Sol,La,  Si,Do_h,Re_h,Mi_h,La,Mi_h,Sol_h,  
  Sol_h,La_h,Mi_h,Re_h,Mi_h,Re_h,Mi_h,  Sol_h,La_h,Mi_h,Re_h,Mi_h,La_h,Si_h,  Do_h,Si_h,La_h,Sol_h,Mi_h,Re_h,Mi_h, Re_h,Do_h,Si,Sol,La
};

short durt_Bad_Apple[] = 
{
  1,1,1,1,2,1,1,  2,2,1,1,1,1,  1,1,1,1,2,1,1,  1,1,1,1,1,1,1,1,  
  1,1,1,1,2,1,1,  2,2,1,1,1,1,  1,1,1,1,2,1,1,  2,2,2,2,  
  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  
  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  
  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  1,1,1,1,2,1,1,  1,1,1,1,2
};

int scale_SONG[100];

short durt_SONG[100];

int i = 0;

int buzzer = 11;

int pin_do = 2;
int pin_re = 3;
int pin_mi = 4;
int pin_fa = 5;
int pin_sol = 6;
int pin_la = 7;
int pin_si = 8;
int pin_sig = 9;

char rev = 'z';

void KEYBOARD();
void BUZZER();
void SING(int FT, short DT, int SPD);
void SING_KEY(int FT, int PIN);

void setup() 
{
  Serial.begin(38400);
  
  pinMode(buzzer, OUTPUT);
  
  pinMode(pin_do, INPUT);
  pinMode(pin_re, INPUT);
  pinMode(pin_mi, INPUT);
  pinMode(pin_fa, INPUT);
  pinMode(pin_sol, INPUT);
  pinMode(pin_la, INPUT);
  pinMode(pin_si, INPUT);
  pinMode(pin_sig, INPUT);
  
  length_Ievan_Polkka = sizeof(scale_Ievan_Polkka) / sizeof(scale_Ievan_Polkka[0]);
  length_Castle_in_the_Sky = sizeof(scale_Castle_in_the_Sky) / sizeof(scale_Castle_in_the_Sky[0]);
  length_Bad_Apple = sizeof(scale_Bad_Apple) / sizeof(scale_Bad_Apple[0]);
  length_SONG = sizeof(scale_SONG) / sizeof(scale_SONG[0]);

  for(i=0; i < 100; i++) durt_SONG[i] = 1;
}

void loop() 
{
  if(Serial.available())
  {
    rev = Serial.read();
    if(rev == 'x')
    {
      for(i = 0; i < 100; i++) scale_SONG[100] = 0;
      i = 0;
      while(1)
      {
        KEYBOARD();
        if(Serial.available()) break;
      }
    }
  }
  KEYBOARD();
  BUZZER(rev);
  rev = 'z';
}

void BUZZER(char rev)
{
  if(rev == 'a')
  {
    for(int x=0; x<length_Ievan_Polkka; x++)
    {
      SING(scale_Ievan_Polkka[x], durt_Ievan_Polkka[x], 1);
    }
  }
  if(rev == 'b')
  {
    for(int x=0; x<length_Castle_in_the_Sky; x++)
    {
      SING(scale_Castle_in_the_Sky[x], durt_Castle_in_the_Sky[x], 2);
    }
  }
  if(rev == 'c')
  {
    for(int x=0; x<length_Bad_Apple; x++)
    {
      SING(scale_Bad_Apple[x], durt_Bad_Apple[x], 1);
    }
  }
  if(rev == 'y')
  {
    for(int x=0; x<length_SONG; x++)
    {
      SING(scale_SONG[x], durt_SONG[x], 2.5);
    }
  }
}

void KEYBOARD()
{
  if(digitalRead(pin_do) == LOW && digitalRead(pin_sig) == LOW)
  {
    scale_SONG[i] = Do;
    i++;
    SING_KEY(Do, pin_do);
    //Serial.println("1");
  }
  if(digitalRead(pin_do) == LOW && digitalRead(pin_sig) == HIGH)
  {
    scale_SONG[i] = Do_h;
    i++;
    SING_KEY(Do_h, pin_do);
    //Serial.println("1#");
  }
  if(digitalRead(pin_re) == LOW && digitalRead(pin_sig) == LOW)
  {
    scale_SONG[i] = Re;
    i++;
    SING_KEY(Re, pin_re);
    //Serial.println("2");
  }
  if(digitalRead(pin_re) == LOW && digitalRead(pin_sig) == HIGH)
  {
    scale_SONG[i] = Re_h;
    i++;
    SING_KEY(Re_h, pin_re);
    //Serial.println("2#");
  }
  if(digitalRead(pin_mi) == LOW && digitalRead(pin_sig) == LOW)
  {
    scale_SONG[i] = Mi;
    i++;
    SING_KEY(Mi, pin_mi);
    //Serial.println("3");
  }
  if(digitalRead(pin_mi) == LOW && digitalRead(pin_sig) == HIGH)
  {
    scale_SONG[i] = Mi_h;
    i++;
    SING_KEY(Mi_h, pin_mi);
    //Serial.println("3#");
  }
  if(digitalRead(pin_fa) == LOW && digitalRead(pin_sig) == LOW)
  {
    scale_SONG[i] = Fa;
    i++;
    SING_KEY(Fa, pin_fa);
    //Serial.println("4");
  }
  if(digitalRead(pin_fa) == LOW && digitalRead(pin_sig) == HIGH)
  {
    scale_SONG[i] = Fa_h;
    i++;
    SING_KEY(Fa_h, pin_fa);
    //Serial.println("4#");
  }
  if(digitalRead(pin_sol) == LOW && digitalRead(pin_sig) == LOW)
  {
    scale_SONG[i] = Sol;
    i++;
    SING_KEY(Sol, pin_sol);
    //Serial.println("5");
  }
  if(digitalRead(pin_sol) == LOW && digitalRead(pin_sig) == HIGH)
  {
    scale_SONG[i] = Sol_h;
    i++;
    SING_KEY(Sol_h, pin_sol);
    //Serial.println("5#");
  }
  if(digitalRead(pin_la) == LOW && digitalRead(pin_sig) == LOW)
  {
    scale_SONG[i] = La;
    i++;
    SING_KEY(La, pin_la);
    //Serial.println("6");
  }
  if(digitalRead(pin_la) == LOW && digitalRead(pin_sig) == HIGH)
  {
    scale_SONG[i] = La_h;
    i++;
    SING_KEY(La_h, pin_la);
    //Serial.println("6#");
  }
  if(digitalRead(pin_si) == LOW && digitalRead(pin_sig) == LOW)
  {
    scale_SONG[i] = Si;
    i++;
    SING_KEY(Si, pin_si);
    //Serial.println("7");
  }
  if(digitalRead(pin_si) == LOW && digitalRead(pin_sig) == HIGH)
  {
    scale_SONG[i] = Si_h;
    i++;
    SING_KEY(Si_h, pin_si);
    //Serial.println("7#");
  }
}

void SING(int FT, short DT, int SPD)
{
  for(int i = 0; i < 125000 * SPD * DT / FT; i++)
  {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(FT / 2);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(FT / 2);
    if(Serial.available()) break;
    if((digitalRead(pin_do) == LOW) || (digitalRead(pin_re) == LOW) || (digitalRead(pin_mi) == LOW)
    || (digitalRead(pin_fa) == LOW) || (digitalRead(pin_sol) == LOW) || (digitalRead(pin_la) == LOW) || (digitalRead(pin_si) == LOW)) break;
  }
}

void SING_KEY(int FT, int PIN)
{
  while(1)
  {
    digitalWrite(buzzer, HIGH);
    delayMicroseconds(FT / 2);
    digitalWrite(buzzer, LOW);
    delayMicroseconds(FT / 2);
    if(digitalRead(PIN) == HIGH) break;
  }
}
