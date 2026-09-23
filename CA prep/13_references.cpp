// Reference Variable

// Create a program with:

// int x;
// int &ref = x;

// Requirements:

// Input x.
// Display x and ref.
// Modify ref.
// Display x again.
// Demonstrate that changing the reference changes the original variable.
// Example

// Input:

// 10

// Then modify:

// ref = 50;

// Expected idea:

// Before:
// x = 10
// ref = 10

// After:
// x = 50
// ref = 50

// Don't use pointers yet. This question is purely about understanding what a
// reference actually is.

// Then I'll give you the second reference question, where you'll use a
// reference as a function parameter.

#include <iostream>

using namespace std;
int main() {
  int x;
  int &ref = x; // reference to x : we put in values of x, any change in ref is
                // shown in x too.

  x = 40;
  cout << x << endl;
  cout << ref << endl;

  ref = 10;
  cout << x << "\n" << ref << endl;

  x = 30;
  cout << x << "\n" << ref << endl;
}
