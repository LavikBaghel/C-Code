#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
       stack<char> st;

       for(int i=0;i<s.length();i++){
         char ch = s[i];

         //Opening bracket
         if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
         }
         else{
            //closing bracket
            if(st.empty()){
                return false;
            }
            char topElement = st.top();
            if(ch == ')' && topElement == '('){
                st.pop();
            }
            else if(ch == '}' && topElement == '{'){
                st.pop();
            }
            else if(ch == ']' && topElement == '['){
                st.pop();
            }
            else{
                return false;
            }
            
         }
       }

       if(st.empty()){
        return true;
       }
       else{
        return false;
       }
    }
};

int main(){
    Solution s;

    cout<<s.isValid("({}){}{}");

}