// Stack class.
class Stack {
    int Top;
    int Max;
    int size;
    int *arr;
    
public:
    Stack(){
        Top = -1;
        Max = 0;
        size = 1000;
        arr = new int[size];
    }
    
    Stack(int capacity) {
        Top = -1;
        Max = capacity;
        size = Max;
        arr = new int[size];
    }

    void push(int num) {
        if (isFull()) {
            return;
        }
        Top++;
        arr[Top] = num;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        int num =  arr[Top];
        Top--;
        return num;
    }
    
    int top() {
        if (isEmpty()) {
            return -1;
        }
        return arr[Top];
    }
    
    int isEmpty() {
        return Top==-1;
    }
    
    int isFull() {
        return Top == Max - 1;
    }
    
};
