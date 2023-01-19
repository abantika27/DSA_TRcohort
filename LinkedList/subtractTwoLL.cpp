ListNode* reverse(ListNode* head){
        ListNode* prev= NULL;
        ListNode* curr= head;
        while (curr){
            ListNode* forward= curr->next;
            curr->next= prev;
            prev= curr;
            curr= forward;
        }
        return prev;
    }

ListNode* subtractTwoLL(ListNode* l1,ListNode* l2){
//Assuming l1>l2 
    if(l2==NULL)
       return l1;
    if(l1==NULL)
       l2->val=-l2->val;
       return l2;
    l1=reverse(l1);
    l2=reverse(l2);
    ListNode* head=new ListNode(-1);
    ListNode* itr=head;
    int borrow=0
    while(l1!=NULL){
    int diff=borrow+l1->val- (l2!=NULL)?l2->val:0;
    if(diff<0){
       borrow=-1;
       diff=diff+10;
    }
    else{
       borrow=0;
    }
    itr->next=new listnode(diff);  
    itr=itr->next;
      
    l1=l1->next;
    if(l2)
       l2=l2->next;

  }
return reverse(head->next);
}
