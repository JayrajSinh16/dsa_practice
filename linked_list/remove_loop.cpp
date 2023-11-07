class Solution
{   private:
    Node* detectCycle(Node* head){
        Node* slow = head;
        Node* fast = head;
        Node* entry = head;
        
        while(fast != NULL && fast->next!= NULL ){
            slow = slow ->next;
            fast = fast->next->next;
            
            if(slow == fast ){
                while(slow != entry){
                    slow = slow->next;
                    entry = entry->next;
                }
                return entry;
            }
        }
        return NULL;
    }
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        
        Node* start = detectCycle(head);
        
        
        if(start != NULL){
            Node * tmp = start;
            
            while(tmp->next != start){
                tmp = tmp->next;
            }
            tmp->next = NULL;
        }
    }
};