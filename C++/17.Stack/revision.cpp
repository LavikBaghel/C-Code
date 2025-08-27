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
      if (top < size - 1){
        top++;
        arr[top] = data;
      }
      else{
        cout<<"You can't insert in staack";
      }
    }

    void pop(){
     if(top == -1){
        cout<<"Stack UnderFlow"<<endl;
     }
     else{
        top--;
     }
    }

    int findSize(){
        if(top == -1){
            return -1;
        }
        else{
            return top+1;
        }
    }

    bool isEmpty(){
        if( top == -1){
            return true;
        }
        else{
            return false;
        }
    }

    int Top(){
       if( top == -1){
            return -1;
        } 
        else{
            return arr[top];
        }
    }
};


int main(){

    Stack st(10);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    while(!st.isEmpty()){
        cout<<st.Top()<<" ";
        st.pop();
    }
    cout<<endl;
    // cout<<st.Top()<<endl;
    cout<<st.isEmpty()<<endl;
    // cout<<st.findSize()<<endl;


    return 0;
}