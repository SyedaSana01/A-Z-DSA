#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// Function to create a Doubly Linked List from a vector
Node* AtoDLL(vector<int>& arr) {
    if (arr.empty()) return nullptr; // Handle empty vector case

    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;  // Move `prev` to the newly created node
    }

    return head;
}

// Function to reverse a Doubly Linked List
Node* reverse(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    Node* temp = nullptr;
    Node* current = head;

    while (current != nullptr) {
        // Swap next and back pointers
        temp = current->back;
        current->back = current->next;
        current->next = temp;

        // Move to the next node in the original order
        head = current;
        current = current->back;
    }

    return head;
}

// Function to print the Doubly Linked List
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function for testing
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    Node* head = AtoDLL(arr);
    cout << "Original DLL: ";
    printList(head);

    head = reverse(head);
    cout << "Reversed DLL: ";
    printList(head);

    return 0;
}
