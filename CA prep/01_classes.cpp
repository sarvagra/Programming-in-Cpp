
// Student Performance System

// Difficulty: Easy → Medium

// Problem Statement

// Create a class Student containing the student's roll number, name, and marks
// in three subjects.

// Read the details of N students, calculate total marks and percentage for
// every student, and display the student details along with the calculated
// percentage.

// Requirements
// Use a class.
// Keep data members private.
// Use public member functions for input and output.
// Create multiple objects.
// Input
// N
// roll name marks1 marks2 marks3
// ...
// Output

// Display every student's:

// Roll
// Name
// Total
// Percentage

#include <iostream>
// #include <print> isnt working currently
#include <string>

using namespace std;

class Student {
private:
  int roll;
  string name;
  float phy, chem, bio, total, average;

public:
  void input() {
    cout << "Enter the roll number of student.\n";
    cin >> roll;
    cout << "Enter the name of the student.\n";
    cin.ignore(); // always use before a getline() to make sure it doesnt take
                  // up the leftover space by cin.
    getline(cin, name);
    cout << "Enter the marks in Physics.\n";
    cin >> phy;
    cout << "Enter the marks in Chemistry.\n";
    cin >> chem;
    cout << "Enter the marks in Biology.\n";
    cin >> bio;

    total = sum(phy, chem, bio);
    average = avg(phy, chem, bio);
  }

  float avg(float p, float c,
            float b) { // move these into private to access the variables
                       // without the parameter list in a cleaner way.
    float avg = (p + c + b) / 3;
    return avg;
  }

  float sum(float p, float c, float b) {
    float total = p + c + b;
    return total;
  }

  void display() {

    // println("Roll: {} \n Name: {} \n Total: {:.2f} \n Average: {:.2f} \n",
    // roll,
    //         name, total, average);

    cout << "Roll Number: " << roll << "\nName: " << name
         << "\nTotal: " << total << "\nAverage: " << average << "\n";
  }
};

int main() {
  int n;
  cout << "Enter the number of students.\n";
  cin >> n;

  Student *students = new Student[n]; // create an array of objects to store
                                      // data of n students simultaneously

  for (int i = 0; i < n; i++) {
    students[i].input();
  }

  for (int i = 0; i < n; i++) {
    students[i].display();
  }

  delete[] students;
}
