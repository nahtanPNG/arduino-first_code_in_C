#include <LiquidCrystal.h>


LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // Colocando o numero de colunas e linhas.

  // Mandando a mensagem
  lcd_1.print("Hello World!");
}

void loop()
{
  lcd_1.setCursor(0, 1);
  lcd_1.print("Estou usando ARDUINO");
  delay(1000); 
}
