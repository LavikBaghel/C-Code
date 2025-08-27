#include<iostream>
using namespace std;

bool possibleSolution(int arr[],int size,int M,int mid){
     int wallSum = 0;
     int c = 1;
     for(int i=0;i<size;i++){
        if(arr[i] > mid){
            return false;
        }
        if(wallSum + arr[i] > mid){
            c++;
            wallSum = arr[i];
            
            if(c > M){
              return false;
            }
            
        }
        else{
           wallSum += arr[i];
        }
     }
     return true;
}

int painterPartition(int arr[],int size,int M){
    if(M>size)return -1;
    int start = 0;
    int ans = -1;
    int end = 0;
    for(int i=0;i<size;i++){
        end +=  arr[i];
    }
    while(start<=end){
        int mid = start + (end-start)/2;
        if(possibleSolution(arr, size, M, mid)){
              ans = mid;
              end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){

    int arr[] = {5,10,30,20,15};
    int size = sizeof(arr)/sizeof(int);
    int M = 3;
    
    cout<<painterPartition(arr,size,M);

    return 0;
}