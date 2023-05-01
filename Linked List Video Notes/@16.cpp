// Reversal of double linked list

// Node *reverseDLL(Node *head){
//     if(head == NULL || head->next == NULL) return head;
//     Node *prev = NULL;
//     Node *curr = head;
//     While(curr != NULL){
//         prev = curr->prev;
//         curr -> prev = curr->next;
//         curr->next = prev;
//         curr = curr->prev;
//     }
//     return prev->prev;
// }