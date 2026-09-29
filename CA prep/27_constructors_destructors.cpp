#include <iostream>
#include <string>

using namespace std;

class Cars {
private:
  string model, brand;
  int price;

public:
  // constructor is used to initialize the values of an object
  // a constructor with no parameter list is a default constructor
  // a constructor with a parameter list is called a parameterized
  // constructor, it must take some values when an object is created.

  // example of a default constructor
  //   Cars() {
  //     cout << "Constructor called automatically" << endl;
  //     brand = "";
  //     model = "";
  //     price = 0;
  //   }

  // example of a parameterized constructor with default values
  Cars(string b = "Unknown", string m = "Unknown", int p = 0) {
    cout << "Constructor called automatically" << endl;
    brand = b;
    model = m;
    price = p;
  }
  void set_values(string b, string m, int p) {
    brand = b;
    model = m;
    price = p;
  }
  void display() {
    cout << "----CAR INFO----" << endl;
    cout << "brand: " << brand << endl;
    cout << "model: " << model << endl;
    cout << "priced at: " << price << endl;
  }
  // a destructor is called itself when an object is destroyed
  // below is a destructor, notice the ~ before the name
  // destructor takes no parameters
  ~Cars() { cout << "Destructor called automatically" << endl; }
};

int main() {
  // try out default constructor
  //   CARS car;
  //   car.set_values("XUV", "Mahindra",
  //                  1800000); // we can do this automatically by using the
  //                            // parameterized constructor
  //   car.display();
  // try out parameterized constructor
  Cars car("KIA", "SELTOS",
           1300000); // takes values at the time of object creation
  car.display();     // displays the values

  // try out constructor with default values
  Cars car1;
  car1.display();
  return 0;
  // notice how The object's lifetime ends, and its destructor is automatically
  // called. first created object's destructor is called last (LIFO)
}