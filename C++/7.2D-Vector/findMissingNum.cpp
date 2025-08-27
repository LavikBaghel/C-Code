#include<iostream>
using namespace std;

int main(){

     int arr[] = {1, 2, 3, 5};
     int size = sizeof(arr)/sizeof(int);

     for(int i=1;i<size;i++){
        if(i != arr[i-1]){
            cout<<i<<" ";
            break;
        }
     }

    return 0;
}