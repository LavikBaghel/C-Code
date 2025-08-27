#include<iostream>
using namespace std;

string reverseUsingRC(string& str,int i,int j){
    if(i == j) return str;

    swap(str[i],str[j]);
    
    reverseUsingRC(str, i+1,j-1);
}

int main(){

   string str = "absccde";
   int i = 0;
   int j = str.size()-1;

   reverseUsingRC(str,i,j);

   cout<<str;

    return 0;
}