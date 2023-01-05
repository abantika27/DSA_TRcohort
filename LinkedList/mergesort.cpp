Node* mergesort(Node* head){
if(head==NULL || head->next==NULL){
return head;
}
Node* mid=midofLL(head);
Node* head1=mid->next;
mid->next=NULL;
head=mergesort(head);
head1=mergesort(head1);
return mergeTwosortedLL(head,head1);
}
