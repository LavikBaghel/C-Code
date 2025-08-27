#include<iostream>
using namespace std;

bool checkPalindrome(string& str, int i, int j){
    if(i >= j) return true;

    if(str[i] != str[j]){
         return false;
    }
    return checkPalindrome(str, i+1, j-1);
    // else{
    //     return false;
    // }
}

int main(){

   string str = "raincar";
   int i = 0;
   int j = str.size() - 1;

   if(checkPalindrome(str,i,j)){
    cout<<"Yes! it is palindrome";
   }
   else{
    cout<<"No,it's not a palindrome string";
   }

    return 0;
}