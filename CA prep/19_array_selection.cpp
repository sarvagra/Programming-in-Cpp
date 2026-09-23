// Selection Sort
// Idea

// At position i:

// Find the smallest element from i → end, then swap it with arr[i].

// Example:

// 29 10 14 37 13 5

// First pass:

// smallest = 5
// swap with 29

// 5 10 14 37 13 29

// Second pass:

// look from index 1
// smallest = 10
// already there

// And so on.

#include <iostream>
using namespace std;

int main() {
  int arr[5] = {64, 25, 12, 22, 11};
  int l = 5;
  int min_index;
  for (int i = 0; i < l - 1; i++) {
    min_index = i;
    for (int j = i; j < l; j++) {
      if (arr[j] < arr[min_index]) {
        min_index = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }

  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
}
