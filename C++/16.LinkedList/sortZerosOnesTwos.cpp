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

//Approach 1
void sortZerosOnesTwos(Node* &head){
    if(head == NULL){
        cout<<"Empty";
        return;
    }
    int countZeros = 0;
    int countOnes = 0;
    int CountTwos = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp-> data == 0){
          countZeros++;
        }
        if(temp-> data == 1){
          countOnes++;
        }
        if(temp-> data == 2){
          CountTwos++;
        }
        temp = temp->next;
    }
    Node* temp1 = head;
    while(temp1 != NULL){
        while(countZeros > 0){
            temp1->data = 0;
            temp1 = temp1->next;
            countZeros--;
        }
        while(countOnes > 0){
            temp1->data = 1;
            temp1 = temp1->next;
            countOnes--;
        }
        while(CountTwos > 0){
            temp1->data = 2;
            temp1 = temp1->next;
            CountTwos--;
        }
    }
}

//Approach 2
Node* sort(Node* &head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    while(curr != NULL){
        if(curr->data == 0){
           Node* temp = curr;
           curr = curr->next;
           temp->next = NULL;
           //take this zero node and add to zerohead ll
           zeroTail->next = temp;
           zeroTail = temp;

        }
        else if(curr->data == 1){
           Node* temp = curr;
           curr = curr->next;
           temp->next = NULL;
           //take this one node and add to onetail ll
           oneTail->next = temp;
           oneTail = temp;
        }
        else if(curr->data == 2){
           Node* temp = curr;
           curr = curr->next;
           temp->next = NULL;
           //take this two node and add to twotail ll
           twoTail->next = temp;
           twoTail = temp;
        }
    }
 
    //modify one ll
    Node* temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

   //modify two ll
   temp = twoHead;
   twoHead = twoHead->next;
   temp->next = NULL;
   delete temp;

   //join all the list
   if(oneHead != NULL){
    //if we're there then onelist is not empty
    zeroTail->next = oneHead;
    if(twoHead != NULL){
        oneTail->next = twoHead;
    }
}
    else{
        if(twoHead != NULL){
         zeroTail->next = twoHead;
        }
   }
   //remove zeroHead dummy node
   temp = zeroHead;
   zeroHead = zeroHead->next;
   temp->next = NULL;
   delete temp;

   //return head of the modified linked list
   return zeroHead;
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
    Node* first = new Node(2);
    Node* second = new Node(0);
    Node* third = new Node(1);
    Node* fourth = new Node(1);
    Node* fifth = new Node(0);
    Node* sixth = new Node(2);
    Node* seventh = new Node(0);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    Node* head = first;
    print(head);
    
    //Approach 1
    // sortZerosOnesTwos(head);
    // print(head);

    head = sort(head);
    print(head);
    
}