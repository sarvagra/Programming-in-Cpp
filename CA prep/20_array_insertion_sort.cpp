// Insertion Sort

// Given:

// int arr[7] = {12, 11, 13, 5, 6, 7, 2};

// Implement Insertion Sort in ascending order.

// Requirements
// Raw array
// No sort()
// Use key
// Shift larger elements to the right
// Insert key into its correct position
// Print sorted array
// State:
// Best-case time
// Average-case time
// Worst-case time
// Space complexity

#include <iostream>

using namespace std;

int main() {
  int arr[7] = {12, 11, 13, 5, 6, 7, 2};
  int l = 7;

  for (int i = 1; i < l; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
}
