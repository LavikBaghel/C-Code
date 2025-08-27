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

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    head->next = newNode;
    newNode = head;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}

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

bool isPalindrome(Node* &head){
    if(head == NULL){
        //LL is empty
        return false;
    }
    if(head->next == NULL){
        //there is only one node
        return true;
    }
    //step 1 find middle node
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    Node* reverseHead = reverse(slow->next);
   //join the reverse linked list p.s. nOt neceesary if you don't want to add this line then don't
    slow->next = reverseHead;

    Node* temp1 = head;
    Node* temp2 = reverseHead;

    while(temp2 != NULL){
        if(temp1-> data != temp2->data){
            return false;
        }
        else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
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
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 10);

    if(isPalindrome(head)){
        cout<<"Linked List is Pailndrome"<<endl;
    }
    else{
        cout<<"Linked List is not Palindrome"<<endl;
    }

    print(head);
}