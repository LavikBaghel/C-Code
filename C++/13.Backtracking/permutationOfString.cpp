#include<iostream>
using namespace std;

void permutationOfString(string& str, int i){
    //   Bae case
    if(i >= str.length()) {
        cout<<str<<" ";
        return;
    }

    // swapping
    for(int j = i; j<str.length();j++){
        swap(str[i],str[j]);
        // recursion recall function
        permutationOfString(str,i+1);

        // Backtracking -> for do not let them giving same output again
        swap(str[i], str[j]);
    }
} 


int main(){
    
   string str = "abc";
   int i = 0;
   permutationOfString(str,i); 

    return 0;
}