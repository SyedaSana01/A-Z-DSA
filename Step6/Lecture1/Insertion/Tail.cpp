#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert vector to linked list
Node* AtoL(vector<int>& arr) {
    if (arr.empty()) return nullptr;
    
    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for (int i = 1; i < arr.size(); i++) { // Start from index 1
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to print linked list
void print(Node* head) { // Return type should be void
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl; // Add new line for better readability
}

// Function to insert a node at the tail of linked list
Node* InsertAtTail(Node* head, int val) {
    if (head == nullptr) {
        return new Node(val);
    }
    
    Node* temp = head;
    while (temp->next != nullptr) { // Fix condition
        temp = temp->next;
    }
    
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = AtoL(arr);
    head = InsertAtTail(head, 100);
    print(head);
}
