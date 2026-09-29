#include <iostream>
#include <string>

using namespace std;

class Games {
private:
  string name, category;
  int price;

public:
  Games() {
    name = "";
    category = "";
    price = 0;
  }
  Games(string n, string c, int p) {
    name = n;
    category = c;
    price = p;
  }
  // copy constructor
  Games(const Games &other) {
    name = other.name;
    category = other.category;
    price = other.price;

    cout << "Copy constructor called\n";
  }

  void display() {
    cout << "-----Game Info-----" << endl;
    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Price: " << price << endl;
  }
  ~Games() { cout << "Destructor called" << endl; }
};

int main() {
  Games game("Uncharted", "Action Adventure", 1300);
  game.display();
  Games game1(game);
  game1.display();
  return 0;
}