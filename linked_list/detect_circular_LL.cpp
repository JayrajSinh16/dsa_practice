class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node *slow = head;
        Node *fast = head->next;
        
        while(fast != NULL && fast->next != NULL ){
            
            if(slow == fast){
                return true;
            }
            fast = fast->next->next;
            slow = slow->next;
            
        }
        
        return false;
    }
};