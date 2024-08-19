#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deletingHead(Node* head){
  if(head == NULL) return head;
  Node* temp = head;
  head = head->next;
  free(temp);
  return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convertLL(arr);
    head = deletinghead(head);
    printLL(head);

    return 0;
}
