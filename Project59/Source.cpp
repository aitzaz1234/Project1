#include "stack.h"
#include<iostream>
using namespace std;

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.printStack();  // Output: 30 20 10

    cout << "Top element is " << stack.peek() << std::endl;  // Output: Top element is 30

    stack.pop();
    stack.printStack();  // Output: 20 10

    return 0;
}
