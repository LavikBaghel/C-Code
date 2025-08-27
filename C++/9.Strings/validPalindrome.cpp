#include<iostream>
#include<string>
using namespace std;

bool palidrome(string s, int i , int j){
    
     while(i <= j){
        if(s[i] != s[j]) return false;
            i++;
            j--;
        
        
     }
     return true;
     
}

bool validPalindrome(string str){
    int i = 0;
    int j = str.length() - 1;

    while(i<=j){
        
        if(str[i] != str[j]){
            return palidrome(str,i+1,j) || palidrome(str, i, j-1);        
        }
        else{
            i++;
            j--; 
        }

    }
    return true;
}

int main(){

    string s = "abcca";

    cout<<validPalindrome(s);

    return 0;
}
