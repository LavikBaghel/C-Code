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
    ~Node(){
        cout<<"Node Deleted sucessfully which value "<<this->data<<endl;
    }
};

void removeDuplicateInLinkedList(Node* &head){
    Node* curr = head;

    while(curr != NULL){
        if((curr -> next != NULL) && (curr->data == curr->next->data)){
            Node* temp = curr->next;
            curr->next = curr->next->next;
            //delete node
            temp->next = NULL;
            delete temp;
                      
        }
        else{
            curr = curr->next;   
        }
    }
    
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
    Node* third = new Node(20);
    Node* fourth = new Node(30);
    Node* fifth = new Node(40);
    Node* sixth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    Node* head = first;
    print(head);
    removeDuplicateInLinkedList(head);

    print(head);
}