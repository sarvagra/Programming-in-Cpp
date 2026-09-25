#include <iostream>

using namespace std;
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int carry = 0, result = 0;
    ListNode *n1 = new ListNode; // resultant list
    n1->val = 0;                 // value set to 0
    ListNode *head = n1;         // had of the resultant list
    ListNode *c1 = l1;           // l1 head copy
    ListNode *c2 = l2;           // l2 head copy
    while (c1 != nullptr || c2 != nullptr) {
      if (c1 == nullptr) { // if c1 ends first
        carry = result / 10;
        result = result % 10;

        result = result + c2->val + carry;
        n1->c2 = c2->next;

      } else if (c2 == nullptr) { // if c2 ends first
        c1 = c1->next;

      } else { // if both have nodes
      }
    }
  }
};