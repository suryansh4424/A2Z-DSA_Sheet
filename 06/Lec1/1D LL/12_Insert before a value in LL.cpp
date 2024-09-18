#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* constructLL(vector<int> &arr){
    if(arr.empty()) return nullptr;
    
    Node *head = new Node(arr[0]);
    Node *mover = head;
    
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertVal(Node* head, int val, int k){
    if(head == NULL){
        return NULL;
    }
    if(head->data = k){
        return new Node(val,head);
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == k){
            Node* x = new Node(val,temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = constructLL(arr);
    head = insertVal(head,4,12);
    printLL(head);
    return 0;
}
