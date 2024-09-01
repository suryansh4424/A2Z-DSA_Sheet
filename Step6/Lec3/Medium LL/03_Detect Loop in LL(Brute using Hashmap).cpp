#include <bits/stdc++.h>
bool detectCycle(Node *head){
    Node* temp = head;
    unordered_map<Node*, int> mpp;

    while(temp != NULL){
        if (mpp.find(temp) != mpp.end()) {
            return true;
        }
        mpp[temp] = 1;

        temp = temp->next;
    }
    return false;
}
