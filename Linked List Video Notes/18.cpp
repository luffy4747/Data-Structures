// Delete last node in DLL

// Node* delDLL(Node* head) {
//     if(head == NULL)
//         return NULL;
//     if(head -> next == NULL)
//         return NULL;
//     Node *curr = head;
//     while(curr -> next != NULL){
//         curr = curr -> next;
//     }
//     curr -> prev -> next = NULL;
//     delete curr;
//     return head;
// }