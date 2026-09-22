// Flexible Power Calculator

// Medium

// Write a function:

// power()

// that calculates:

// $$ base^{exponent} $$

// The exponent must have a default value of 2.

// Therefore:

// power(5)

// produces:

// 25

// while:

// power(5,3)

// produces:

// 125
// Input Format
// base
// choice

// where:

// 1 → use default exponent
// 2 → provide exponent
// Requirement

// Use a function with a default argument.

// Do not use pow()

#include <iostream>

using namespace std;

class Power_Calculator {
  int n, exponent;

public:
  void power(int n, int exponent = 2) {
    int res = 1;
    for (int i = 0; i < exponent; i++) {
      res *= n;
    }
    cout << "Power: " << res;
  }
  void input() {
    int ch;
    cout << "Enter 1 for default power or 2 for custom. \n";
    cin >> ch;
    cout << "Enter the number. \n";
    cin >> n;
    if (ch == 2) {
      cout << "Enter the power. \n";
      cin >> exponent;
      power(n, exponent);
    } else {
      power(n);
    }
  }
};

int main() {
  Power_Calculator ob;
  ob.input();
}