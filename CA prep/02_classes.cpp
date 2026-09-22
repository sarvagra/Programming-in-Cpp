// Employee Salary Calculator

// Difficulty: Medium

// Create a class Employee with:

// employee ID
// employee name
// basic salary

// Calculate:

// HRA = 20% of basic salary
// DA  = 10% of basic salary
// Gross Salary = Basic + HRA + DA

// Use a non-inline member function declared inside the class and defined
// outside the class for calculating gross salary.

// Requirement

// Your solution must demonstrate:

// ClassName::functionName()

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
  int emp_ID;
  string name;
  float basic_sal, gross_sal;

  float get_hra() { return (0.20 * basic_sal); }
  float get_da() { return (0.10 * basic_sal); }

public:
  // call the non-inline function (declared outside the class) to get the gross
  // sal
  float get_gross();

  // take all the inputs
  void input() {
    cout << "Enter Employee ID\n";
    cin >> emp_ID;
    cout << "Enter Employee Name \n";
    cin.ignore(); // flush after cin whenever using getline.
    getline(cin, name);
    cout << "Enter basic salary \n";
    cin >> basic_sal;

    gross_sal = get_gross();
  }
  void display() {
    cout << "Employee ID: " << emp_ID << "\nEmployee Name: " << name
         << "\nGross Salary: " << gross_sal << "\n";
  }
};
float Employee::get_gross() { return basic_sal + get_hra() + get_da(); }

int main() {

  Employee e1;
  e1.input();
  e1.display();
  return 0;
}