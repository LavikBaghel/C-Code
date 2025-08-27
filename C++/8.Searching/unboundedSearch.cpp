#include<iostream>
#include<limits.h>
using namespace std;
int bs(int* arr,int start, int end, int x){
     int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==x){
            return mid;
        }
        if(x>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int expoSearch(int* arr, int size, int x){
    int i=0;
    int j=1;
     while (arr[j]<x)
     {
       i=j;
       j=j*2;
     }
     return bs(arr,i,j,x);
     
}

int main(){

   int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170};
   int size = sizeof(arr)/sizeof(int);
   int x =10;

   int ans = expoSearch(arr,size,x);
   cout<<"Element fount at index: "<<ans;     



    return 0;
}