// CA-Level: Invoice Generator

// Hard 🔥

// Create a function:

// calculateAmount(price, quantity, discount)

// where discount has a default value of 0.

// Calculate:

// gross = price × quantity
// discountAmount = gross × discount / 100
// finalAmount = gross - discountAmount

// The program should process N products.

// For each product, input:

// productName
// price
// quantity

// Then ask whether a discount is being applied.

// If no discount is supplied, call:

// calculateAmount(price, quantity)

// If supplied:

// calculateAmount(price, quantity, discount)
// Output

// Use:

// setw()
// left
// right
// fixed
// setprecision(2)

// to produce a formatted invoice.

// Example structure:

// Product        Price       Qty       Amount
// ------------------------------------------------
// Keyboard       799.00      2       1598.00
// Mouse          500.00      3       1350.00
// Concepts combined
// functions
// default arguments
// function calls
// iomanip
// setw
// left/right
// fixed
// setprecision
// class-independent functions

#include <iomanip>
#include <iostream>

using namespace std;

class Billing {
private:
  string name;
  float finalAmount;

public:
  void print(int p, int q, float a) {
    cout << left << setw(15) << name << right << setw(10) << p << setw(10) << q
         << setw(12) << fixed << setprecision(2) << a << "\n";
  }

  float calculateAmount(int price, int quantity, int discount = 0) {

    float gross, discountAmount;
    gross = price * quantity;
    discountAmount = gross * discount / 100;
    finalAmount = gross - discountAmount;

    return finalAmount;
  }

  void input() {
    char ch;
    int quantity;
    float price, discount;
    cout << "Enter the name of the product \n";
    cin.ignore();
    getline(cin, name);

    cout << "Enter the price of the product. \n";
    cin >> price;

    cout << "Enter the quantity of the product. \n";
    cin >> quantity;

    cout << "Enter Y if discount is supplied else N. \n";
    cin >> ch;

    if (ch == 'Y') {
      cout << "Enter the discount percentage.\n";
      cin >> discount;
      finalAmount = calculateAmount(price, quantity, discount);
      cout << "Product \t Price \t Quantity \t Amount \n";
      cout << "--------------------------------------------------\n";
      print(price, quantity, finalAmount);
    } else {
      finalAmount = calculateAmount(price, quantity);
      cout << "Product \t Price \t Quantity \t Amount \n";
      cout << "--------------------------------------------------\n";
      print(price, quantity, finalAmount);
    }
  }
};

int main() {
  int n;
  cout << "Enter the number of discrete items.";
  cin >> n;

  Billing *bill = new Billing[n];
  for (int i = 0; i < n; i++) {
    bill[i].input();
  }
  delete[] bill;
  return 0;
}