#include<iostream>
#include<vector>
using namespace std;

int missingNum(vector<int> arr , int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans;
    while(start <= end ){
         
         if(arr[mid] == mid+1){
            start = mid+1;
         }
         else{
            // return mid+1;
            ans = mid+1;
            end = mid-1;
         }
          mid = start + (end-start)/2;
    }
     return ans;
}

int main(){

    vector<int> arr = {1,2,3,4,6,7};
    int size = arr.size();
    // cout<<size;

   cout<<missingNum(arr, size);
    return 0;
}
