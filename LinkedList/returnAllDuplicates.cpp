ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* itr=dummy;
        itr->next=head;
        ListNode* current=head->next;
        while(current!=NULL){
           bool flag=false;
           while(current!=NULL && itr->next->val==current->val){
            flag=true;
            current=current->next;
            
        }
        if (flag==true){
            itr->next=current;
        }
        else{
            itr=itr->next;
        }
        if(current!=NULL){
            current=current->next;
        }
        }
        
        return dummy->next;
    }
