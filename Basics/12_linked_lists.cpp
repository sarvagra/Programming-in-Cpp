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

// function to take input for values
int get_data() {
  int val;

  cin >> val;
  return val;
}

// function to create the nodes, with values as input by the user
node *create_list(int n) {
  // handle the edge case if list size 0 is input -> no creation of list.
  if (n <= 0) {
    return nullptr;
  }
  node *f = new node;
  f->data = get_data();
  node *head = f; // !! very imp!! make head to point the first node
  // now store the head in another pointer to make traversal without loosing the
  // actual head
  node *hook = head;
  for (int i = 1; i < n; i++) {
    node *s = new node;
    s->data = get_data();
    s->next = nullptr; // set this to nullptr so it doesnt point at some garbage
                       // memory
    hook->next = s;
    hook = s;
  }
  hook->next = nullptr;
  return head;
}

// function to insert node before a given node's data, similarly we could do
// after value too.
node *insert_node_via_value(node *head, int n) {
  node *n1 = new node;
  cout << "Enter the value of the node to be inserted. \n";
  n1->data = get_data();
  node *current = head;
  node *insert = nullptr;
  if (head == nullptr) { // handle empty list
    delete n1;           // delete floating node since list is empty
    cerr << "Empty list passed... \n returning list head\n ";
    return head;
  }
  if (head->data == n) { // handle first element insertion
    n1->next = current;
    head = n1;
    return head;
  }
  while (current != nullptr) {
    insert = current->next;
    if (current->data == n) {
      current->next = n1;
      n1->next = insert;
      return head;
    }
    current = current->next;
  }
  delete n1;
  cerr << "Insertion failed since element was not found in the list...\n "
          "returning head \n";
  return head;
}

// insert element at the end of the list
node *insert_node_at_end(node *head, int n) {
  node *n1 = new node;
  n1->data = get_data();
  node *current = head;
  node *insert = nullptr;
  while (current != nullptr) {
    if (current->next == nullptr) {
      current->next = n1;
      n1->next = nullptr;
      return head;
    }
    current = current->next;
  }
  delete n1; // delete node if not inserting
  cout << "List Empty...\n returning head \n";
  return head;
}

// function to insert node at a node at an index
node *insert_node_via_index(node *head, int n) {
  node *n1 = new node;
  n1->data = get_data();
  node *current = head;
  node *insert = nullptr;
  if (head == nullptr) {
    cerr << "Empty list is passed...\n returning head\n";
    delete n1;
    return head;
  } else if (n == 0) { // handle the insertion at head
    n1->next = head;
    head = n1;
    cout << "Node inserted at index" << n << "\n";
    return head;
  }
  for (int i = 0; i < n; i++) {
    insert = current->next;
    if (i == n - 1) { // handle the insertion at tail/end
      current->next = n1;
      n1->next = insert;
      cout << "Node inserted at index" << n << "\n";
      return head;
    }
    current = current->next;
  }
  cerr << "Index out of range\n returning head\n";
  delete n1;
  return head;
}

// function to delete a node anywhere in a linked list using index
node *delete_node_via_index(node *head, int n) {
  node *current = head;
  if (current == nullptr || n < 0) { // check if the list is empty
    cerr << "Empty List is Being Passed or index is negative... \n Returning "
            "nullptr \n";
    return head;
  } else if (n == 0) {
    head = head->next;
    delete current; // simply move the head pointer to the next node and return
    return head;
  }

  else {
    node *del = nullptr;
    for (int i = 0; i < n; i++) {

      del = current->next; // pointer to the node which is before the node to be
                           // deleted
      if (i == n - 1) {
        if (del == nullptr) { // check if the index is out of bounds
          cerr << "Index out of bounds... \n Returning unchanged list \n";
          return head;
        }
        current->next = del->next; // point the current node to the next node
                                   // skipping the one to delete
        delete del;                // delete the required node
        break;
      }
      current = current->next;
    }
  }
  return head;
}

// function to delete a node via searching the element in it
node *delete_node_via_value(node *head, int n) {
  node *current = head;
  node *del = nullptr;
  if (head == nullptr) { // check if null list is passed - edge case handling
    cerr << "Null list passed...\n returning unchanged list";
    return head;
  }

  while (current != nullptr) {
    del = current->next;
    if (current->data ==
        n) { // if its first element in the list -edge case handling
      del = head;
      head = del->next;
      delete del;
      cerr << "Deleted Element " << n << "\n";
      return head;
    }
    if (del != nullptr && del->data == n) {
      current->next = del->next;
      delete del;
      cerr << "Deleted Element " << n << "\n";
      return head;
    }
    current = current->next;
  }
  cerr << "Element not found... \n returning unchanged list\n";
  return head;
}

// function to print a complete linked list
int print(node *head) {
  node *current = head;
  while (current != nullptr) {
    cerr << current->data << " "; // print the data in that node
    current = current->next;      // take the address of the next node
  }
  return 0;
}

// function to print a single element from a linked list at any index
int print_element() { return 0; }

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
      cerr << current->data << " "; // print the data in that node
      current = current->next;      // take the address of the next node
    }
      */

  // Do the same using functions / cleaner method
  node *head = create_list(5);

  cout << "\nInitial list: ";
  node *current = head;
  while (current != nullptr) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "nullptr\n";

  head = insert_node_via_value(head, 99);
  head = insert_node_via_index(head, 99);

  head = delete_node_via_index(head, 2);

  head = delete_node_via_value(head, 99);

  cout << "Final list: ";
  current = head;
  while (current != nullptr) {
    cout << current->data << " -> ";
    current = current->next;
  }
  cout << "nullptr\n";

  return 0;
}
