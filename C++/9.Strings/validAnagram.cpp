#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool validAnagram(string s,string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

  int i=0;
  int j=0;
  while(i<s.length()){
    if(s != t){
      return false;
      break;
    }
    
    i++;
    j++;
}
return true;
}

int main(){

   string s = "anagram";
   string t = "nagaram";

   int totalofS = 0;
   int totalofT = 0;
   for(int i=0;i<s.length();i++){
      totalofS += s[i]; 
   }
   for(int i=0;i<t.length();i++){
      totalofT += t[i]; 
   }

   if(totalofS == totalofT){
    cout<<"ok";
   }
   else{
    cout<<"Not Ok";
   }
   

//    if(validAnagram(s,t)){
//     cout<<"True";
//    }
//    else{
//     cout<<"False";
//    }

//  for(int i=0;i<s.length();i++){
//     for(int j=0;j<t.length();j++){
//         if(s[i] == t[j]){
//             t.erase(j+1,1);
//             cout<<t<<endl;
//             break;
//         }
//     }
//  }

 
 

    return 0;
}