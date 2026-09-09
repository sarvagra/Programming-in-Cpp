/*this is a multi line comment
- this is a program to print the sum of any 2 integers */

// nesting comments is not allowed in C++

#include <iostream>
using namespace std;


int main() {                            // single line comment
    int n1, n2, res;
    cout << "Enter number 1" << endl;
    cin >> n1;
    cout << "Enter number 2" << endl;
    cin >> n2;
    res=n1+n2;
    cout << "Sum is " << res << endl;

}