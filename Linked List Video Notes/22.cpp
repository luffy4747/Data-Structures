// Delete head of a circular linked list 

// Node *delHead(Node *head){
//     if(head==NULL)
//         return NULL;
//     if(head-> next==head){
//         delete head;
//         return NULL;
//     }
//     head -> data = head-> next -> data;
//     Node* temp = head-> next;
//     head->next = head->next->next;
//     delete temp;
//     return head;
// }