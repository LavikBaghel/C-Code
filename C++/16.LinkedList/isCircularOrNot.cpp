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

//T.C - O(n) //worst algo for me instead this i wll use slow fast approach
bool isCircular(Node* &head){
    Node* temp = head;

    
    while(temp && temp->next != head){
        temp = temp->next;

        if(temp->next == head){
        return true;
    }
       if(temp->next == NULL){
        return false;
       }
    }
    return false;
}

bool isCircularBySlowAndFast(Node* &head){
    if(head == NULL){
        cout<<"Linked List is empty";
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            return true;
        }
    }
    return false;
}

void print(Node* head){
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
    Node* sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = first;

    Node* head = first;
    // print(head);

    // cout<<isCircular(head);

    cout<<isCircularBySlowAndFast(head);
}