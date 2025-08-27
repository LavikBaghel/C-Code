#include<iostream>
using namespace std;

void printSubarray(int arr[], int start,int end, int size){
    
    if(end >= size) return printSubarray(arr,start+1,start+1,size);
    if(start >= size) return;

    for(int i =start;i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     printSubarray(arr,start,end+1,size);
    
    
}   
int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = start;

    printSubarray(arr,start,end,size);

    return 0;
}