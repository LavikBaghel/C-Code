#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev = NULL;
    Node* next = NULL;

    Node(){
        this->data = 0;
        this->prev =  NULL;
        this->next =  NULL;
    }

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

Node* reverse(Node* &prev, Node* &curr){
    if(curr == NULL){
        return prev;
    }
    Node* forward = curr->next;
    curr->next = prev;

    reverse(curr, forward);
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
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;
    fifth->next = NULL;

    Node* head = first;
    Node* tail = fifth;
    cout<<"Before reverse"<<endl;
    print(head);
    cout<<endl;

    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev, curr);

    cout<<"After reverse"<<endl;
    print(head);
}