#include<iostream>
using namespace std;

int searchInAlmostSortedArray(int* arr,int key, int size){
    int start = 0;
    int end = size - 1;
    int mid  = start + (end-start)/2;

    while(start<=end){
        // int element = arr[mid];
        if(arr[mid] == key){
            return mid;
        }
        if(mid-1 >= start && arr[mid-1] == key){
            return mid-1; 
        }
         if(mid+1 < end+1 && arr[mid+1] == key){
            return mid+1;
        }
        if(arr[mid] < key){
            start = mid+2;
        }
        else{
            end = mid-2;
        }
        mid  = start + (end-start)/2;
    }   
    return -1;
}
 
int main(){
 
    int  arr[] =  {10, 3, 40, 20, 50, 80, 70};
    int key = 20;
    int size = sizeof(arr)/sizeof(int);
    
    int ans = searchInAlmostSortedArray(arr, key, size);
    cout<<key<<" present at index "<<ans;
     



    return 0;
}