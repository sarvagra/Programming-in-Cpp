#include <iostream>

using namespace std;

class Car { // create a class car with its member methods and data
private:
  int age;

public:
  void input() {
    cout << "Enter the age of your car in years.\n";
    cin >> age;
  }
  void show_age() {
    cout << "The age of your car is " << age << " years old\n";
  }
};

// define the main method to access the class.
int main() {
  Car car1;     // create an object of the class car
  car1.input(); // modefy using the function age_is since age is private and can
                // be accesed only using function
  car1.show_age(); // use the show_age function to show the output
}