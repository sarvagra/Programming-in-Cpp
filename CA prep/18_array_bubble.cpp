// Bubble Sort

// Now sorting. One solid implementation each.

// Given:

// arr = [64, 25, 12, 22, 11]

// Implement Bubble Sort in ascending order.

// Requirements
// Use a raw array.
// Do not use sort().
// Compare adjacent elements.
// Swap them when they're in the wrong order.
// Print the array after sorting.
// State:
// Best-case time
// Average-case time
// Worst-case time
// Space complexity
// Important

// Use the optimized version with a swapped flag:

// bool swapped = false;

// If an entire pass makes no swaps, the array is already sorted, so terminate
// early.

// This lets you get the important distinction:

// Bubble sort:
// Best      O(n)     ← optimized
// Average   O(n²)
// Worst     O(n²)
// Space     O(1)

#include <iostream>

using namespace std;

int main() {
  int arr[5] = {64, 25, 12, 22, 11};
  int temp = 0;
  int l = 5;
  for (int i = 0; i < l - 1; i++) {
    bool flag = false;
    for (int j = 0; j < l - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = true;
      }
    }
    if (!flag) {
      break;
    }
  }

  // print the array
  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}