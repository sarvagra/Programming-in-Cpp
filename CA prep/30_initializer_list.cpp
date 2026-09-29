#include <iostream>
#include <string>

using namespace std;

class Ticket {
private:
  int number;
  string name, date;

public:
  // parameterized constructor with an initializer list
  Ticket(string na, string d, int no) : number(no), name(na), date(d) {
    // this is an example of initilizer list.
    // Members are initialized in the order they are declared in the class:
    // initializer list is specifically useful for const and reference types
  }
  void display() {
    cout << "---Ticket---" << endl;
    cout << "Ticket number: " << number << endl;
    cout << "Name: " << name << endl;
    cout << "Dated: " << date << endl;
  }
};

int main() {
  Ticket t1("Sarvagra", "2/10/2026", 45);
  t1.display();
}