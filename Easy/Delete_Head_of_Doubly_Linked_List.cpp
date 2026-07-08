/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/
Node *deleteHead(Node *head) {
   Node* temp=head;
   if(!temp->next)return NULL;
   temp=temp->next;
   head->next=NULL;
   temp->prev=NULL;
   return temp;
}