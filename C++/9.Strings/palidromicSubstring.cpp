#include<iostream>
#include<string>
using namespace std;

int palidromeSubstring(string s){
     
       int n = s.length();
       int i=0;
       int j=0;
       int count=0;
       while(i<n){
         if(s[i] == s[j]){
            i--;
            j++;
            count++;
         }
         else{
            i=j;
            
         }
       }
       return count;

    //  Print all substring of a string
    //   for (int len = 1; len <= n; len++) 
    // {    
    //     // Pick ending point
    //     for (int i = 0; i <= n - len; i++) 
    //     {
    //         //  Print characters from current
    //         // starting point to current ending
    //         // point.  
    //         int j = i + len - 1;            
    //         for (int k = i; k <= j; k++) 
    //             cout << s[k];
             
    //         cout << endl;
    //     }
    // } 
}

int main(){

    string s = "aaa";
    cout<<palidromeSubstring(s);

    return 0;
}