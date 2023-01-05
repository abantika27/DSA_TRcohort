void removeLast(Node* head,Node* tail){
if(head->next==NULL){
head=tail=NULL;
}
else{
Node* temp=head;
while(temp->next->next!=NULL){
temp=temp->next;
}
tail=temp;
tail->next=NULL;
temp=temp->next;
free(temp);
 }
}
