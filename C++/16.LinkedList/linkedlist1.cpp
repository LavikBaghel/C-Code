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
        cout<<"Node Deleted sucessfully which value"<<this->data<<endl;
    }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    //Note: first we have to check that head node is empty or not befor insertion
    if(head == NULL){
        Node* newNode = new Node(data);

        head = newNode;
        tail = newNode;
        return;
    }


    //Step 1: Create a node first
    Node* newNode = new Node(data);

    //Step2: put the data to next node
    newNode->next = head;

    //Step3: Now make the current node to head node
    head = newNode;

}

void insertAtTail(Node* &head, Node* &tail, int data){
    //Note: first we have to check that there is any node empty befor insertion.
    if(head == NULL){
        Node* newNode = new Node(data);
        newNode = head;
        newNode = tail;
        return;
    }
    //Step1: To insert at tail firstly we have to create a node first
    Node* newNode = new Node(data);

    //Step2: Now link the tail node to new node
    tail->next = newNode;
    //Step3: Now make the last newNode to tailNode
    tail = newNode;
}

int findLength(Node* &head, Node* &tail){
    int i = 0;
    Node* temp = head;
    while(temp != NULL){
      temp = temp->next;
      i++;
    }
    cout<<"length of LL is:"<<i<<endl;
    return i;

}

void insertAtPosition(int position, int data, Node* &head, Node* &tail){
    //check LL is empty or not
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    //if the position is 1 that's mean user want to insert at very first of linked list so we can use our insertAtHead program
    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }
    //if the position is very last of linked list then we use our insertAtTail program but for that we hve to find the length of LinkedList
    int len = findLength(head,tail);
    if(position >= len){
        insertAtTail(head, tail, data);
        return;
    }
    //find the previous and current position
    int i = 1;
    Node* prev = head;
    while(i<position){
        prev = prev->next; // we get previous position 
        i++;
    }
    Node* curr = prev->next; //we get current position

    //Now create a new node
    Node* newNode = new Node(data);
    //connecting the newnode to current node first
    newNode->next = curr;
    //then connection previous node to new node
    prev->next = newNode;
}

void deleteNodeAtHeadAndTail(int position, Node* &head, Node* &tail){
    if(head == NULL){
      cout<<"Linked List is empty, deetion not be done"<<endl;
      return;
    }
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    int len = findLength(head, tail);
    if(position == len){
        //find prev
        int i = 1;
        Node* prev = head;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        //step 2
       prev->next = NULL;
       Node* temp = tail;
       tail = prev;
       delete temp;
       return;
    }
}

void print(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){

    //Noob way to create nodes
    // Node* first = new Node(23);
    // Node* second = new Node(34);
    // Node* third = new Node(45);
    // Node* fourth = new Node(56);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;

    //Pro way to create node
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtTail(head,tail,23);
    insertAtHead(head, tail, 5);
    insertAtTail(head,tail,35);
    insertAtPosition(5,33,head,tail);

    cout<<"Printing Linked List"<<endl;
    print(head);
    deleteNodeAtHeadAndTail(1,head,tail);

    return 0;
}