// Insertion in circular doubly Linked list

// Node* cLL(Node* head, int x){
//     Node *temp = new Node(x);
//     if(head == NULL){
//         temp->next = temp;
//         temp->prev = temp;
//         return temp;
//     }
//     temp->prev = head->prev;
//     temp->next = head;
//     head->prev->next = temp;
//     head->prev= temp;
//     return temp;
// }