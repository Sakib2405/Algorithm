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
    Node* search(int item) {
        if (start == NULL) {
            cout << "List is empty!\n";
            return NULL;
        }
        Node* temp = start;
        while (temp != NULL) {
            if (temp->data == item) {
                return temp;
            }
            temp = temp->link;
        }
        return NULL;
    }
    Node* searchSorted(int item) {
        if (start == NULL) {
            cout << "List is empty!\n";
            return NULL;
        }
        Node* temp = start;
        while (temp != NULL) {
            if (temp->data == item) {
                return temp;
            } else if (temp->data > item) {
                return NULL;
            }
            temp = temp->link;
        }
        return NULL;
    }
};

int main() {
    LinkedList list;
    list.insertFirst(10);
    list.insertFirst(20);
    list.insertFirst(30);
    list.printAll();
    Node* result = list.search(20);
    if (result != NULL) {
        cout << "Found: " << result->data << endl;
    } else {
        cout << "Not Found" << endl;
    }
    result = list.searchSorted(15);
    if (result != NULL) {
        cout << "Found: " << result->data << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}