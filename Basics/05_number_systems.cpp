#include <iostream>

int main() {
  int a = 15;         // deciml
  int b = 017;        // octal
  int c = 0x0F;       // hexa
  int d = 0b00001111; // binary

  std ::cout << "Values are : \n"
             << a << "\n"
             << b << "\n"
             << c << "\n"
             << d << std ::endl; // all print the same decimal value, meaning
                                 // c++ can interpret all types of numbers
}
