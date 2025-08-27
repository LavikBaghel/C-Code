#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr,int s,int end,int x){
    int start = s;
    int e = end;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==x){
            return arr[mid];
        }
        if(x>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int expontentialSearch(vector<int> arr, int size, int x){
    if(arr[0]==x){
        return 0;
    }
    int i = 1;
    while(i<size && arr[i]<=x){
        i = i*2;
    }
    return binarySearch(arr,i/2,min(i,size-1),x);
}

int main(){

    vector<int> arr = {3,4,5,6,11,13,14,15,56,70};
    int size = arr.size();
    int x = 13;
    int ans = expontentialSearch(arr,size,x);
   cout<<ans;
    return 0;
}