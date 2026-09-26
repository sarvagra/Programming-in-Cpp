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
  Student s[3];

  // give values to each object
  strcpy(s[0].name, "Sarvagra");
  s[0].cgpa = 7.9;
  strcpy(s[1].name, "Vishvam");
  s[1].cgpa = 2.9;
  strcpy(s[2].name, "Srajan");
  s[2].cgpa = 2.9;

  // open a file
  fstream file("../res/multiple_binary.dat",
               ios::binary | ios::in | ios::out |
                   ios::trunc); // app to create persistant record system
  file.seekp(0);

  for (int i = 0; i < 3; i++) {
    file.write(reinterpret_cast<char *>(&s[i]), sizeof(s[i]));
  }
  file.seekg(0);
  Student s1;

  while (file.read(reinterpret_cast<char *>(&s1), sizeof(s1))) {

    cout << "Name: " << s1.name << endl;
    cout << "CGPA: " << s1.cgpa << endl;
    cout << "----------------\n";
  }
  file.close();

  return 0;
}