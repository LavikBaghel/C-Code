#include<iostream>
#include<string>
using namespace std;

string removeSubstringOcurrence(string input, string part){
    int pos =input.find(part);
    while(pos != string::npos){
        input.erase(pos, part.length());
        pos = input.find(part);
    }
    return input;
}

int main(){

   string input = "daabcbaabcbc";
   string part = "abc";

  cout<<removeSubstringOcurrence(input, part);

    return 0;
}