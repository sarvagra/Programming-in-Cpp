// Static Data + Static Member Function

// Difficulty: Hard

// Create a class BankAccount with:

// accountNumber
// holderName
// balance
// static data member totalAccounts

// Requirements:

// Every time a BankAccount object is created, increment totalAccounts.
// Provide a member function to deposit money.
// Provide a member function to withdraw money.
// Withdrawal should only happen if sufficient balance exists.
// Provide a static member function displayTotalAccounts() that displays the
// total number of accounts. totalAccounts must be accessed through the static
// function, not directly from main(). Input
// N
// accountNumber holderName initialBalance
// depositAmount
// withdrawAmount
// ...
// Output

// For every account, display its final balance.

// Then display:

// Total Accounts: X
// Concepts being tested
// class
// private/public
// objects
// member functions
// static data member
// static member function
// cin/cout

#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
  static int total_accounts;
  int account_number, balance;
  string name;

public:
  // Constructor: Increments total_accounts when an object is created
  BankAccount() {
    total_accounts++;
    balance = 0; // Initialize balance
  }

  void deposit(int amt) { balance += amt; }

  void withdraw(int amt) {
    if (balance - amt < 0) {
      cout << "Withdrawing failed due to insufficient balance. \n";
      return;
    }
    balance -= amt;
  }

  void input() {
    int initial_balance, deposit_amount, withdraw_amount;

    // cout << "Enter accountNumber holderName initialBalance:\n";
    cin >> account_number >> name >> initial_balance;
    balance = initial_balance;

    // cout << "Enter depositAmount:\n";
    cin >> deposit_amount;
    deposit(deposit_amount);

    // cout << "Enter withdrawAmount:\n";
    cin >> withdraw_amount;
    withdraw(withdraw_amount);
  }

  void displayBalance() {
    cout << "Account " << account_number << " final balance: " << balance
         << "\n";
  }

  // Static member function
  static void displayTotalAccounts() {
    cout << "Total Accounts: " << total_accounts << "\n";
  }
};

// Initialize static data member outside the class
int BankAccount::total_accounts = 0;

int main() {
  int n;
  cout << "Enter the number of accounts you want to access/create:\n";
  cin >> n;

  // Creates 'n' objects, invoking the constructor 'n' times
  BankAccount account[n];

  for (int i = 0; i < n; i++) {
    account[i].input();
  }

  // Display final balances
  for (int i = 0; i < n; i++) {
    account[i].displayBalance();
  }

  // Display total accounts using the static member function
  BankAccount::displayTotalAccounts();

  return 0;
}
