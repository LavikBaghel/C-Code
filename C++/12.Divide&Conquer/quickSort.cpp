#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    // Step1 : choose pivot element

int pivotIndex  = start;
int pivotElement = arr[start];

// Step2 : find right position for pivot element and place it there

int count = 0;
for(int i =start+1;i<=end;i++){
    if(arr[i] <= pivotElement){
        count++;
    }
}

  int rightIndex = start + count;
  swap(arr[pivotIndex], arr[rightIndex]);

  pivotIndex = rightIndex;

//Step3 : left side => smallerelements ans right side => larger elements than pivot  

   int i = start;
   int j = end;

   while(i < pivotIndex && j > pivotIndex){
    while(arr[i] <= pivotElement){
        i++;
    }
    while(arr[j] > pivotElement){
        j--;
    }

     // you found 2 cases here whice are
    // 1. you found the element to swap
    //2. no need to swap

    if(i < pivotIndex && j > pivotIndex){
        swap(arr[i], arr[j]);
    }
   }
   
    
   return pivotIndex;
}

void quickSort(int arr[],int start, int end){

    // Base case
    if(start >= end){
        return;
    }

    //  Partition logic -> return pivotIndex
    int p = partition(arr,start,end);

    // Recusive Call
    // left
    quickSort(arr,start,p-1);

    // Right
    quickSort(arr,p+1,end);
    
    
}

int main(){

    int arr[] = {8,1,3,4,20,50,30};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size - 1;

    quickSort(arr,start,end);

    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}    