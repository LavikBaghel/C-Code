#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> s;

    s.push('l');
    s.push('a');
    s.push('v');
    s.push('i');
    s.push('k');

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
}