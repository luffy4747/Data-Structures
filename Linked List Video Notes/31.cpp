// Reverse a link list in group of size k

// Recursive
//  Node* revK(Node* head, int k){
//    Node *curr = head, *prev = NULL, *next = NULL;
//    int count = 0;
//    while(curr != NULL && count < k){
//       next = curr->next;
//       curr->next = prev;
//       prev = curr;
//       curr = next;
//       count++;
//    }
//    if(next != NULL){
//       Node *rest_head = revK(next, k);
//       head->next = rest_head;
//    }
//    return prev;
//  }


// Iterative
// Node *revK(Node *head, int k){
//    Node *curr = head, *prevFirst = NULL;
//    bool isFirstPass = true;
//    while(curr != NULL){
//       Node *first = curr, *prev = NULL;
//       int count = 0;
//       while(curr != NULL && count < k){
//          Node *next = curr ->next;
//          curr->next = prev;
//          prev = curr;
//          curr = next;
//          count++;
//       }
//       if(isFirstPass){
//          head = prev;
//          isFirstPass = false;
//       }else{
//          prevFirst->next = prev;
//       }
//       prevFirst = first;
//    }
//    return head;
// } 