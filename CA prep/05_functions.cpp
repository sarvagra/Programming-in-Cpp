// Write a C++ program using a function calculateBill() to calculate an
// electricity bill.

// The function must use default arguments.

// The bill is calculated as:

// units <= 100       → units × 2
// units <= 200       → first 100 × 2 + remaining × 3
// units > 200        → first 100 × 2 + next 100 × 3 + remaining × 5

// Add a fixed service charge of 50.

// The service charge must be implemented as a default parameter of the
// function.

// Input Format
// units
// Output Format

// Display:

// Bill: <amount>
// Requirement

// Your function must have the conceptual form:

// calculateBill(units, serviceCharge)

// where serviceCharge has a default value.

#include <iostream>

using namespace std;

class Electricity_bill {
private:
  int units = 0;

public:
  void input() {
    cout << "Enter the number of units consumed. \n";
    cin >> units;
  }
  int calculate_bill(int units, int serviceCharge = 50) {
    int bill = 0;
    if (units < 0) {
      cout << "Error, number of units can not be less than 0. \n";
      return 0;
    } else if (units <= 100) {
      bill = units * 2;
    } else if (units <= 200) {
      bill = (100 * 2) + (units - 100) * 3;
    } else {
      bill = (100 * 2) + (100) * 3 + ((units - 200) * 5);
    }
    return bill + serviceCharge;
  }
  void display() { cout << "Bill: " << calculate_bill(units) << "\n"; }
};

int main() {
  Electricity_bill bill;
  bill.input();
  bill.display();
}