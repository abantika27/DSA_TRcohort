Node* reverseLL(Node* head){
Node* prev=NULL;
Node* current=head;
Node* nextnode=head;
while(current!=NULL){
nextnode=current->next;
current->next=prev;
prev=current;
current=nextnode;
}
return prev;
}
