#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

// using struct to do input output
struct Student {
  // string name; --> do NOT use this since this is complex type, use fixed size
  // char instead
  char name[50];
  float cgpa;
};

int main() {
  Student s1;
  strcpy(s1.name, "Sarvagra");
  s1.cgpa = 7.6;

  fstream file("../res/student_binary.dat",
               ios ::binary | ios::in | ios::out |
                   ios::app); // use ios::app to store multiple students

  file.write(reinterpret_cast<char *>(&s1), sizeof(s1));
  file.seekg(0); // reset the cursor
                 // create another object and store the data into it
  Student s2;
  file.read(reinterpret_cast<char *>(&s2), sizeof(s2));

  // display
  cout << "S2 Name: " << s2.name << endl;
  cout << "S2 Marks: " << s2.cgpa << endl;

  return 0;
}
