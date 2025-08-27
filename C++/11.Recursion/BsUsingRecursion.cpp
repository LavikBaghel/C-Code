#include<iostream>
#include<vector>
using namespace std;

int bsUsingRecursion(vector<int>& arr, int start, int end, int find){
    if(start > end) return -1;

     int mid = start + (end - start)/2;

     if(find == arr[mid]) return mid;

     if(find > arr[mid]){
      bsUsingRecursion(arr, mid+1, end,find);
    }
    else{
      bsUsingRecursion(arr, start, mid-1,find);  
    }
}

int main(){

    vector<int> arr = {10,20,30,40,50,60,70,80};
    int find = 70;
    int start = 0;
    int end = arr.size() - 1;

    

    cout<<find<<" found index at: "<<bsUsingRecursion(arr, start, end,find);

    return 0;
}