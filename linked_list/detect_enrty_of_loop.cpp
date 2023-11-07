 int findFirstNode(Node* head)
    {
        // your code here
        if(head == NULL) return -1;
        Node * slow = head;
        Node * fast = head;
        
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next;
            if(fast -> next){
                fast = fast -> next;
            }
            if(slow == fast) break;
        }
        
        if(slow != fast) return -1;
        slow = head;
        while(slow != fast){
            slow = slow -> next;
            fast = fast -> next;
        }
        
        return fast -> data;
    }