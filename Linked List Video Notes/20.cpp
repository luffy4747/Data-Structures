// Insertion at beginning in circular LL

// Node* insertBegin(Node* head, int x){
//     Node* temp = new Node(x);
//     if(head == NULL){
//         temp->next = temp;
//         return temp;
//     }else{
//     temp->next = head->next;
//     head->next = temp;
//     int t = head->data;
//     head->data = temp->data;
//     temp->data = t;
//     return head;
//     }
// }