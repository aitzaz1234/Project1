#include "stack.h"

#include <iostream>

Stack::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

void Stack::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = top;
    top = newNode;
}

void Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack Underflow" << std::endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp;
}

int Stack::peek() const {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return -1; // or throw an exception
    }
    return top->data;
}

bool Stack::isEmpty() const {
    return top == nullptr;
}

void Stack::printStack() const {
    Node* temp = top;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
