//naive
Node* kthfromLast(Node* head,int k){
int size = 0;
Node* temp=head;
while (temp != NULL) {
        temp = temp->next;
        size++;
  }
 // Check if value of k is not
 // more than length of the linked list
 if (size < k)
      return head;
temp = head;
int count=1;
while (count<size-k+1){
temp=temp->next;
count++;
}
return temp;
}

//slowfast approach
int kthfromLast(Node* head, Node* tail, int k){

    Node* slow = head;
    Node* fast = head;
    for(int i = 0 ; i < k ; i++){
        fast = fast->next;
    }
    while(fast!=tail){
        slow= slow->next;
        fast= fast->next;
    }

    return slow->data;
}

