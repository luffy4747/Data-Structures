// Reversal of Linked List

// Node *reverse(Node* head){
//     Node *curr = head;
//     Node *prev = NULL;
//     while(curr != NULL){
//         Node *next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//     }
//     return prev;
// }