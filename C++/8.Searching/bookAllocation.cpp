#include<iostream>
using namespace std;

bool isPossibleSolution(int* arr ,int size,int M,int mid){
    int pageSum = 0;
    int c = 1;
    for(int i=0;i<size;i++){
        if(arr[i] > mid){
            return false;
        }
        if(pageSum + arr[i] > mid){
            c++;
            pageSum = arr[i];
            if(c > M){
               return false; 
            }
        }
        else{
            pageSum += arr[i];
        }
    }
        return true;
     
}


int bs(int* arr,int size, int M){
    if(M>size)return -1;
    int start = 0;
    int ans = -1;
    int end = 0;
    for(int i=0;i<size;i++){
        end +=  arr[i];
    }
    

    while(start<=end){
        int mid = start + (end-start)/2;
        if(isPossibleSolution(arr , size, M, mid)){
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

     int arr[] = {12,34,67,90};
     int M = 2;
     int size = sizeof(arr)/sizeof(int);
    //  cout<<size<<endl;

     cout<<bs(arr, size, M);


    return 0;
}