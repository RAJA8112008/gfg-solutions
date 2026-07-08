/* Structure of doubly linked list node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
      Node* prev=NULL;
      Node* next=NULL;
      Node* curr=head;
      while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          curr->prev=next;
          prev=curr;
          curr=next;
      }
   return prev;
    }
};