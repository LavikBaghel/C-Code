#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node* printKNodeFromEnd(Node* &head, int k){
    Node* temp = reverse(head);

    int i = 0;
    while(i<k){
        temp = temp->next;
        i++;
    }
    cout<<temp->data;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
  Node* first = new Node(1);
   Node* second = new Node(2);
    Node* third = new Node(3);
     Node* four = new Node(4);

     first->next = second;
     second->next = third;
     third->next = four;
    
     Node* head = first;
     int k = 3;
     print(head);
     printKNodeFromEnd(head, k);
    
}