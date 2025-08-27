#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    
    vector<int> arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;

    while(start < end){
       if(0 > arr[i]){
        swap(arr[i], arr[start]);
        
        start++;
        i++;
        
       }

    else{
      swap(arr[i] , arr[end]);
     
      end--;
    //  i++   //Do not use because swap number also check that  is neg or not.
       }
    }

  //Printing the ans array  
   for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}