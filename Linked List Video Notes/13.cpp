// Searching data in a linked list

// Iterative
// int searchLL(Node* head, int x){
//     int pos = 1;
//     Node* curr = head;
//     while(curr != NULL){
//         if(curr-> data == x)
//             return pos;
//         else{
//             pos++;
//             curr = curr->next;
//         }
//     }
//     return -1;
// }

// Recursive

// int searchLL(Node* head, int x){
//     if(head == NULL)
//         return -1;
//     if(head-> data == x)
//         return 1;
//     else{
//         int res = searchLL(head->next, x);
//         if(res == -1) return -1;
//         else return (res+1);
//     }
// }