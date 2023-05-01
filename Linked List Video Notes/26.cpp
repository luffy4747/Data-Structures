//  Middle of linked list  

// void printMiddle(Node *head){
//     if(head == NULL)
//         return;
//     Node *slow = head;
//     Node *fast = head;
//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     cout << slow->data;
// }

// We have to mainatin two pointers slow and fast 
// slow will move one node and fast will move two node at a time
// fast cannot be null as we are accessing fast next and also increasing it in loop
