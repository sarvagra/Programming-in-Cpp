// Binary Search

// Now the important distinction:

// Binary search requires a sorted array.

// Given:

// arr = [3, 7, 11, 18, 24, 31, 42, 56, 70]
// target = 42

// Implement binary search using:

// int low = 0;
// int high = n - 1;

// Repeatedly:

// mid = (low + high) / 2

// Then:

// if arr[mid] == target → found
// if target > arr[mid] → search right half
// if target < arr[mid] → search left half

// Print the index if found, otherwise:

// Not Found
// Requirements
// No std::binary_search()
// Implement it manually.
// State time complexity.
// Test with both a found and absent value.

#include <iostream>

using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int l = 10;
  int element = 6;

  int mid, low = 0, high = l - 1;

  while (low <= high) {

    mid = (low + high) / 2;

    if (arr[mid] == element) {
      cout << "Element found at index: " << mid << "\n";
      break;
    } else if (arr[mid] < element) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return 0;
}