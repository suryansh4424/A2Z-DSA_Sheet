#include <bits/stdc++.h>
Node* reverseDLL(Node* head){
  if(head==NULL || head->next == NULL){
        return head;
    }
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
