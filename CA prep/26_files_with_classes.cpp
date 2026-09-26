// create a class and use it for io in a file

#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

class Student {
private:
  char name[50];
  float cgpa;

public:
  void add_details(const char n[50], float c) {
    strcpy(name, n);
    cgpa = c;
  }
  void saveToFile() {
    fstream file("../res/class_file.dat", ios::binary | ios::out | ios::trunc);

    file.write(reinterpret_cast<char *>(this),
               sizeof(*this)); // this points to the current object -> s1

    file.close();
  }
  void display() {
    fstream file("../res/class_file.dat");
    file.read(reinterpret_cast<char *>(this), sizeof(*this));
    cout << "Name: " << this->name << endl;
    cout << "CGPA: " << this->cgpa << endl;

    file.close();
  }
};

int main() {
  Student s1;
  s1.add_details("Sarvagra Shishodia", 8.9);
  s1.saveToFile();
  s1.display();
}
