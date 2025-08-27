#include<iostream>
using namespace std;

string removeOcurrence(string& str,string part){
    int found = str.find(part);
    if(found < 0) return str;
     str.erase (found,part.length());

    return removeOcurrence(str,part);

}

int main(){

    string str = "daabcbaabcbc";
    string part = "ab";

    
    cout<<str<<endl;
    removeOcurrence(str,part);
    cout<<str;
  

    return 0;
}