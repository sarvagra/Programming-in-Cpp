// Multi-Mode Calculator

// Create a class Calculator containing overloaded functions named:

// calculate()

// Implement these three versions:

// calculate(int, int)
// calculate(int, int, int)
// calculate(double, double)

// Requirements:

// calculate(int, int) → return their sum
// calculate(int, int, int) → return their product
// calculate(double, double) → return their average
// Take input to demonstrate all three overloaded functions
// Use objects to call them.
// Expected conceptual calls
// Calculator c;

// c.calculate(10, 20);
// c.calculate(2, 3, 4);
// c.calculate(10.5, 20.5);

// Don't use menus unless you want to. The important part is making C++ select
// the correct overloaded function.

// This one is deliberately straightforward because I want you to understand how
// the compiler distinguishes overloads before we make the questions nasty.

#include <iomanip>
#include <iostream>

using namespace std;

class Calculator {
private:
  int sum, product;
  double avg;

public:
  int calculate(int x, int y) {
    sum = x + y;
    return sum;
  }
  int calculate(int x, int y, int z) {
    product = x * y * z;
    return product;
  }
  double calculate(double x, double y) {
    avg = (x + y) / 2;
    return avg;
  }
  void input() {
    int ch, a, b, c;
    double d, dd;
    cout << "Enter 1 for sum, 2 for product and 3 for average. \n";
    cin >> ch;

    if (ch == 1) {
      cout << "Enter two numbers\n";
      cin >> a >> b;
      sum = calculate(a, b);
      cout << "Sum: " << sum << "\n";
    } else if (ch == 2) {
      cout << "Enter three numbers\n";
      cin >> a >> b >> c;
      product = calculate(a, b, c);
      cout << "Product: " << product << "\n";

    } else {
      cout << "Enter two numbers\n";
      cin >> d >> dd;
      avg = calculate(d, dd);
      cout << "Average: " << avg << "\n";
    }
  }
};

int main() {
  Calculator ob;
  ob.input();
}