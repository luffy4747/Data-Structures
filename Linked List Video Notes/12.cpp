// Insert at position

// Node insertPos(Node* head,int pos,int data){
//     Node *nn = new Node(data);
//     if(pos == 1){
//         nn -> next = head;
//         return nn;
//     }
//     Node *temp = head;
//     for (int i = 1; i <= pos-2 && temp!=NULL; i++){
//         temp = temp->next;
//     }
//     if(temp == NULL){
//         return head;
//     }
//     nn -> next = temp->next;
//     temp->next = nn;
//     return head;
// }

// In this there are some corner cases that are when pos == 1 then it is insert at first so it will handled implicitly.
// And loop is maintained like that it stops at perfect position without segmentation fault
// And other case handled is that if pos entered is greater than list length then it should return head