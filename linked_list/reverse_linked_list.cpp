/* Reverse Function to reverse a linked list*/

/*Iterative Method*/
/*T.C = O(n) & S.C = O(1)*/

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void reverse(){
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(current != NULL){
        next = current->next;
        prev = current;
        current->next = prev;
        prev = current;
        currrent = next;
    }

    head = prev;
}


/*Recursive Method*/
/*T.C = O(n) & S.C = O(n)*/

Node* reverse(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* rest = reverse(head->next);

    head->next->next = head;
    head->next = NULL;
    
    return rest;
}

