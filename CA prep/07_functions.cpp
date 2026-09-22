// Student Result Formatter

// Medium-Hard

// Create a function:

// displayResult(string name, float percentage, int width = 20)

// that prints the student's name and percentage using iomanip manipulators.

// The name must occupy a field of width width.

// Percentage must be displayed with exactly 2 digits after the decimal point.

// Example

// For:

// name = Rahul
// percentage = 87.456
// width = 15

// the output should format the fields using:

// setw()
// fixed
// setprecision()
// Requirement
// width must be a default argument.
// Use <iomanip>.
// Do not manually add spaces.

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
  string name;
  float percentage;

public:
  void input() {
    int width;
    cout << "Enter the name of the student.\n";
    getline(cin, name);

    cout << "Enter the percentage off the student upto 4 decimals. \n";
    cin >> percentage;

    int ch;
    cout << "Enter 1 for default or 2 for custom width.\n";
    cin >> ch;
    if (ch == 1) {
      displayResult();
    } else {
      cout << "Enter the width. \n";
      cin >> width;
      displayResult(width);
    }
  }

  void displayResult(int width = 20) {
    cout << setw(width) << name << "\n";
    cout << "Percentage = " << fixed << setprecision(2) << percentage << "\n";
    cout << "Width = " << width << "\n";
  }
};

int main() {
  Student s1;
  s1.input();
}