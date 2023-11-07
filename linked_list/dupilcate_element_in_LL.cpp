Node *removeDuplicates(Node *head)
{
 // your code goes here
 if(head == NULL || head->next == NULL){
     return head;
 }
 
 
 Node* ptr1 = head;
 Node* ptr2 = head->next;
 
 while(ptr1 != NULL && ptr1->next != NULL){
     while(ptr2 != NULL && ptr1->data == ptr2->data){
         ptr2 = ptr2->next;
     }
     ptr1->next = ptr2;
     ptr1 = ptr1->next;
 }
 
 return head;

}