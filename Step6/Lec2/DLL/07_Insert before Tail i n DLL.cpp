  #include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    
    public:
    Node(int data1,Node* next1, Node* back1){
        data = data1;
        next = next1;
        back= back1;
    }
    
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* constructDLL(vector<int> &arr){
    if(arr.empty()) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* prev = head;
    
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printLL(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
}

Node* insertHead(Node* head, int val){
    Node* temp = new Node(val);
    temp->back = nullptr;
    temp->next = head;
    head->back = temp;
    return temp;
}

Node* insertTail(Node* head, int val){
    if(head->next == NULL){
        return insertHead(head, val);
    }
    Node* tail = new Node(val);
    Node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    Node* prev = temp->next;
    temp->next = tail;
    tail->next = prev;
    tail->back = temp;
    prev->back = tail;
    return head;
}

int main(){
    vector<int> arr = {12, 5, 8, 7};
    Node* head = constructDLL(arr);
    head = insertTail(head,2);
    printLL(head);
    return 0;
}
