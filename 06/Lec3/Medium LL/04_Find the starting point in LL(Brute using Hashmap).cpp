#include <bits/stdc++.h>
Node *firstNode(Node *head){
    Node* temp = head;
    unordered_map<Node*, int> mpp;

    while(temp != NULL){
        if (mpp.find(temp) != mpp.end()) {
            return temp;
        }
        mpp[temp] = 1;

        temp = temp->next;
    }
    return nullptr;
}
