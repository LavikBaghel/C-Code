#include<iostream>
#include<vector>
using namespace std;

int findPeakIndexInMountainArray(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){

    vector<int>  arr{0,1,0};

    cout<<findPeakIndexInMountainArray(arr);


    return 0;
}