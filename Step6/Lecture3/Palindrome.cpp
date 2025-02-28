#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1 = nullptr, Node* back1 = nullptr) {
        data = data1;
        next = next1;
        back = back1;
    }
};

// Function to convert an array into a doubly linked list
Node* AtoL(vector<int>& arr) {
    if (arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* prev = head;

    for (size_t i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Function to print the linked list
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to reverse a linked list from a given node
Node* Reverse(Node* head) {
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr) {
        Node* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

// Function to check if a linked list is a palindrome
bool isPalindrome(Node* head) {
    if (!head || !head->next) return true; // A single-node or empty list is a palindrome

    // Step 1: Find the middle of the list using slow and fast pointers
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Reverse the second half of the list
    Node* newHead = Reverse(slow);
    Node* second = newHead;
    Node* first = head;

    // Step 3: Compare the first half with the reversed second half
    bool palindrome = true;
    while (second != nullptr) {
        if (first->data != second->data) {
            palindrome = false;
            break;
        }
        first = first->next;
        second = second->next;
    }

    // Step 4: Restore the original list
    Reverse(newHead);

    return palindrome;
}

// Main function to test the palindrome check
int main() {
    vector<int> arr = {1, 5, 2, 5, 1};
    Node* head = AtoL(arr);

    cout << "Original List: ";
    print(head);

    if (isPalindrome(head)) {
        cout << "Linked List is a Palindrome." << endl;
    } else {
        cout << "Linked List is NOT a Palindrome." << endl;
    }

   

    return 0;
}
