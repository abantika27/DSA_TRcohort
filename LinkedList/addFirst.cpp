class Node {
int data;
Node* next;
Node(int data){
this->data=data;
this->next=NULL;
 };
};

Node* addFirst(Node *head, int i){
Node* newnode=new Node(i);
newnode->next=head;
head=newnode;
return head;
}
