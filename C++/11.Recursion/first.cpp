#include<iostream>
#include<limits.h>
using namespace std;

// printing the value present in array
void arrValue(int arr[], int size){
    if(size == 0) return;

    arrValue(arr, size-1);
    cout<<arr[size-1]<<" ";
}

// finding the maximum num in array using recursixe func..
int maxNum(int arr[], int size, int i, int maxi){
    
    if(i == size) return maxi;

    if(arr[i] > maxi){
        maxi = arr[i];
    }
    
    // recursive call
     maxNum(arr,size,++i,maxi);
}

bool findChar(string str, char find, int i,int size1){
    
       if(i >=size1){
        return false;
       } 

       if(str[i] == find){
        return true;
       }
       
        return findChar(str, find, ++i, size1);
       
   
      
    // return false;
     
     
}

int main(){

    int arr[] = {10,20,15,21,44,26,17};
    int size = sizeof(arr)/sizeof(int);
    int i = 0;
    int maxi = INT_MIN;
    
    // arrValue(arr, size);
    // cout<<maxNum(arr, size, i, maxi);

    string str = "lavik";
    char find = 'x';
    int size1 = str.length();
   

    if(findChar(str, find, i, size1)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
   
    return 0;
}