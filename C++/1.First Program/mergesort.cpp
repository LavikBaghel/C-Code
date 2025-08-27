#include<iostream>
using namespace std;

void merge(int arr[], int size, int start, int end){
    int mid = start + (end-start)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int* left = new int[len1];
    int* right = new int[len2];

    //copy values
    int k = start;
    for(int i=0;i<len1;i++){
        left[i] = arr[k];
        k++;
    }
     
    k = mid+1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k];
        k++;
    }

    //merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;

    while(leftIndex < len1 && rightIndex < len2){
      if(left[leftIndex] < right[rightIndex]){
        arr[mainIndex++] = left[leftIndex++];
      }
      else{
        arr[mainIndex++] = right[rightIndex++];
      }
    }
    
    //copy for left array
    while(leftIndex < len1){
        arr[mainIndex++] = left[leftIndex++];
    }

    //copy for right array
    while(rightIndex < len2){
        arr[mainIndex++] = right[rightIndex++];
    }

    //delete

}

void mergeSort(int* arr, int size, int start, int end){
    if(start >= end){
        return;
    }
    int mid = start + (end-start)/2;
    //left part recursion
    mergeSort(arr, size, start, mid);

    //Right part array recursion
    mergeSort(arr, size, mid+1, end);

    //merging two sorted array
    merge(arr, size, start, end);
}

int main(){
    
    int arr[] = {7,3,2,16,24,4,11,9};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size -1;
    

    mergeSort(arr, size, start, end);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"M sort done";
    return 0;
}
