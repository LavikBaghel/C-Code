#include<iostream>
#include<stack>
using namespace std;

// void insertAtBottom(stack<int> &st, int target, int totalSize){
//    if(st.empty()){
//     st.push(target);
//     return;
//    }
//    int temp = st.top();
//    st.pop();
//    //recursive call
//    insertAtBottom(st, target, totalSize);

//    //backtracking
//    st.push(temp);
   
// }

void reverseStack(stack<int> &st, int totalSize){
  if(st.empty()){
    return;
  }
  int temp = st.top();
  cout<<temp<<" ";
  st.pop();
  //recursive call
  reverseStack(st, totalSize);
}

int main(){
    stack<int> st;
    st.push(5);
    st.push(15);
    st.push(27);
    st.push(32);
    st.push(11);

    // int target = st.top();
    // st.pop();
    int totalSize = st.size();

    // insertAtBottom(st, target, totalSize);
    reverseStack(st, totalSize);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

}