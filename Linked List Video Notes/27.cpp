// Nth Node from end of LL

// void printNthNode(Node* head, int n){
//     if(head == NULL)
//         return;
//     Node *first = head;
//     for (int i = 0; i < n; i++){
//         if(first == NULL)
//             return;
//         first = first->next;
//     }
//     Node *second = head;
//     while(first != NULL){
//         first = first->next;
//         second = second->next;
//     }
//     cout << second->data;
// }



// two pointer first and second
// move first n positions ahead
// then move both one step at a time until first becomes null
// start second from head only.