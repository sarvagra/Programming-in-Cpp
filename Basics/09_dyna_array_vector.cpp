#include <iostream>
#include <vector>

using namespace std;

// printing an array
void print(vector<int> arr) {
  cout << "Array: ";
  int l = arr.size();
  for (int i = 0; i < l; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main() {
  // creating an array
  vector<int> arr_a = {1, 2, 3, 4, 5};
  print(arr_a);

  // creating an empty array and taking input for it
  vector<int> arr_b(5); // if using [5] -> will create an arr_b which has 5
                        // separate vectors inside od dynamic size.
  for (int i = 0; i < 5; i++) {
    cout << "Enter the element at index " << i << "\n";
    cin >> arr_b[i];
  }
  print(arr_b);

  // use of arr.at(index), arr.front() and arr.back()
  cout << "arr_a.at(3) => " << arr_a.at(3) << "\n";
  cout << "arr_a.front() =>" << arr_a.front() << "\n";
  cout << "arr_a.back() =>" << arr_a.back() << "\n";

  // PUSH(add at end), POP(remove from end), insert at index and remove from
  // index operations
  cout << "arr_a.push_back(element): \n";
  arr_a.push_back(6);
  print(arr_a);

  cout << "arr_a.pop_back(): \n";
  arr_a.pop_back();
  print(arr_a);

  arr_a.insert(arr_a.begin() + 1, 0); // notice how this is not push(index,
  cout << "arr_a.insert(index,element): \n"; // element) but insert(index,
                                             // element)
  print(arr_a);

  arr_a.erase(arr_a.begin() + 1);
  cout << "arr_a.erase(index): \n";
  print(arr_a);

  // clear/empty the array
  arr_a.clear();
  print(arr_a);

  // important distinctions :
  // size vs sizeof()
  cout << "arr_b.size: " << arr_b.size() << "\n";
  cout << "sizeof(arr_b): " << sizeof(arr_b) << "\n";

  // arr[i] vs arr.at[i]:
  cout << "arr_b[0]: " << arr_b[6]
       << "\n"; // more dangerous since this will do some unexpected behavour
  cout << "arr_b.at(0): " << arr_b.at(6)
       << "\n"; // this will throw an exception out of range.
}
