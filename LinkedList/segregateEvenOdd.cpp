Node* segregateEvenOdd(Node* head)
{
    
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node* current=head;
    Node* dummy1=new Node(-1);
    Node* dummy2=new Node(-1);
    Node* oddtail=dummy2;
    Node* eventail=dummy1;
    while(current!=NULL){
        if(current->data%2==0){
            eventail->next=current;
            eventail=current;
            current=current->next;
        }
        else{
            oddtail->next=current;
            oddtail=current;
            current=current->next;
        }
    }
    eventail->next=dummy2->next;
    oddtail->next=NULL;
    return dummy1->next;
}
