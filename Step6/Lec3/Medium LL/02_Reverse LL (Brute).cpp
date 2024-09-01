#include <bits/stdc++.h>
Node* reverseLinkedList(Node *head){
    stack<int> st;
    Node* temp = head;

    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}
