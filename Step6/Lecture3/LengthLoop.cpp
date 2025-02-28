#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*back;

    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }

};
Node*AtoL(vector<int>&arr){
    Node*head=new Node(arr[0]);
    Node*prev=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;

}
void print(Node*head){
    while(head!=NULL){
        cout<<head->data<< " ";
        head=head->next;
    }
}

int findLength(Node*slow,Node*fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}
int Loop(Node*head){
    Node*slow=head;
    Node*fast=head;
    
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findLength(slow,fast);
    }
    }
    return 0;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    Node* head = AtoL(arr);

    print(head);

    // Creating a loop for testing
    head->next->next->next->next->next = head->next->next; // 5->3 loop

    int loopLength = Loop(head);
    if (loopLength > 0)
        cout << "Loop detected of length: " << loopLength << endl;
    else
        cout << "No loop detected" << endl;

    return 0;
}
