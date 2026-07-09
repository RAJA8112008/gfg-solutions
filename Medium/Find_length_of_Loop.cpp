/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
         Node* slow=head;
         Node* fast=head;
         while(fast && fast->next){
             slow=slow->next;
             fast=fast->next->next;
             if(slow==fast){
                 slow=head;
                 while(slow!=fast){
                     slow=slow->next;
                     fast=fast->next;
                 }
                 //have found out loop starting point is slow 
                 int count=1;
                 Node* pt=slow->next;
                 while(pt!=slow){
                     count++;
                     pt=pt->next;
                 }
                return count; 
             }
         }
         return 0;
    }
};