#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void findMiddle(Node* &head, Node* &tail){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    int i = 1;
    Node* temp1 = head;
    while(i < count/2){
      temp1 = temp1->next;
      i++;
    }

    if(count%2 == 0){

        cout<<temp1->data;
    }
    else{
        cout<<temp1->next->data;
    }
}

void findMiddleBySlowAndFastAlgo(Node* &head, Node* &tail){
    if(head == NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    if(head->next == NULL){
        cout<<head->data;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    cout<<slow->data;
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
   Node* sixth = new Node(60);

    first->next = second;
    second->prev = first;

    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    // fifth->next = sixth;
    // sixth->prev = fifth;

    Node* head = first;
    Node* tail = fifth;

    print(head);
    // cout<<"Middle of the linked list is : ";
    // findMiddle(head, tail);

    findMiddleBySlowAndFastAlgo(head, tail);


    return 0;
}