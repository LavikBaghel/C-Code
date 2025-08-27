#include<iostream>
#include<algorithm>
using namespace std;
//    XOR Approach
// int oddOccurance(int* arr,int size){
//      int start = 0;
//      int end = size - 1;
//      int mid = start + (end-start);
    //  int ans = 0;                          

//      while(start<=end){
//         ans = ans ^ arr[start];
//         start++;
//      }
//      return ans;
// }

// Binary Approach
int oddOccurrence(int arr[], int n)
{  
   int count = 0 , ans = -1;
   sort(arr,arr+n);//sort array for binary search
     
   for(int i = 0 ; i < n ;i++)
   {   
     //index of first and last occ of arr[i]
     int first_index = lower_bound(arr,arr+n,arr[i])- arr;
     int last_index = upper_bound(arr,arr+n,arr[i])- arr-1;
     i = last_index; // assign i to last_index to avoid printing
                     // same element multiple time
       
     int fre = last_index-first_index+1;//finding frequency
     //( occurrences of arr[i] in the array )
       
     if(fre % 2 != 0)
     { // if element occurs odd times then add that elements to our answer
          ans = arr[i];              
     }
   } 
   return ans;
}

int main(){

    int arr[] = {11,20,5,5,20};
    int size = sizeof(arr)/sizeof(int);


    cout<<oddOccurrence(arr, size);


    return 0;
}