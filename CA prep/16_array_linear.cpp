// Linear Search + Occurrence Count

// Given an array of N integers and a target X:

// Search for X using linear search.
// Print the first index where it occurs.
// Count how many times X appears.
// If it doesn't exist, print Not Found.
// State the time complexity.

// Example:

// Array: 10 20 30 20 40 20 50
// X = 20

// Output:

// First occurrence: 1
// Occurrences: 3
// Constraint

// Don't sort the array first. The whole point is practicing linear search on an
// unsorted array.

#include <iostream>

using namespace std;

int main() {
  int arr[16] = {1, 2, 3, 4, 5, 5, 6, 2, 1, 2, 3, 7, 8, 8, 5, 1};
  int l = 16;
  int element = 5; // element to find
  // linear search + occurance count
  int index, freq = 0;
  for (int i = 0; i < l; i++) {
    if (arr[i] == element) {
      freq++;
      if (freq == 1)
        index = i;
    }
  }
  if (freq == 0)
    cout << "Not Found";
  else
    cout << "First occurrence: " << index << "\nOccurrences: " << freq;
}