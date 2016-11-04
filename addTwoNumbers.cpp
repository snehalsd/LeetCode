struct Node
{
    int data;
    Node * next;
}
Node* addTwoNumbers(Node* l1,Node* l2) 
{
    int sum=0;
    int carry=0;
    Node* result=NULL;
    Node* prev=NULL;
    while(l1 != NULL || l2!=NULL)
    {
        sum=carry + (l1!=NULL ? l1->data : 0) + (l1!=NULL ? l1->data : 0);
        carry=sum/10;
        sum=sum%10;
        Node* temp;
        temp->data=sum;
        temp->next=NULL;
        if(!result)
        {
            result=temp;
            prev=result;
        }
        else
        {
            prev->next=temp;
            prev=prev->next;
        }
        if(l1)
            l1=l1->next;
        if(l2)
            l2=l2->next;
    }
     if (carry > 0)
     {
        Node* carrynode;
        carrynode->data=carry;
        carrynode->next=NULL;
        prev->next = carrynode;
      
     }
    return result;
}