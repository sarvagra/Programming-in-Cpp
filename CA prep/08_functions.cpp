// Inline Mathematical Utility

// Hard

// Create a class MathUtility containing three inline member functions:

// square(int)
// cube(int)
// absolute(int)

// The program receives N integers and displays for each:

// Number
// Square
// Cube
// Absolute

// Requirement
// All three mathematical functions must be implemented as inline.

// Use objects of the class to invoke them.

// This is testing whether you understand that an inline function is still a
// normal function with normal calling syntax.

#include <iomanip>
#include <iostream>

using namespace std;

class MathUtility {
public:
  void number(int n) { cout << "Number: " << n << "\n"; }
  inline void square(int n) { cout << "Square: " << n * n << "\n"; }
  inline void cube(int n) { cout << "Cube: " << n * n * n << "\n"; }
  inline void absolute(int n) {
    n = (n < 0) ? -n : n;
    cout << "Absolute: " << n << "\n";
  }
};

int main() {
  int n;
  cout << "Enter the number\n";
  cin >> n;

  MathUtility m;
  m.number(n);
  m.square(n);
  m.cube(n);
  m.absolute(n);
}