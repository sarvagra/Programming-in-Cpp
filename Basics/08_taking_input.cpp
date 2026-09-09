#include <iostream>
#include <string>

using namespace std;

int main() {
  int a, b;
  string name;
  cout << "Enter two numbers \n";
  cin >> a >> b;
  cout << a + b << endl;
  cin.ignore();

  cout << "Enter your full name. \n";
  cin.ignore();
  getline(cin, name);
  cout << "Niga your name is " << name;
  return 0;
}
