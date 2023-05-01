// Delete head of a dobly linked list

// Node *delHead(Node *head){
//     if(head==NULL){
//         return NULL;
//     }
//     if(head->next==NULL){
//         delete head;
//         return NULL;
//     }
//     Node *temp = head;
//     head = head->next;
//     head -> prev = NULL;
//     delete temp;
//     return head;
// }


// In c++ it is mportant to deallocate memory so delete is uimportant