class Node {
int data;
Node* next;
Node(int data){
this->data=data;
this->next=NULL;
 };
};

Node* addAtIndex(Node *head, int i,int pos){
Node* newnode=new Node(i);
if(pos==0){
newnode->next=head;
head=newnode;
return head;
};
Node* temp=head;
int count =0;
while(temp!=NULL && count<pos-1){
temp=temp->next;
count++;
}
if(temp!=NULL){
Node* a=temp->next;
temp->next=newnode;
newnode->next=a;
}
return head;
}
