#include <LiquidCrystal_I2C.h>
#include <Keypad.h>
#define COL 16
#define LINES 4
#define ROWS 4
#define COLS 4

const char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

int i,luz,hum;
float tem;

const byte rowPins[ROWS] = {9,8,7,6}; const byte colPins[COLS] = {5,4,3,2};

Keypad kpad=Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);
LiquidCrystal_I2C lcd(0x27,COL,LINES);

void setup(){
  Serial.begin(9600);
  lcd.init(); lcd.backlight();
   i=0;
}

void loop(){
char ke;

 if(i==0) {
  main_menu();
    ke=getch();
      if(ke=='1')
        i=1;
      else if(ke=='2')
        i=2;
      else if(ke=='3')
        i=3;
 }
 
 if(i==1){
  menu_plantas();
    ke=getch();
      if(ke=='1')
        i=11;
      else if(ke=='2')
        i=12;
      else if(ke=='0')
        i=0;
 }
 if(i==2){
  menu_test();
     ke=getch();
       if(ke=='1'){
         lcd.clear();
         i=21;
         }
       else if(ke=='2')
         i=22;
       else if(ke=='0')
        i=0;
 }
 if(i==3){
  about();
    i=0;
 }
 if(i==11){
  menu_tomate();
      ke=getch();
       if(ke=='1'){
          i=111;
         }
       else if(ke=='2')
         i=112;
       else if(ke=='0')
        i=1; 
      
}
 
 if(i==12){
  menu_espinaca();
          ke=getch();
       if(ke=='1'){
          i=121;
         }
       else if(ke=='2')
         i=122;
       else if(ke=='0')
        i=1; 
  
  
  }
 
 if(i==21) test_sensores();
 if(i==22) test_salidas();


}
