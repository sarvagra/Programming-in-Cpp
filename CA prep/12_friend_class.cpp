// Friend Function

// Create:

// class Rectangle

// with private:

// int length;
// int breadth;

// Create a friend function:

// calculateArea(Rectangle r)

// which returns the area.

// Requirements:

// length and breadth must remain private.
// calculateArea() must not be a member function.
// Declare it using friend inside the class.
// The friend function must directly access the private members.
// Create an object and call the friend function from main().
// Target

// You should end up conceptually with:

// Rectangle r;

// cout << calculateArea(r);

// Don't use getters. The entire point is to practice the friend mechanism.

// Send your code; I'll check it and then we'll do friend class → references →
// call-by-value/address/reference, then we're out of OOP and into pointers.

#include <iostream>
using namespace std;
class Rectangle {
private:
  int length, breadth, area;

public:
  friend void calculateArea(Rectangle r);
  void input() {
    cout << "Enter the length. \n";
    cin >> length;
    cout << "Enter the breadth. \n";
    cin >> breadth;
  }
};
void calculateArea(Rectangle r) {
  r.area = r.length * r.breadth;
  cout << "Area of the rectangle = " << r.area << "\n";
}

int main() {
  Rectangle ob;
  ob.input();
  calculateArea(ob);
}