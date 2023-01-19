ListNode* merge(ListNode *l1,ListNode* l2){
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        if(l1->val<=l2->val){
            l1->next = merge(l1->next,l2);
            return l1;
        }
        else{
            l2->next = merge(l1,l2->next);
            return l2;
        }
        return NULL;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==1)return lists[0];
        ListNode* ans = new ListNode(INT_MIN);
        for(int i = 0; i < lists.size(); i++){
            ans = merge(ans,lists[i]);
        }
        return ans->next;
    }
