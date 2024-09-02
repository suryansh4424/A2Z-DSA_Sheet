#include<bits/stdc++.h>
bool isPalindrome(Node *head){
    Node* temp = head;
    stack<int> st;

    while(temp != NULL){
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        if(temp->data != st.top()){
            return false;
        }
        else{
            temp = temp->next;
            st.pop();
        }
    }
    return true;
}
