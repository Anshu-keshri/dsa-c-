#include<iostream>
using namespace std;

const int MAX_SIZE = 10;
int q[MAX_SIZE];
int start = 0;
int rear = 0;
int current_size = 0;

void push(int val) {
    if (current_size >= MAX_SIZE) {
        cout << "Queue is full\n";
        return;
    }
    q[rear] = val;
    rear = (rear + 1) % MAX_SIZE;
    current_size++;
}

void pop() {
    if (current_size == 0) {
        cout << "Queue is empty\n";
        return;
    }
    start = (start + 1) % MAX_SIZE;
    current_size--;
}

int Size() {
    return current_size;
}

void display() {
    if (current_size == 0) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue: ";
    for (int i = 0; i < current_size; i++) {
        int index = (start + i) % MAX_SIZE;
        cout << q[index] << " ";
    }
    cout << "\n";
}

int main() {
    push(2);
    push(8);
    push(7);
    pop();         // removes 2
    display();     // prints: 8 7
}
