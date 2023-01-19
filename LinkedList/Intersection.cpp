ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp;
		while(headA != NULL){
			temp = headB;
			while(temp != NULL){
				if(headA == temp){
					return headA;
				}
				temp = temp -> next;
			}
			headA = headA -> next;
		}
		return NULL;
    }

//floyd cycle detection method
ListNode *startofCycle(ListNode *head){
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                break;
            }
        }
        if(slow!=fast){
                return NULL;//cycle not present
            }
        slow=head;
        fast=fast;//don't move fast
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        //detection of floyd cycle
        ListNode* tail=headA;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=headB;
        ListNode* ans=startofCycle(headA);
        tail->next=NULL;
        return ans;
    }
