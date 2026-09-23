#include <iostream>

using namespace std;

struct node {
  int data;
  node *prev;
  node *next;
};

int main() {
  int n;
  cout << "Enter the number of nodes to be created. \n";
  cin >> n;
  node *head = new node;
  node *tail = new node;

  for (int i = 0; i < n; i++) {
    node *head = nullptr;
    node *temp = nullptr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {

      node *n1 = new node;

      cin >> n1->data;

      n1->prev = nullptr;
      n1->next = nullptr;

      if (head == nullptr) {
        head = n1;
        temp = n1;
      } else {
        temp->next = n1;
        n1->prev = temp;
        temp = n1;
      }
    }
    //   head->data = 20;
    //   head->next = nullptr;
    //   head->prev = nullptr;

    //   node *n1 = new node;
    // n1->data=30;
    // head->next=n1;
    // n1->prev=head;
    // n1->next=nullptr;
  }
}