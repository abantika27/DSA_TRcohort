Node* midofLL(Node* head){
Node* slow=head;
Node* fast=head;
while(fast->next!=NULL && fast->next->next!=NULL){
slow=slow->next;
fast=fast->next->next;
}
return slow;
}
