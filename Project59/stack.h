#pragma once

class Node {
public:
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class Stack {
private:
    Node* top;
public:
    Stack() : top(nullptr) {}
    ~Stack();
    void push(int value);
    void pop();
    int peek() const;
    bool isEmpty() const;
    void printStack() const;
};
