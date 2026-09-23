// Array Insertion

// And I'll deliberately make Q1 slightly more realistic than "insert 5 at index
// 2":

// Given an array of N integers and a position P, insert a value X at position P
// by shifting elements to the right. Print the resulting array and state the
// time complexity.

#include <iostream>

using namespace std;

int main() {
  int arr[6] = {1, 2, 3, 5, 6};
  cout << "Array before insertion: ";
  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  // define insertion co-ordinates
  int n = 5;       // size of the array
  int pos = 3;     // where to insert
  int element = 4; // element to insert

  // shift
  for (int i = n - 1; i >= pos; i--) {
    arr[i + 1] = arr[i];
  }
  arr[pos] = element; // insert
  n++;                // increment the size
  cout << "Array  after insertion: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}