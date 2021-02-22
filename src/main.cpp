#include <Arduino.h>
//
//
//
// #include <MS6205.h>
// // int const shiftRegisterLatchPin = 15; // GPIO15 = Pin D8 on NodeMCU boards. Pin 12 on 74HC595.
// // int const shiftRegisterClockPin = 14; // GPIO14 = Pin D5 on NodeMCU boards. Pin 11 on 74HC595.
// // int const shiftRegisterDataPin = 13;  // GPIO13 = Pin D7 on NodeMCU boards. Pin 14 on 74HC595.
// // int const displaySetPositionPin = 12; // GPIO12 = Pin D6 on NodeMCU boards. Pin 16A on MS6205.
// // int const displaySetCharacterPin = 2; // GPIO2  = Pin D4 on NodeMCU boards. Pin 16B on MS6205.
// // int const displayClearPin = 5;        // GPIO5  = Pin D1 on NodeMCU boards. Pin 18A on MS6205.
// // int const displaySelectPage0Pin = 4;  // GPIO4  = Pin D2 on NodeMCU boards. Pin  2A on MS6205.
// // int const displaySelectPage1Pin = 0;  // GPIO0  = Pin D3 on NodeMCU boards. Pin  2B on MS6205.
// int const shiftRegisterLatchPin = D8;  // GPIO15 = Pin D8 on NodeMCU boards. Pin 12 on 74HC595.
// int const shiftRegisterClockPin = D5;  // GPIO14 = Pin D5 on NodeMCU boards. Pin 11 on 74HC595.
// int const shiftRegisterDataPin = D7;   // GPIO13 = Pin D7 on NodeMCU boards. Pin 14 on 74HC595.
// int const displaySetPositionPin = D6;  // GPIO12 = Pin D6 on NodeMCU boards. Pin 16A on MS6205.
// int const displaySetCharacterPin = D4; // GPIO2  = Pin D4 on NodeMCU boards. Pin 16B on MS6205.
// int const displayClearPin = D1;        // GPIO5  = Pin D1 on NodeMCU boards. Pin 18A on MS6205.
// int const displaySelectPage0Pin = D2;  // GPIO4  = Pin D2 on NodeMCU boards. Pin  2A on MS6205.
// int const displaySelectPage1Pin = D3;  // GPIO0  = Pin D3 on NodeMCU boards. Pin  2B on MS6205.
// MS6205 display(shiftRegisterLatchPin, shiftRegisterClockPin, shiftRegisterDataPin, displaySetPositionPin, displaySetCharacterPin, displayClearPin);
// void setup()
// {
// }
// void loop()
// {
//   // put your main code here, to run repeatedly:
//   display.clear();
//   int row = 3;
//   int column = 2;
//   display.setCursor(column, row);
//   display.write("Elektronika");
//   row = 4;
//   column = 4;
//   display.setCursor(column, row);
//   display.write("MS6205");
//   row = 5;
//   column = 7;
//   display.setCursor(column, row);
//   display.write("+");
//   row = 6;
//   column = 4;
//   display.setCursor(column, row);
//   display.write("ESP8266");
//   delay(1000);
// }
//
//
//
// void setup()
// {
//   // put your setup code here, to run once:
//   // --- Initialize paging ---
//   display.beginPaging(displaySelectPage0Pin, displaySelectPage1Pin);
//   delay(200);
//   // --- Fill page 0 ---
//   display.showPage(0);
//   delay(200);
//   display.clear();
//   delay(200);
//   int row = 3;
//   delay(200);
//   int column = 2;
//   delay(200);
//   display.setCursor(column, row);
//   delay(200);
//   display.write("Elektronika");
//   delay(200);
//   row = 4;
//   delay(200);
//   column = 4;
//   delay(200);
//   display.setCursor(column, row);
//   delay(200);
//   display.write("MS6205");
//   delay(200);
//   // --- Fill page 1 ---
//   display.showPage(1);
//   delay(200);
//   display.clear();
//   delay(200);
//   row = 5;
//   delay(200);
//   column = 7;
//   delay(200);
//   display.setCursor(column, row);
//   delay(200);
//   display.write("+");
//   delay(200);
//   row = 6;
//   delay(200);
//   column = 4;
//   delay(200);
//   display.setCursor(column, row);
//   delay(200);
//   display.write("ESP8266");
// }
// void loop()
// {
//   // put your main code here, to run repeatedly:
//   display.showPage(0);
//   delay(500);
//   display.showPage(1);
//   delay(500);
// }
//
//
//
// // Scroll text declaration:
// // Define area from in row 0, columns 1 to 8.
// // Scroll 1 character each 300 ms
// // Shown text is "Demostring"
// // Will be displayed on display declared a few lines above
// scrollText demoString(1, 0, 8, 0, 200, "Demostring", &display);
// // Another scroll text declaration:
// // Define area from column 0, row 7 to column 3, row 8.
// // Scroll 1 character each 300 ms
// // Shown text is "Teststring"
// // Will be displayed on display declared a few lines above
// scrollText testString(0, 7, 3, 8, 300, "Teststring", &display);
// void setup()
// {
//   display.clear();
// }
// void loop()
// {
//   testString.update();
//   demoString.update();
// }
//
//
//
//
// int const shiftRegisterLatchPin = D8;  // GPIO15 = Pin D8 on NodeMCU boards. Pin 12 on 74HC595.
// int const shiftRegisterClockPin = D5;  // GPIO14 = Pin D5 on NodeMCU boards. Pin 11 on 74HC595.
// int const shiftRegisterDataPin = D7;   // GPIO13 = Pin D7 on NodeMCU boards. Pin 14 on 74HC595.
// int const displaySetPositionPin = D6;  // GPIO12 = Pin D6 on NodeMCU boards. Pin 16A on MS6205.
// int const displaySetCharacterPin = D4; // GPIO2  = Pin D4 on NodeMCU boards. Pin 16B on MS6205.
// int const displayClearPin = D1;        // GPIO5  = Pin D1 on NodeMCU boards. Pin 18A on MS6205.
// int const displaySelectPage0Pin = D2;  // GPIO4  = Pin D2 on NodeMCU boards. Pin  2A on MS6205.
// int const displaySelectPage1Pin = D3;  // GPIO0  = Pin D3 on NodeMCU boards. Pin  2B on MS6205.
// #include <MC6205.h>
// MC6205 display(shiftRegisterDataPin, shiftRegisterClockPin, shiftRegisterLatchPin, displaySetPositionPin, displaySetCharacterPin, displayClearPin); // might be wrong <<<
// void setup()
// {
//   Serial.begin(115200);
//   delay(4000);
//   Serial.println("\nLet's go");
//   display.begin();
// }
// void loop()
// {
//   Serial.println("Ticking over");
//   display.cls();
//   display.clrmem();
//   display.setCursor(2, 2);
//   display.print("HELLO");
//   delay(2000);
// }
#include <MS6205.h>
// int const shiftRegisterLatchPin = 15; // GPIO15 = Pin D8 on NodeMCU boards. Pin 12 on 74HC595.
// int const shiftRegisterClockPin = 14; // GPIO14 = Pin D5 on NodeMCU boards. Pin 11 on 74HC595.
// int const shiftRegisterDataPin = 13;  // GPIO13 = Pin D7 on NodeMCU boards. Pin 14 on 74HC595.
// int const displaySetPositionPin = 12; // GPIO12 = Pin D6 on NodeMCU boards. Pin 16A on MS6205.
// int const displaySetCharacterPin = 2; // GPIO2  = Pin D4 on NodeMCU boards. Pin 16B on MS6205.
// int const displayClearPin = 5;        // GPIO5  = Pin D1 on NodeMCU boards. Pin 18A on MS6205.
// int const displaySelectPage0Pin = 4;  // GPIO4  = Pin D2 on NodeMCU boards. Pin  2A on MS6205.
// int const displaySelectPage1Pin = 0;  // GPIO0  = Pin D3 on NodeMCU boards. Pin  2B on MS6205.
int const shiftRegisterLatchPin = D8;  // GPIO15 = Pin D8 on NodeMCU boards. Pin 12 on 74HC595.
int const shiftRegisterClockPin = D5;  // GPIO14 = Pin D5 on NodeMCU boards. Pin 11 on 74HC595.
int const shiftRegisterDataPin = D7;   // GPIO13 = Pin D7 on NodeMCU boards. Pin 14 on 74HC595.
int const displaySetPositionPin = D6;  // GPIO12 = Pin D6 on NodeMCU boards. Pin 16A on MS6205.
int const displaySetCharacterPin = D4; // GPIO2  = Pin D4 on NodeMCU boards. Pin 16B on MS6205.
int const displayClearPin = D1;        // GPIO5  = Pin D1 on NodeMCU boards. Pin 18A on MS6205.
int const displaySelectPage0Pin = D2;  // GPIO4  = Pin D2 on NodeMCU boards. Pin  2A on MS6205.
int const displaySelectPage1Pin = D3;  // GPIO0  = Pin D3 on NodeMCU boards. Pin  2B on MS6205.
MS6205 display(shiftRegisterLatchPin, shiftRegisterClockPin, shiftRegisterDataPin, displaySetPositionPin, displaySetCharacterPin, displayClearPin);
void setup()
{
  Serial.begin(115200);
  delay(4000);
}
void loop()
{
  display.clear();
  // display.writeBlock(0, 0);
  // display.setCursor(0, 0);
  // display.write(F("ABCDEFGH"));
  // delay(1000);
  // // display.writeBlock(1, 1);
  // display.setCursor(1, 1);
  // display.write(F("ABCDEFGH"));
  // delay(1000);
  // // display.writeBlock(2, 2);
  // display.setCursor(2, 2);
  // display.write(F("ABCDEFGH"));
  // delay(1000);
  // // display.writeBlock(3, 3);
  // display.setCursor(3, 3);
  // display.write(F("ABCDEFGH"));
  // delay(1000);
  // // display.writeBlock(4, 4);
  // display.setCursor(4, 4);
  // display.write(F("ABCDEFGH"));
  // delay(1000);
  // // display.writeBlock(5, 5);
  // display.setCursor(5, 5);
  // display.write(F("ABCDEFGH"));
  // delay(1000);
  //A
  // B
  //  C
  //   D
  //    E
  //     F
  //      G
  //       H
  //        I
  //         J
  display.setCursor(0, 0);
  display.write("A");
  delay(1000);
  display.setCursor(1, 1);
  display.write("BCDE\nNEWLINE");
  delay(1000);
  display.setCursor(2, 2);
  display.write("C");
  delay(1000);
  display.setCursor(3, 3);
  display.write("D");
  delay(1000);
  display.setCursor(4, 4);
  display.write("E");
  delay(1000);
  display.setCursor(5, 5);
  display.write("F");
  delay(1000);
  display.setCursor(6, 6);
  display.write("G");
  delay(1000);
  display.setCursor(7, 7);
  display.write("H");
  delay(1000);
  display.setCursor(8, 8);
  display.write("I");
  delay(1000);
  display.setCursor(9, 9);
  display.write("J");
  delay(1000);
}