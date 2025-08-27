#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;

void reverseStack(stack<char> st, string& ans){
    //Base Case
    if(st.empty()){
        return;
    }
    char temp = st.top();
    st.pop();
    //recursive call
    reverseStack(st, ans);
    //Back tracking
    ans += temp;
    st.push(temp);
}

int main(){
    
    string s = "azxxzy";
    string ans = "";
    stack<char> st;
    int i = 0;
    st.push(s[i]);
    i = 1;
    while(i < s.size()){
        
        
        if(st.top() == s[i]){
            st.pop();
            i++;
        }
        else{
        st.push(s[i]); 
        i++;
        }
    }
  
    reverseStack(st, ans);
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    cout<<ans;



    return 0;
}