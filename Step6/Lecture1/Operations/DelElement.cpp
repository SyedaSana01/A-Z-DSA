#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int data1,Node* next1){
        data=data1;
        next=next1;

    }
    Node (int data1){
        data=data1;
        next=nullptr;
    }
    
};
Node* AtoL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
Node*print(Node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return head;
}
Node* DeleteK(Node*head,int el){
    if(head==NULL)return head;
    if(head->data==el){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;

    }
  
    Node* temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
  
   
    if(temp->data==el){
    prev->next=prev->next->next;
    delete(temp);
    break;
   }

   prev=temp;
   temp=temp->next;
}
return head;
}


int main(){
    vector<int>arr={12,5 ,8 ,7};
    Node* head=AtoL(arr);
    head=DeleteK(head,12);
    print(head);
}