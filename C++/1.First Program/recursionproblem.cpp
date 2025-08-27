#include<iostream>
#include<limits.h>
#include<vector>
#include<string>
#include<string.h>
using namespace std;

long long int factorialByRecursion(int a){
    if(a==0){
        return 1;
    }
    
     return a*factorialByRecursion(a-1); 
}

void countingByFactorial(int a){
    
    if(a == 0){
        return;
    }
    
    // cout<<a<<" ";   //Reverse Counting
    countingByFactorial(a-1);
    cout<<a<<" ";     //Simple Counting
    
   
}

int fibonacciSeries(int a){
    //Base Case
    if(a == 1){
        return 0;
    }
    if(a == 2){
        return 1;
    }

    return fibonacciSeries(a-1) + fibonacciSeries(a-2);

}

void printArrayByRecursion(int arr[], int size){
    if(size < 0){
        return;
    }
    printArrayByRecursion(arr, size-1);
    cout<<arr[size]<<" ";
}

int maxByRecrusion(int arr[], int size, int i, int& max){
    if(i >= size){
        return max;
    }
    if(max < arr[i]){
        max = arr[i];
    }
    maxByRecrusion(arr, size, i+1, max);


}

bool isSortedByRecursion(int arr[], int size, int i){
    if(i >= size){
        return true;
    }  
    if(arr[i-1] > arr[i]){
        return false;
      }
      else{
        isSortedByRecursion(arr, size, i+1);
      }
     
    
}

int binarySearchByRecursion(vector<int>& arr, int target, int start, int end){
    if(start > end){
            return -1;
    }
    int mid = start +(end-start)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] > target){
       return binarySearchByRecursion(arr, target, start, mid-1);
    }
    else if(arr[mid] < target){
       return binarySearchByRecursion(arr, target, mid+1, end);
    }
    

}

void findingAllSubsequenceOfStringByRecursion(string str, int i, string ans){
    //Base Case
    if(i >= str.size()){
        cout<<ans<<endl;
        return;
    }
    //Exclude
    findingAllSubsequenceOfStringByRecursion(str, i+1, ans);

    //Include
    ans.push_back(str[i]);
    findingAllSubsequenceOfStringByRecursion(str, i+1, ans);

}

int main(){
    
     int a = 4;
   

    // cout<<factorialByRecursion(a);

    // countingByFactorial(a);

    // cout<<fibonacciSeries(a);

    // int arr[] = {1,2,3,4,5};
    // int size = sizeof(arr)/sizeof(int) - 1;

    // printArrayByRecursion(arr, size);

    // int arr[] = {10,30,15,21,26,12};
    // int size = sizeof(arr)/sizeof(int);
    // int i =0;
    // int maxi = INT32_MIN;

    // cout<<maxByRecrusion(arr, size, i, maxi);


    // int arr[] = {1,22,31,41,45};
    // int size = sizeof(arr)/sizeof(int);
    // int i = 1;

    // if(isSortedByRecursion(arr, size, i)){
    //     cout<<"Given Array is sorted"<<endl;
    // }
    // else{
    //     cout<<"Given Array is not sorted"<<endl;
    // }

    // vector<int> arr = {10,20,30,40,50,60,70,80};
    // int target = 70;
    // int start = 0;
    // int end  = arr.size() - 1;
    // int mid = start + (end-start)/2;

    // cout<<binarySearchByRecursion(arr, target, start, end);

    string str = "abc";
    string ans = "";
    int i = 0;

    findingAllSubsequenceOfStringByRecursion(str, i, ans);

   
    return 0;
}