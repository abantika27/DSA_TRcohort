Node* mergeTwosortedLL(Node* head1, Node* head2){
Node* finalhead=NULL;
Node* finaltail=NULL;
if(head1->data<=head2->data){
finalhead=head1;
finaltail=head1;
head1=head1->next;
}
else{
finalhead=head2;
finaltail=head2;
head2=head2->next;
}
while(head1!=NULL && head2!=NULL){
if(head1->data<=head2->data){
finaltail->next=head1;
finaltail=head1;
head1=head1->next;
}
else{
finaltail->next=head2;
finaltail=head2;
head2=head2->next;
 }
}
if(head1==NULL && head2!=NULL){
while(head2!=NULL){
finaltail->next=head2;
finaltail=head2;
head2=head2->next;
}
else(head2==NULL && head1!=NULL){
while(head1!=NULL){
finaltail->next=head1;
finaltail=head1;
head1=head1->next;
 }

finaltail->next=NULL;
return finalhead;
}
