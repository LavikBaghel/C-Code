#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr1[] = {10,13,14,16,17,28};
    int arr2[] = {20,25};
    vector<int> ans;

    int arrSize1 = sizeof(arr1)/sizeof(int);
    int arrSize2 = sizeof(arr2)/sizeof(int);

    int i = 0;
    int j = 0;

   while(i < arrSize1 && j < arrSize2 ){
    
       if(arr1[i] < arr2[j]){
        ans.push_back(arr1[i]);
        i++;
    }
    
    if(arr1[i] > arr2[j]){
         ans.push_back(arr2[j]);
        j++;
    }

   }
   
   if(i == arrSize1){
    while(j < arrSize2){
        ans.push_back(arr2[j]);
        j++;
    }
   }
   if(j == arrSize2){
    while(i < arrSize1){
        ans.push_back(arr1[i]);
        i++;
    }
   }

   for(auto value: ans){
    cout<<value<<" ";
   }
   
    return 0;
}