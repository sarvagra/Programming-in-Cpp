#include <iostream>
using namespace std;

void print(int arr[5]) {
  cout << "Array: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
};
void print_2d(int arr[2][5]) {
  cout << "Array: \n";
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
};
int main() {
  int arr_a[5] = {1, 2, 3, 4}; // array can be initialized with less elements
                               // than its actual size(partial initialization)
  print(arr_a);                // shows 0 for empty index

  // note that no functions like:
  // push_back(), pop_back(), insert(), erase(), clear(), at(), size()
  // are NOT allowed in normal raw cpp array as member methods.
  // I/O is simply using loops

  cout << "Element at index 3: " << arr_a[3]
       << "\n";             // accessing element stored at an index
  cout << arr_a[4] << "\n"; // is 0 from partial initialization which can be
                            // easily modefied by changing value at that index
  arr_a[4] = 5;
  cout << arr_a[4] << "\n"; // shows 5

  // 2-d arrays
  int arr_b[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}};
  print_2d(arr_b);
}
