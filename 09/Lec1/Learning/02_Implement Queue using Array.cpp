#include <iostream>
using namespace std;

class Queue {
    int start;
    int end;
    int curr_size;
    int max_size;
    int* arr;

public:
    Queue() {
        max_size = 16;
        arr = new int[max_size];
        start = -1;
        end = -1;
        curr_size = 0;
    }

    Queue(int max_size) {
        this->max_size = max_size;
        arr = new int[max_size];
        start = -1;
        end = -1;
        curr_size = 0;
    }

    void push(int num) {
        if (curr_size == max_size) {
            exit(1);
        }
        if (end == -1) {
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % max_size;
        }
        arr[end] = num;
        curr_size++;
    }

    int pop() {
        if (start == -1) {
            exit(1);
        }
        int popped = arr[start];
        if (curr_size == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % max_size;
        }
        curr_size--;
        return popped;
    }

    int top() {
        if (start == -1) {
            exit(1);
        }
        return arr[start];
    }
    
    int size() {
        return curr_size;
    }
};
