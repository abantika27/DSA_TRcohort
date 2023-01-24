//no swapping
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };



Node* sortList(Node *head)
{
    Node* dummy0=new Node(-1);
    Node* itr0=dummy0;
    Node* dummy1=new Node(-1);
    Node* itr1=dummy1;
    Node* dummy2=new Node(-1);
    Node* itr2=dummy2;
    while(head!=NULL){
        if(head->data==0){
            itr0->next=head;
            itr0=itr0->next;
        }
        else if(head->data==1){
            itr1->next=head;
            itr1=itr1->next;
        }
         else if(head->data==2){
            itr2->next=head;
            itr2=itr2->next; 
        }
        head=head->next;
    }
    itr0->next=dummy1->next;
    itr1->next=dummy2->next;
    itr2->next=NULL;
    return dummy0->next;
}
