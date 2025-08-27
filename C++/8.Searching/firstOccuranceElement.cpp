#include<iostream>
using namespace std;

int findFirstOccurrance(int arr[],int size,int target){
    int start = 0;
    int end = size - 1;
    int mid = start + (end+start)/2;
    int store = 0;

    while(start<=end){
        int element = arr[mid];
       if(element == target){
            store = mid;
            end = mid-1;
           
       }
       else if(element<target){
              start = mid+1;
       }
       else {
        end = mid-1;
       }
       mid = start + (end-start)/2;
    }
    return store;
}

int main(){

    int arr[] = {1,2,3,4,4,4,4,6};
    int size = sizeof(arr)/sizeof(int);

    int target = 4;
    
    int occurance = findFirstOccurrance(arr, size, target);
    cout<<"First Occurance Element at index "<<occurance<<endl;

    return 0;
}