#include <iostream>

int main() {
  // copy initialization
  int a = 10;
  int b = 10.2; // initializes an integer variable with value 10, dropping off
                // the decimal part (i.e. 0.2)

  // list initialization
  int x{};   // initializes an empty integer (=0)
  int y{20}; // initializes an integer with the value 20
  // int z{22.9}; // throws an error that integer is wrongly initialized with
  // wrong data type

  // direct initializaion
  int p();      // CREATES A FUNCTION WITH NO PARAMETERS AND RETURN TYPE INT A,
                // INSTEAD OF AN INT VARIABLE
  int q(10);    // creates an int variable with value 10
  int r(10.33); // creates an int variable with value 10, dropping off the
                // decimal part (i.e. 0.33)
}