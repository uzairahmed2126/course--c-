#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Insert a new node at the beginning of the linked list
    void insert(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Delete the first occurrence of a node with the given value
    void remove(int value)
    {
        Node *current = head;
        Node *previous = nullptr;

        while (current != nullptr && current->data != value)
        {
            previous = current;
            current = current->next;
        }

        if (current != nullptr)
        {
            if (previous != nullptr)
            {
                previous->next = current->next;
            }
            else
            {
                head = current->next;
            }
            delete current;
        }
    }

    // Print the linked list
    void display()
    {
        Node *current = head;

        while (current != nullptr)
        {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Search for a node with the given value
    bool search(int value)
    {
        Node *current = head;

        while (current != nullptr)
        {
            if (current->data == value)
            {
                return true;
            }
            current = current->next;
        }

        return false;
    }

    // Reverse the linked list
    void reverse()
    {
        Node *current = head;
        Node *previous = nullptr;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
        }

        head = previous;
    }

    // Destructor to free memory
    ~LinkedList()
    {
        Node *current = head;
        Node *next = nullptr;

        while (current != nullptr)
        {
            next = current->next;
            delete current;
            current = next;
        }
    }
};

int main()
{
    LinkedList list;

    // Insert elements into the linked list
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    // Display the linked list
    std::cout << "Linked List: ";
    list.display();

    // Search for a value in the linked list
    int searchValue = 3;
    std::cout << "Searching for " << searchValue << ": "
              << (list.search(searchValue) ? "Found" : "Not Found") << std::endl;

    // Remove an element from the linked list
    int removeValue = 2;
    list.remove(removeValue);
    std::cout << "After removing " << removeValue << ": ";
    list.display();

    // Reverse the linked list
    list.reverse();
    std::cout << "Reversed Linked List: ";
    list.display();

    return 0;
}
