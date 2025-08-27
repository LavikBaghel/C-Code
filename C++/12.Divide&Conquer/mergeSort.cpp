#include<iostream>
using namespace std;

void merge(int* arr,int start,int end){
  int mid = start + (end - start)/2;

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

  //Merge Logic
  int leftIndex = 0;
  int rightIndex = 0;
  int mainArrayIndex = start;

  while(leftIndex < len1 && rightIndex < len2){
    if(left[leftIndex] < right[rightIndex]){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    else{
        arr[mainArrayIndex++] = right[rightIndex++];
    }
  }
 

//   copy logic for left array
while(leftIndex < len1){
    arr[mainArrayIndex++] = left[leftIndex++];   
}

//  copy logic for right array
while(rightIndex < len2){
    arr[mainArrayIndex++] = right[rightIndex++];
}

//we can delete left and right array for saving the memory 
   //Memory leak if we do not delete dynamic memory in heap

    delete left;
   delete right;

}

void  mergeSort(int* arr,int start, int end){
    
    // Base case
    if(start >= end){
        return;
    }

    int mid = start + (end - start)/2;
    
    //sorting left part
    mergeSort(arr,start,mid);

    // sorting right part
    mergeSort(arr,mid+1,end);

    //now mergingv2 sorted array
    merge(arr,start,end); 
     
}

int main(){

    int arr[] =  {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = n - 1;

    mergeSort(arr, start, end);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}