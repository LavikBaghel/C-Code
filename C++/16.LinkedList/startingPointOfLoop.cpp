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

Node* startingPointOfLoop(Node* &head){
    if(head == NULL){
        return head;
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
        slow = head;
        break;
       }
    }
    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

void removeLoop(Node* &head){
    if(head == NULL){
        cout<<"Empty";
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
       if(slow == fast){
        slow = head;
        break;
       }
    }
    Node* prev = fast;
    while(slow != fast){
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    // return slow;
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
    Node* seventh = new Node(70);
    Node* eigth = new Node(80);
    Node* ninth = new Node(90);
    Node* tenth = new Node(100);
    Node* eleventh = new Node(110);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eigth;
    eigth->next = ninth;
    ninth->next = tenth;
    tenth->next = eleventh;
    eleventh->next = sixth;

    Node* head = first;

    // head = startingPointOfLoop(head);
    // cout<<head->data;
    removeLoop(head);
    print(head);


    return 0;

}    