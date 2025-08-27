#include<iostream>
using namespace std;

void merge(int* arr,int start,int end){

    int mid = start + (end - start)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // creating two part of array
    int* left = new int[len1];
    int* right = new int[len2];

    int k = start;
    for(int i = 0;i< len1;i++){
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k];
        k++;
    }
    
    // now sort the both left and right array
    int leftIndex = 0;
    int rightIndex = 0;
    int arrayIndex = start;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] > right[rightIndex]){
            arr[arrayIndex] = right[rightIndex];
            arrayIndex++;
            rightIndex++;
            
        }
        else{
            arr[arrayIndex] = left[leftIndex];
            arrayIndex++;
            leftIndex++;
        }
    }

    //   copy logic for left array
while(leftIndex < len1){
    arr[arrayIndex++] = left[leftIndex++];   
    
}

//  copy logic for right array
while(rightIndex < len2){
    arr[arrayIndex++] = right[rightIndex++];
}
}

void dummyMergeSort(int* arr,int start,int end){
    //Base case
    if(start >= end){
        return;
    }

    int mid = start + (end - start)/2;
    //solving one case rest case will handle by recursion
    
    // sorting left part
    dummyMergeSort(arr,start,mid);

    // sorting right part
    dummyMergeSort(arr,mid+1,end);


    //merge both sorted left and right part
    merge(arr,start,end);
}

int main(){

    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size - 1;

    dummyMergeSort(arr,start,end);

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}
  


  