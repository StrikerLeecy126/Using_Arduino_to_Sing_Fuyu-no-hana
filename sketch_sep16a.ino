#define M1 523
#define M2 587
#define M3 659
#define M4 698
#define M5 784
#define M5S 830
#define M6 880
#define M7 1976


#define H1 1047  
#define H2 1175
#define H3 1319
#define H4 1397
#define H5 1568
#define H6 1760
#define H7 1976

#define HH1 2093

#define beat 400
int buzzer = 8;

int First_Para[] = {M3,M3,M3,H1,H2,M7,H1,M5,M3,M5,M6,M6,M5,M6,M3,M2,M3,M4,M3,M2,M4,M3,M6,M7,H1,M7,M3,M5S,M6,M7,M3,M3,H1,H2,M7,H1,M5,M3,M5,M6,M6,M5,M6,M3,M2,M3,M4,M5,M6,M7,H1,H2,H3,H4,H3,H2,M7,H1,M6};
double First_Para_Time[] = {0.67,0.67,0.67,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2};
int First_pace;

int Second_Para[] = {H1,H2,H3,M6,M5,M6,M7,M5, M6,M5,M6,M6,  M6,M7,H1,H2,M7,H1,M5,  M3,M5,M6,M5,M6,M3,  M2,M3,M4,M3,M2,M4,M3,M6,  M7,H1,M7,M3,M5S,M6,M7,  M3,M3,H1,H2,M7,H1,M5,  M3,M5,M6,M5,M6,M3,  M2,M3,M4,M5,M6,M7,H1,H2,  H3,H4,H3,H2,M7,H1,M6,  M6,M6,M6,M6};
double Second_Para_Time[] = {1,1,1,1,1,1,1,1,  2,2,2,2,  1,1,1,1,1,1,2,  1,1,2,1,1,2,  1,1,1,1,1,1,1,1,  1,1,1,1,1,1,2,  1,1,1,1,1,1,2,  1,1,2,1,1,2,  1,1,1,1,1,1,1,1,  1,1,1,1,1,1,2,  2,2,2,2};
int Second_pace;

int Third_Para[] = {M6,H2,H2,H2,H3,  H4,H6,H5,H2,H3,H4,  H3,H3,H4,H5,H4,H3,H2,  H1,H1,H1,M6,M5,  M6,0,M6,M6,  H2,M7,M7,H1,M7,M6,M5S,M6,  M5S,M6,H1,H3,  H3,H3,H3,H1,H2};
double Third_Para_Time[] = {2,2,2,1,1,  1,1,2,1,1,2,  2,1,1,1,1,1,1,  2,2,2,1,1,  3,1,1,3, 1.5,0.5,1,1,1,1,1,1,  2,2,2,2,  2,2,2,1,1};
int Third_pace;

int Fourth_Para[] = {H3,H6,H5,H3,H5,  H4,H5,H4,H3,H2,H3,H1,M5,  M4,M5,M6,M4,M3,M6,M7,H1,  M6,M7,M1,H3,H2,H2,  H1,H2,H3,H6,H5,  H6,H7,HH1,H6,H5,H3,H5,  H3,H3,M6,M7,H1,  H3,H3,H6,H6,H7,  HH1,HH1,H7,H7,  H6,H6,H6,H6};
double Fourth_Para_Time[] = {2,2,2,1,1,  0.67,0.67,0.67,1,1,1,1,2,  1,1,1,1,1,1,1,1,  1,1,1,1,2,2,  1,1,2,2,2,  1,1,1,1,1,1,1,1,  1,3,1,1,2,  2,2,1,1,2,  2,2,2,2, 2,2,2,2};
int Fourth_pace;

void setup()
{
  pinMode(buzzer, OUTPUT);
  First_pace = sizeof(First_Para) / sizeof(int);
  Second_pace = sizeof(Second_Para) / sizeof(int);
  Third_pace = sizeof(Third_Para) / sizeof(int);
  Fourth_pace = sizeof(Fourth_Para) / sizeof(int);
}

void loop()
{
  int i;
  for(i = 0; i < First_pace; i++)
  {
    tone(buzzer, First_Para[i]);
    delay(First_Para_Time[i]*beat);
    noTone(buzzer);
  }
  for(i = 0; i < Second_pace; i++)
  {
    tone(buzzer, Second_Para[i]); 
    delay(Second_Para_Time[i]*beat);
    noTone(buzzer);
  }
  for(i = 0; i < Third_pace; i++)
  {
    tone(buzzer, Third_Para[i]); 
    delay(Third_Para_Time[i]*beat);
    noTone(buzzer);
  }
  for(i = 0; i < Fourth_pace; i++)
  {
    tone(buzzer, Fourth_Para[i]); 
    delay(Fourth_Para_Time[i]*beat);
    noTone(buzzer);
  }
  delay(1000);
}
