#include<iostream>
#include<limits.h>
using namespace std;

int lastOccurrence(string str,char find,int i){
    // Base case
    if(i == -1){
        return -1;
    }

    if(str[i] == find){
        cout<<i;
        return 0;
    }
    
    lastOccurrence(str,find,i-1);
}

int main(){
    
    string str = "abcddedf";
    char find = 'd';
    int i = str.size() - 1;
    
    cout<<"Input element last occurrence is at index no. ";
    lastOccurrence(str,find,i);

    return 0;
}