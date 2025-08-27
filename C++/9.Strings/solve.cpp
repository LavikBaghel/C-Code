#include<iostream>
#include<string>
using namespace std;

int main(){

   string str = "abbaca";
   string str2;
   
   for(int i=0;i<str.length();i++){
 
             if(str[i] == str2[str2.length()-1]){
                str2.pop_back();
             }
             else{
                str2.push_back(str[i]);
             }
        
   }
   cout<<str2;


    return 0;
}