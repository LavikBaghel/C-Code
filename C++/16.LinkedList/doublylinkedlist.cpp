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

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    Node* newNode = new Node(data);
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;
    prev->next = newNode;
    newNode->prev = prev;

    newNode->next = curr;
    curr->prev = newNode;

}

void deleteAtHead(Node* &head, Node* &tail){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return;
    }
    Node* temp = head;
    head = temp->next;
    head->prev = NULL;
    delete temp;
}

void deleteAtTail(Node* &head, Node* &tail){
    Node* temp = tail;
    tail = temp->prev;
    tail->next = NULL;
    delete temp;
}

void deleteAtPosition(Node* &head, Node* &tail, int position){
    if(position == 0){
        deleteAtHead(head, tail);
        return;
    }
    // int len = 0;
    // while(len < NULL){
    //     len++;
    // }
   

    Node* temp = head;
    int i = 1;
    while(i<=position){
        temp = temp->next;
        i++;
    }

    Node* prev = temp->prev;
    Node* curr = temp->next;

    prev->next = curr;
    curr->prev = prev;
    delete temp;
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

   first->next = second;
   second->prev = first;

   second->next =  third;
   third->prev = second;


    Node* head = first;
    Node* tail = third;

//    print(first);

   insertAtHead(head, tail, 1);
   insertAtTail(head, tail, 50);
   insertAtPosition(head, tail, 4, 80);

//    deleteAtHead(head, tail);
//    deleteAtTail(head, tail);
   deleteAtPosition(head, tail, 4);

   
   print(head);

    return 0;
}