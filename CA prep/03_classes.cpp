// Q3 — Library Book Record

// Difficulty: Medium

// Create a class Book containing:

// book ID
// title
// author
// price

// Read details of N books and display only books whose price is greater than a
// given value P.

// Requirement

// All data members must be private.

// Use public member functions to:

// input()
// display()

// and an additional member function to determine whether the book satisfies the
// price condition.

#include <iostream>
#include <string>

using namespace std;

class Library {
private:
  int book_id;
  string title, author;
  float price;

public:
  void input() {
    cout << "Enter the book ID. \n";
    cin >> book_id;
    cout << "Enter the book title. \n";
    cin.ignore();
    getline(cin, title);
    cout << "Enter the author name. \n";
    getline(cin, author);
    cout << "Enter the price. \n";
    cin >> price;
  }

  void display(Library b, int limit, int p) {
    cout << "All the books with price more than " << p << "\n";
    for (int i = 0; i < limit; i++) {
      if (b.price > p) {
        cout << "Book ID: " << b.book_id << "\nBook title: " << b.title
             << "\nAuthor name: " << b.author << "Price. \n"
             << b.price << "\n";
      }
    }
  }
};

int main() {
  int p, n;
  cout << "Enter the number of books you want to store\n";
  cin >> n;
  cout << "Enter the minimum price for books.\n";
  cin >> p;

  Library *books = new Library[n];
  for (int i = 0; i < n; i++) {
    books[i].input();
  }
  books.display(n, p);
}