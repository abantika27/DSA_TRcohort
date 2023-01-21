Node* reverseLL(Node* head){
    if(head==NULL||head->next==NULL){
        return head;
    }
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
Node *multiplyLLwithDigit(Node *head,int dig){
    Node* dummy=new Node(-1);
    Node* ansCurr=dummy;
    Node* curr=head;
    int carry=0;
    while(curr!=NULL||carry>0){
        int sum=carry+(curr!=NULL ? curr->data: 0)*dig;
        carry=sum/10;
        int prod=sum%10;
        ansCurr->next=new Node(prod);
        if(curr!=NULL){
            curr=curr->next;
        }
        ansCurr=ansCurr->next;
    }
    return dummy->next;
}
void addtwoLL(Node* head,Node* ans){
    Node* c1=head;
    Node* c2=ans;
    int carry=0;
    while(c1!=NULL || carry!=0){
        int sum=carry+(c1!=NULL?c1->data:0)+(c2->next->data!=NULL?c2->next->data:0);
        int digit=sum%10;
        carry=sum/10;
        if(c2->next!=NULL){
            c2->next->data=digit;
        }
        else{
           c2->next=new Node(digit); 
        }
        if(c1!=NULL){
            c1=c1->next;
            
        }
        c2=c2->next;
    }
}
Node *multiplyLL(Node *head1, Node *head2)
{
    // Write your code here
    head1=reverseLL(head1);
    head2=reverseLL(head2);
    Node* head2_itr=head2;
    Node* dummy=new Node(-1);
    Node* ans_itr=dummy;
    while(head2_itr!=NULL){
       Node* prod=multiplyLLwithDigit(head1,head2_itr->data);
        head2_itr=head2_itr->next;
        addtwoLL(prod,ans_itr);
        ans_itr=ans_itr->next;
    }
    return reverseLL(dummy->next);
}
