#include <iostream>

int main() {
  short s{1};
  short int si{12};
  signed short int ssi{-1234};
  unsigned short int usi{003};

  double d{2.5}; // double is always signed, so the use of signed keyword is
                 // redundant

  // ... so on for other variables(double, long, long long etc.)

  // range is always 2 power bit size of the variable, if its signed then half
  // neg , half pos
}