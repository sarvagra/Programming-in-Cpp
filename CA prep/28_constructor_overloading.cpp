#include <iostream>
#include <string>

using namespace std;

class Weapons {
private:
  string name, medium;
  int range;

public:
  // default constructor
  Weapons() {
    name = "";
    medium = "";
    range = 0;
  }
  // parameterizd constructor
  Weapons(string n, string m, int r) {
    name = n;
    medium = m;
    range = r;
  }
  // constructor overloading
  Weapons(string n, int r) {
    name = n;
    medium = "Unknown";
    range = r;
  }

  void display() {
    cout << "-----Weapon Enlistment-----" << endl;
    cout << "Name: " << name << endl;
    cout << "Medium: " << medium << endl;
    cout << "Range: " << range << " Km" << endl;
  }
};

int main() {
  // try the default one
  Weapons jet;
  jet.display();

  // try the parameterized constructor
  Weapons aircraft_carrier("INS VIKRANT", "Water/Sea", 9000);
  aircraft_carrier.display();

  // try the constructor overloading
  Weapons assault_rifle("AK-47", 1);
  assault_rifle.display();

  return 0;
}
