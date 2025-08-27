#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isVowel(char ch){
     ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; 
}

int main(){

    string s = "leetcode";
    

    int l=0;
    int h = s.size()-1;

    while(l < h){
      if(isVowel(s[l]) && isVowel(s[h])){
        swap(s[l], s[h]);
        l++;
        h--;
      }
      else if(isVowel(s[l]) == 0){
        l++;
      }
      else{
        h--;
      }
    }
    cout<<s;

    

    return 0;
}