// Insertion at end of circular LL

// Node *insertEnd(Node *head, int x){
//     Node *temp = new Node(x);
//     if(head == NULL){
//         temp->next = temp;
//         return temp;
//     }else{
//         temp->next = head->next;
//         head->next = temp;

//         int t = head->data;
//         head->data = temp->data;
//         temp->data = t;

//         return temp;
//     }
// }