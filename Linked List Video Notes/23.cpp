// Delete kth node

// Node *delK(Node *head, int k){
//     if(head == NULL)
//         return head;
//     if(k == 1){
//         return deleteHead(head);
//     }
//     Node* curr = head;
//     for (int i = 0; i < k - 2; i++){
//         curr = curr->next;
//     }
//     Node* temp = curr->next;
//     curr->next = curr->next->next;
//     delete temp;
//     return head;
// }