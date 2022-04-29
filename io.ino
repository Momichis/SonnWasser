#include <LiquidCrystal_I2C.h> 
#include <Keypad.h>

char getch(){
  char key=NULL;
      while(key==0){
            key=kpad.getKey();
            delay(100);
        }
      if(key!=0){
       Serial.print("Tecla Pulsada: ");Serial.println(key);
        return key;
  }
}

void test_sensores(){
 char key=kpad.getKey();
  luz=analogRead(A0);
  hum=analogRead(A1);
  tem=(analogRead(A3)/1024.0)*500;

        delay(200);

    lcd.setCursor(0,0);
        lcd.print("Luz: "); lcd.print(luz); lcd.print("  ");
    lcd.setCursor(0,1);
        lcd.print("Humedad: "); lcd.print(hum); lcd.print("  ");
    lcd.setCursor(-4,2);
        lcd.print("Temp: "); lcd.print(tem); lcd.print("*C  ");

  if(key!=0){
      i=2;
    }
}

void test_salidas(){

  }

