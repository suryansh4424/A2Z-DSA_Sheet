Node* reverse(Node* head){
    if(head == NULL || head->next == NULL) return head;
    Node* newhead = reverse(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;

}

bool isPalindrome(Node *head) {
    if(head == NULL || head->next == NULL) return head;
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* newhead = reverse(slow->next);
    Node* first = head;
    Node* second = newhead;

    while(second != NULL){
        if(first->data != second->data){
            reverse(newhead);
            return false;
        }
        first= first->next;
        second= second->next;
    }
    reverse(newhead);
    return true;
}
