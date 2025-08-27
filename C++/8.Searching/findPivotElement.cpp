#include<iostream>
#include<vector>
using namespace std;

//Pivot element is the only element in input array which is smaller than it's previous element. A pivot element divided a sorted rotated array into two monotonically increasing array.

int findPivotElement(vector<int> arr){
    int start = 0;
    int end = arr.size()  - 1;
    int mid = start + (end-start)/2;


    while(start < end){
       if(arr[mid] < arr[mid+1] && arr[mid] > arr[mid-1]){
           start = mid ;
       }
       if(arr[mid-1] > arr[mid]){
            //    end = mid;
            //    start = mid;
            return arr[mid];
       }
       if(arr[mid] > arr[mid+1]){
        return arr[mid+1];
      }
       mid = start + (end-start)/2;
    }
    // return arr[mid];

}

int main(){
// 4,5,6,7,8,1,2,3
    vector<int> arr{6, 7, 8, 9, 1, 2, 3, 4, 5};

    cout<<findPivotElement(arr);

    return 0;

}