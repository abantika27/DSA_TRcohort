int getLength(Node* temp)
    {
        int count=0;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }
    Node* reverseKGroup(Node* head, int k) {
        
        //If no node or only one node is present
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        
        //Calculate the length of node & check with k
        int length=getLength(head);
        if(k>length) 
        return head;
        
        
        int count=0;
        Node* curr=head;
        Node* prev=NULL;
        Node* next=curr->next;
        
        //To reverse till kth node
        while(curr!=NULL && count<k)
        {
            
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
       
        //Recursive call to reverse further nodes
        head->next=reverseKGroup(curr,k);
        
        //return reversed link list
        return prev;
    }
