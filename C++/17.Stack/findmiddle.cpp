#include<iostream>
#include<stack>
using namespace std;

void findMiddle(stack<int> &st, int &totalSize){
    if(st.size() == 0){
        cout<<"Stack is empty"<<endl;
        return;
    }
    //Base class
    if(st.size() == totalSize/2+1){
        cout<<"Middle :"<< st.top()<<endl;
        return;
    }
    //important .thing to keep track of pop element so that we can use temp for push the same element after recursion
    int temp = st.top();
    st.pop();
    //Recursive call
    findMiddle(st, totalSize);

    //Backtracking
    st.push(temp);
}

int main(){
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    
    //Method:1 here we are deleting the elments of stack
    // int half = st.size()/2;

    // while(half != 0){
    //     st.pop();
    //     half--;
    // }
    // cout<<"Middle element is: "<<st.top();

    //Method2: Without deleting the elements of stack
    int totalSize = st.size();

   findMiddle(st, totalSize);


}