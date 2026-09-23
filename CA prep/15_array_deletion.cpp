// Array Deletion + Merge

// Given:

// A = [10, 20, 30, 40, 50]
// P = 2

// Delete the element at index P by shifting the remaining elements left.

// Then merge the resulting array with:

// B = [60, 70, 80]

// Expected:

// After deletion:
// 10 20 40 50

// After merge:
// 10 20 40 50 60 70 80
// Requirements
// Use raw arrays, no vector.
// Delete by shifting.
// Create a third array for the merged result.
// Print both stages.
// State the time complexity.
// Remember

// For deletion:

// arr[i] = arr[i + 1];

// Elements move LEFT → and the loop moves LEFT → RIGHT.

#include <iostream>

using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 3, 4, 5, 6};
  int l = 7;
  int pos = 2;

  cout << "Array before deletion: \n";
  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // delete the element by shifting
  for (int i = pos; i < l - 1; i++) {
    arr[i] = arr[i + 1];
  }
  l--;
  cout << "Array after deletion: \n";
  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // merge the array
  int arr2[3] = {7, 8, 9};
  int l2 = 3;
  for (int i = 0; i < l2; i++) {
    arr[l + i] = arr2[i];
  }
  l += 3;
  cout << "Array after merging: \n";
  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
