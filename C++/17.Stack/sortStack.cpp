#include<iostream>
#include<stack>
using namespace std;

void insertSorted(stack<int> &s, int target){
  //Base case
  if(s.empty()){
    s.push(target);
    return;
  }
  if(s.top() >= target){
    s.push(target);
    return;
  }

  int topElement = s.top();
  s.pop();
  insertSorted(s, target);

  //Back Tracking
  s.push(topElement);
}

void sortStack(stack<int> &s){
    //Base Case
    if(s.empty()){
        return;
    }

    int topElement = s.top();
    s.pop();
    sortStack(s);

    insertSorted(s, topElement);
}

int main(){
    stack<int> st;
    st.push(7);
    st.push(11);
    st.push(3);
    st.push(5);
    st.push(9);

    sortStack(st);

    cout<<"Printing"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;



    return 0;
}