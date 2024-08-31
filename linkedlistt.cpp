#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    // Insert a new node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        newNode->prev = nullptr;

        if (head != nullptr) {
            head->prev = newNode;
        }

        head = newNode;
    }

    // Insert a new node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            newNode->prev = nullptr;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Insert a new node after a specific node
    void insertAfter(Node* prevNode, int value) {
        if (prevNode == nullptr) {
            cout << "The given previous node cannot be NULL\n";
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = prevNode->next;
        prevNode->next = newNode;
        newNode->prev = prevNode;

        if (newNode->next != nullptr) {
            newNode->next->prev = newNode;
        }
    }

    // Delete a node
    void deleteNode(Node* delNode) {
        if (head == nullptr || delNode == nullptr) {
            return;
        }

        if (head == delNode) {
            head = delNode->next;
        }

        if (delNode->next != nullptr) {
            delNode->next->prev = delNode->prev;
        }

        if (delNode->prev != nullptr) {
            delNode->prev->next = delNode->next;
        }

        delete delNode;
    }

    // Display the list
    void display() const {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Find a node with a given value
    Node* findNode(int value) const {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == value) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtEnd(30);
    dll.insertAtEnd(40);

    cout << "Doubly Linked List after insertion: ";
    dll.display();

    Node* node = dll.findNode(20);
    dll.insertAfter(node, 25);

    cout << "Doubly Linked List after inserting 25 after 20: ";
    dll.display();

    node = dll.findNode(30);
    dll.deleteNode(node);

    cout << "Doubly Linked List after deleting 30: ";
    dll.display();

    return 0;
}
