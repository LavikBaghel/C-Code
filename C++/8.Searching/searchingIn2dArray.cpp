#include<iostream>
#include<vector>
using namespace std;

bool findTarget(vector<vector<int>> arr,int target){
     
     int col = 5;
     int row = 4;
     int start = 0;
     int end = (col*row) - 1;
     int mid = start + (end-start)/2;
     
     while(start<=end){
        int element = arr[mid/col][mid%col];
        if(element == target){
            return true;
        }
        if(element < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
       mid =  start + (end-start)/2;
     }
    return false;
}

int main(){

    vector<vector<int>> arr = {
                          {1,2,3,4,5},
                          {6,7,8,9,10},
                          {11,12,13,14,15},
                          {16,17,18,19,20},
    };
    int target = 20;
    bool ans = findTarget(arr, target);
    // cout<<ans;

    if(ans)
     cout<<"Found";
     else{
     cout<<"Not Found";
     }
    return 0;
}