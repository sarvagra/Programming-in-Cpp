// linked list consist of two parts :
// -> <type> data -> stores data
// -> next → stores the address of another NODE
// linked lists are traversed using nodes, we only maintain one head
// pointer(this isnt a node but the first node's address) if you lose the head
// pointer and have no other pointer/reference into the chain, you can no longer
// reach the list through normal traversal. traversal starts from head and then
// we repeatedly move to the next

#include <iostream>
#include <string>

using namespace std;

// defining of a node is done using a struct or a class
struct node {
  int data;
  node *next;
};

int get_data() {
  int val;

  cin >> val;
  return val;
}
node *create_nodes(int n) {
  if (n <= 0) {
    return nullptr;
  }

  node *head = new node();
  cout << "Enter element 1 \n1";
  head->data = get_data();
  head->next = nullptr;

  node *current = head;
  for (int i = 2; i <= n; i++) {
    node *n1 = new node;
    cout << "Enter element " << i << "\n";
    n1->data = get_data(); // or use shorthand: node *newnode = new node{data,
                           // nullptr};
    n1->next = nullptr;

    current->next = n1;
    current = n1;
  }
  return head;
}

void insert_node() {}

void delete_node() {}

int print() { return 0; }

int main() {
  /*
    // raw
    // creating disconnected nodes
    node *n1 = new node;
    node *n2 = new node;
    node *n3 = new node;

    // store data in the nodes
    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    // connect the nodes
    n1->next = n2;
    n2->next = n3;
    n3->next = nullptr;


    // finally store the head pointer
    node *head = n1;

    // traverse through the linked list using the head ptr
    node *current = head; // copy the ptr to another one so we dont loose/modify
                          // the original one
    while (current != nullptr) {
      cout << current->data << " "; // print the data in that node
      current = current->next;      // take the address of the next node
    }
      */

  // Do the same using functions / cleaner method
  node *head = create_nodes(3);

  // Print what you entered
  node *current = head;
  cout << "\nYour linked list: ";
  while (current != nullptr) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "nullptr\n";
}
