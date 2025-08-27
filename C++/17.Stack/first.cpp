#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<"Size of stack is : "<<st.size()<<endl;
    if(st.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}