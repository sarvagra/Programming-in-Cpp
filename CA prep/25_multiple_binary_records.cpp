#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct Student {
  char name[50];
  float cgpa;
};

int main() {

  // create objects of struct
  Student s1, s2, s3;

  // give values to each object
  strcpy(s1.name, "Sarvagra");
  s1.cgpa = 7.9;
  strcpy(s2.name, "Vishvam");
  s2.cgpa = 2.9;
  strcpy(s3.name, "Srajan");
  s3.cgpa = 2.9;

  // open a file
  fstream file("../res/multiple_binary.dat",
               ios::binary | ios::in | ios::out |
                   ios::app); // app to create persistant record system
  file.seekp(0);

  file.write(reinterpret_cast<char *>(&s1), sizeof(s1));
  file.write(reinterpret_cast<char *>(&s2), sizeof(s2));
  file.write(reinterpret_cast<char *>(&s3), sizeof(s3));

  file.seekg(0);
  Student s;
  while (file.read(reinterpret_cast<char *>(&s), sizeof(s))) {
    cout << "Name: " << s.name << endl;
    cout << "CGPA: " << s.cgpa << endl;
    cout << "----------------\n";
  }
  file.close();

  return 0;
}