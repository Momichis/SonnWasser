#include <LiquidCrystal_I2C.h>
#include <Keypad.h>

void main_menu(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" [ Main Menu ]  ");
  lcd.setCursor(0,1);
  lcd.print("1) Menu Plantas");
  lcd.setCursor(-4,2);
  lcd.print("2) Test");
  lcd.setCursor(-4,3);
  lcd.print("3) Acerca de");
}

void menu_plantas(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("[ Menu Plantas ]");
  lcd.setCursor(0,1);
  lcd.print("1) Tomate");
  lcd.setCursor(-4,2);
  lcd.print("2) Espinaca");
  lcd.setCursor(-4,3);
  lcd.print("0) Regresar");
}

void menu_tomate(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" [ Menu Tomate ]");
  lcd.setCursor(0,1);
  lcd.print("1) Detalles");
  lcd.setCursor(-4,2);
  lcd.print("2) Iniciar!");
  lcd.setCursor(-4,3);
  lcd.print("0) Regresar");
}

void menu_espinaca(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("[Menu Espinaca] ");
  lcd.setCursor(0,1);
  lcd.print("1) Detalles");
  lcd.setCursor(-4,2);
  lcd.print("2) Iniciar!");
  lcd.setCursor(-4,3);
  lcd.print("0) Regresar");
}

void menu_test(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" [  Menu test ] ");
  lcd.setCursor(0,1);
  lcd.print("1) Sensores");
  lcd.setCursor(-4,2);
  lcd.print("2) Salidas");
  lcd.setCursor(-4,3);
  lcd.print("0) Regresar");
}
void about(){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("   SonnWasser   ");
  lcd.setCursor(0,1);
  lcd.print("  Coman verga   ");
  lcd.setCursor(-4,2);
  lcd.print("Tu mama sera mi");
  lcd.setCursor(-4,3);
  lcd.print("suegra");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Integrantes:");
  lcd.setCursor(0,1);
  lcd.print("Carballo B Edwin");
  lcd.setCursor(-4,2);
  lcd.print("Jurado P Jesus");
  lcd.setCursor(-4,3);
  lcd.print("Abarca Z Enrique");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Tellez C Ricardo");
  lcd.setCursor(0,1);
  lcd.print("Rodriguez M Gael");
  lcd.setCursor(-4,3);
  lcd.print("Y tu mama");
  delay(3000);
}

