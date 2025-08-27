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

void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;    
}

Node* reverse(Node* &temp){
    Node* prev = NULL;
    Node* curr = temp;
    Node* forward = curr->next;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        temp = prev;    
    }
  return prev;
}

void sortZeroOneTwo(Node* &head){
   int countZero = 0, countOne = 0, countTwo = 0;
   Node* temp = head;

   while(temp != NULL){
     if(temp->data == 0){
        countZero++;
     }
     if(temp->data == 1){
        countOne++;
     }
     if(temp->data == 2){
        countTwo++;
     }
     temp = temp->next;
   }
   temp = head;

     while(countZero--){
        temp->data = 0;
        temp = temp->next;
     }
     while(countOne--){
        temp->data = 1;
        temp = temp->next;
     }
     while(countTwo--){
        temp->data = 2;
        temp = temp->next;
     }
   


}

void removeDuplicates(Node* &head){
    Node* curr = head;
    

    while(curr != NULL){
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            Node* temp = curr->next;
            curr->next = curr->next->next;

            temp->next = NULL;
            delete temp;
              
        }
        else{
           curr = curr->next;
        }
    }
}

bool checkPalindrome(Node* &head){

    if(head == NULL){
        //LL is empty
        return false;
    }
    if(head->next == NULL){
        //there is only one node
        return true;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }
    Node* temp1 = reverse(slow->next);
    Node* temp2 = head;
    
    while(temp1 != NULL){
        if(temp2->data == temp1->data){
            temp2 = temp2->next;
            temp1 = temp1->next;
        }
        else{
            return false;
        }
    }
    return true;
}



int main(){
    Node* first = new Node(2);
    Node* second = new Node(2);
    Node* third = new Node(1);
    Node* four = new Node(2);
    Node* five = new Node(0);

    first->next = second;
    second->next = third;
    third->next = four;
    four->next = five;

    Node* head = first;
    Node* tail = five;
    
    print(head);
    // cout<<checkPalindrome(head);
    // removeDuplicates(head);

    // sortZeroOneTwo(head);
    
    print(head);

}
