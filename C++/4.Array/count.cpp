#include<iostream>
using namespace std;

int main(){

    // cout<<"hello";
    int arr[] = {1,0,0,1,1,1,0,0,1,0,0,0,0,1};
     int size = 14;

     int zero = 0;
     int one = 0;
     for(int i=0;i<size;i++){
        if(arr[i] == 0){
            zero++;
        }
        if(arr[i] == 1){
            one++;
        }
     }
     cout<<"No. of zeroes: "<<zero<<endl;
     cout<<"No. of ones: "<<one;


   return 0;
}