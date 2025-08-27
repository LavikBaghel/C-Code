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

Node* reverse(Node* &prev, Node* &curr){
  if(curr == NULL){
    return prev;
  }
  Node* next = curr->next;
  curr->next = prev;
  reverse(curr, next);
}

void insertAtTail(Node* &head, Node* &tail, int data){
  if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;
  }
  Node* newNode = new Node(data);
  tail->next  = newNode;
  newNode->prev = tail;
  tail = newNode;
}

void findMiddle(Node* &head, Node* &tail){
    Node* temp = head;
    int count=1;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    count = count/2;
    Node* temp1 = head;
    int i = 1;
    while(i != count){
        temp1 = temp1->next;
        i++;
    }
    cout<< temp1->data;
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

    Node* head = first;
    Node* tail = fifth;
    cout<<"Befor Reverse"<<endl;
    insertAtTail(head, tail, 60);
    // insertAtTail(head, tail, 70);
    // insertAtTail(head, tail, 80);
    print(head);
    findMiddle(head, tail);
    
    cout<<endl;

    Node* prev = NULL;
    Node* curr = head;

    cout<<"After Reverse"<<endl;
    head = reverse(prev, curr);
    print(head);
    cout<<endl;

   return 0;
}