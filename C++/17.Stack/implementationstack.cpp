#include<iostream>
using namespace std;

class Stack{
    public:
    int* arr;
    int top;
    int size;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    void push(int data){
       if(size-top > 1){
          //space is available
          top++;
          arr[top] = data;
       }
       else{
           //space is not available
           cout<<"Stack Overflow"<<endl;
       }
    }

    void pop(){
        if(top == -1){
            //stack is empty
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }
    int getTop(){
        if(top == -1){
            cout<<"Stack is Empty"<<endl;
        }
        else{
            return arr[top];
        }
    }
    int getSize(){
        if(top==-1){
            cout<<"-1"<<endl;
        }
        else{
            return top+1;
        }
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){

    Stack s(10);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

     cout<<s.getTop()<<endl;
    cout<<"Size of stack is: "<<s.getSize()<<endl;
    cout<<"Is stack empty: "<<s.isEmpty()<<endl;
    cout<<"Top Element of stack is: "<<s.getTop()<<endl;

    while(!s.isEmpty()){
        cout<<s.getTop()<<" ";
        s.pop();
    }
    
    
}