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
     ListNode* add(ListNode* l1, ListNode* l2){
        ListNode* head= new ListNode(-1);
        ListNode* curr= head;
        int carry=0;
        while (l1!=NULL || l2!=NULL || carry!=0){
           int sum= carry+ (l1!=NULL?l1->val:0)+(l2!=NULL?l2->val:0);
            carry= sum/10;
            sum= sum%10;
            curr->next= new ListNode(sum);
            curr= curr->next;
            if (l1!=NULL){
                l1= l1->next;}
            if (l2!=NULL){
            l2= l2->next;}
        }
        head= head->next;
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL || l2==NULL){
            return l1!=NULL ? l1 : l2;
        }
        l1= reverse(l1);
        l2= reverse(l2);
        ListNode* ans= add(l1,l2);
        ans= reverse(ans);
        return ans;
    }
