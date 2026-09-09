#include <iostream>

int addition(int a, int b) {
  int sum = a + b;
  return sum;
}

int main() {
  int x, y;
  std ::cout << "Enter the values for x and y (integeral)" << std ::endl;
  std ::cin >> x >> y;

  /* lets wrap this line in a functio and see
  int sum = x + y;
  */
  
  std ::cout << "The sum of x and y is " << addition(x, y) << std ::endl;

  return 0;
}
