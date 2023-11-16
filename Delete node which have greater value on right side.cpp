class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node* p=head;
        while(p->next!=NULL){
            if(p->data<p->next->data){
                p->data=p->next->data;
                p->next=p->next->next;
                p=head;
            }
            else{
                p=p->next;
            }
        }
        return head;
    }
    
};
