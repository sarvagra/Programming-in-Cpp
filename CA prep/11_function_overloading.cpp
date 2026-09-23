// Overloaded calculate()

// Create a class Calculator with these overloaded functions:

// calculate(int a, int b)
// calculate(double a, double b)
// calculate(int a, int b, int c)

// Requirements:

// int, int → return the larger number.
// double, double → return the average.
// int, int, int → return the smallest number.
// All three functions must have the same name: calculate.
// Use an object to call them.
// Display results with fixed << setprecision(2) where appropriate.
// Test with
// 10 25
// 10.5 20.5
// 7 3 12

// Expected results conceptually:

// 25
// 15.50
// 3
// ⚠️ The point

// Don't accidentally write:

// calculate(int, int)
// calculate(float, float)

// and then call with values where implicit conversion creates
// ambiguity/confusion.

// Use double explicitly for the second version.

// Code it. Send me your code. I'll only review it, then we're immediately
// moving to friend functions.

#include <iostream>

using namespace std;

class Calculator {
private:
  int a, b, e, f, g;
  double c, d;

public:
  void print() {
    cout << "Max: " << calculate(a, b) << "\n";
    cout << "Avg: " << calculate(c, d) << "\n";
    cout << "Min: " << calculate(e, f, g) << "\n";
  }
  int calculate(int x, int y) { return (x < y) ? y : x; }

  double calculate(double x, double y) { return ((x + y) / 2); }

  int calculate(int x, int y, int z) {
    int temp = (x < y) ? x : y;
    temp = (temp < z) ? temp : z;
    return temp;
  }

  void input() {
    cout << "Enter two integers to find the maximum from them. \n";
    cin >> a >> b;

    cout << "Enter two integers to find the average of them. \n";
    cin >> c >> d;

    cout << "Enter two decimal numbers to find the minimum from them. \n";
    cin >> e >> f >> g;
  }
};

int main() {
  Calculator ob;
  ob.input();
  ob.print();
}