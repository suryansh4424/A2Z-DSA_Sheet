//using Traversal
int length(Node *head){
    int cnt;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
