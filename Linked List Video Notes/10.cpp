// Delete first node

// Node* delHead(Node *head){
//     if(head == NULL)
//         return NULL;
//     Node* temp = head->next;
//     delete head;
//     return temp;
// }

// In c++ memory deallocation is important factor to notice so that's why a new temp pointer
// is created and next value is stored in it.