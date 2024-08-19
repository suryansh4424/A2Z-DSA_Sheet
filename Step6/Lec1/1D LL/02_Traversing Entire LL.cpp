class Node {
    public:
        int data;         // Data stored in the node
        Node* next;       // Pointer to the next node in the linked list
        // Constructors
        Node(int data1, Node* next1) {
            data = data1;
            next = next1;
        }
        // Constructor
        Node(int data1) {
            data = data1;
            next = nullptr;
        }
};

