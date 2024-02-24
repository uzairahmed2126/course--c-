#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> items;

public:
    void push(int item) {
        items.push_back(item);
    }

    int pop() {
        if (!is_empty()) {
            int item = items.back();
            items.pop_back();
            return item;
        } else {
            throw std::runtime_error("pop from empty stack");
        }
    }

    bool is_empty() {
        return items.empty();
    }

    int peek() {
        if (!is_empty()) {
            return items.back();
        } else {
            throw std::runtime_error("peek from empty stack");
        }
    }

    size_t size() {
        return items.size();
    }
};

int main() {
    Stack stack;

    // Push elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);

    // Print the stack size
    std::cout << "Stack size: " << stack.size() << std::endl;

    // Pop elements from the stack and print them
    while (!stack.is_empty()) {
        std::cout << "Popping: " << stack.pop() << std::endl;
    }

    // Check if the stack is empty
    if (stack.is_empty()) {
        std::cout << "Stack is empty" << std::endl;
    }

    return 0;
}
