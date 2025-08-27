#include<iostream>
using namespace std;

int merge(int* arr, int start, int end){
  
  int mid = start + (end - start)/2;

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int* left = new int[len1];
  int* right = new int[len2]; 

  //Copying values
  int k = start;
  for(int i = 0;i<len1;i++){
    left[i] = arr[k];
    k++;
  }

  k = mid+1;
  for(int i = 0;i<len1;i++){
    right[i] = arr[k];
    k++;
  }

   // Merge Logic
   int leftIndex = 0;
  int rightIndex = 0;
  int count = 0;

  while(leftIndex < len1 && rightIndex < len2){
    if(left[leftIndex] > right[rightIndex]){
        
        count++;
       rightIndex++;
       
    }
    else{
        
    }
  }
  return count;
}

// Method-2 (Using Merge Sort)
int inversionCount(int* arr, int start, int end){
    int count = 0;
    // Base case
    if(start>=end){
        return count;
    }
    int mid = start + (end - start)/2;

    // left part of array
    inversionCount(arr,start,mid);

    // right part of array
    inversionCount(arr,mid+1,end);

    // merging
     merge(arr,start,end);
}


// Method-1 (Using Iterative way OR Naive way)
// int inversionCount(int* arr, int size){
//     int count = 0;

//     for(int i = 0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             if(arr[i] > arr[j]){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int main(){
  //testcases -> {1, 20, 6, 4, 5}
    int arr[] =  {8,4,2,1};
    int size = sizeof(arr)/sizeof(int);
    int start = 0;
    int end = size - 1 ;
  


    cout<<inversionCount(arr,start,end);

     //using iterative way
    // cout<<inversionCount(arr,size);
    return 0;
}
