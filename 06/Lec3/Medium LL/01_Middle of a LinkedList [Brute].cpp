//TC = O(N+N/2)
Node *findMiddle(Node *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    Node* temp =head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }
    int middle = (cnt/2)+1;
    temp = head;
    while(temp != NULL){
        middle = middle-1;
        if(middle == 0) break;
        temp = temp->next;
    }
    return temp;
}
