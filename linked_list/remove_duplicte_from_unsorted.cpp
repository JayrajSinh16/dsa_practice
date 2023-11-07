class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
       Node * removeDuplicates( Node *head) 
    {
        Node *temp=head;
        unordered_map<int,int> mp;
        while(temp!=NULL)
        {
            mp[temp->data]=1;
            temp=temp->next;
        }
        temp=head;
        Node *right=head;
        Node *prev=NULL;
        while(right!=NULL)
        {
            if(mp[right->data]==1) 
                mp[right->data]--,temp->data=right->data,prev=temp,temp=temp->next;
            right=right->next;
        }
        prev->next=NULL;
        return head;
    }

};