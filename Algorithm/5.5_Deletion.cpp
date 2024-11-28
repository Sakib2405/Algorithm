#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* link;
    Node(int data) {
        this->data = data;
        link = NULL;
    }
};

class LinkedList {
private:
    Node* start;
public:
    LinkedList() {
        start = NULL;
    }
    void insertFirst(int data) {
        Node* new_node = new Node(data);
        new_node->link = start;
        start = new_node;
    }
    void insertLast(int data) {
        if (start == NULL) {
            insertFirst(data);
            return;
        }
        Node* temp = start;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        Node* new_node = new Node(data);
        temp->link = new_node;
    }
    void printAll() {
        if (start == NULL) {
            cout << "List is empty!\n";
            return;
        }
        Node* temp = start;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertFirst(10);
    list.insertLast(20);
    list.insertLast(30);
    list.printAll();
    return 0;
}