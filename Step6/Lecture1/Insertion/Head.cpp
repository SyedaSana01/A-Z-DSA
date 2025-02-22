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
    
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    
    return head;
}

// Function to print linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;  // **Move to the next node**
    }
    cout << endl;
}

// Function to insert new node at head
Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}

int main() {
    vector<int> arr = {12, 14, 15, 6};
    Node* head = AtoL(arr);
    head = insertHead(head, 15);
    
    print(head);  // Printing the linked list

    return 0;
}
