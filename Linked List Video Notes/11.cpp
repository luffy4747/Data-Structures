// Delete last node of linked list

// Node* delTail(Node *head){
//     if(head == NULL)
//         return NULL;
//     if(head->next == NULL){
//         delete head;
//         return NULL;
//     }
//     Node *temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }
//     delete temp->next;
//     temp->next = NULL;
//     return head;
// }


// In this there are two corner case when there is no node and when there is only one node
// SO both cases are handled implicitly