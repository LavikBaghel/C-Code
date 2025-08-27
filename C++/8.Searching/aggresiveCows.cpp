#include<iostream>
#include<vector>
using namespace std;

bool possibleSolution(vector<int> &arr, int mid, int M){
    int c=1;
    int pos = arr[0];

    for(int i=1;i<arr.size();i++){
        if(arr[i] - pos >= mid){
           c++;
           pos = arr[i];
        }
        if(c == M){
            return true;
        }
    }
    return false;
}

int aggresiveCows(vector<int> &arr, int size, int M){
    if(M>size)return -1;
    int start = 0;
    int end = arr[arr.size() - 1] - arr[0];
    int ans = -1;
    while(start<=end){
        
        int mid = start + (end - start)/2;
        if(possibleSolution(arr, mid, M)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}

int main(){
    
    vector<int> arr = {1,2,4,8,9};
    int size = arr.size();
    int M = 3;
    cout<<aggresiveCows(arr,size,M);
    return 0;
}