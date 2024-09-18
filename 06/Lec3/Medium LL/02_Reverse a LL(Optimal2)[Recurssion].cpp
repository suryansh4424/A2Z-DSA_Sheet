//Recursion Optimal2 TC = O(N), SC = O(N) RECURSICE STACK SPACE
Node *reverseLinkedList(Node *head) {
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newHead = reverseLinkedList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = nullptr;
    return newHead;
}
