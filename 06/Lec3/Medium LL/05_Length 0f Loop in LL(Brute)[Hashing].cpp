#include<bits/stdc++.h>
int lengthOfLoop(Node *head) {
    Node* temp = head;
    unordered_map<Node*, int> mpp;

    int timer = 0;
    while(temp != NULL){
        if(mpp.find(temp) != mpp.end()){
            int len = timer - mpp[temp];
            return len;
        }
        mpp[temp] = timer;
        temp = temp->next;
        timer++;
    }
    return 0;
}
