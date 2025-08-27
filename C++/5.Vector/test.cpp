#include<iostream>
#include<vector>
using namespace std;

int main(){
    //  Concatenation of two Array
    // vector<int> arr{1,2,3,4};
    // vector<int> brr{5,6,7,8};
    
    // vector<int> ans;
    // for(int i=0;i<arr.size();i++){
    //     ans.push_back(arr[i]);
    // }
    // for(int j=0;j<brr.size();j++){
    //     ans.push_back(brr[j]);
    // }
    // for(auto value: ans){
    //     cout<<value<<" ";
    // }


    // Inter-section of Two Array

    // vector<int> arr{2,4,6,8};
    // vector<int> brr{1,2,5,4};
    // vector<int> ans;
    // for(int i=0;i<arr.size();i++){
    //     int element = arr[i];
    //     for(int j=0;j<brr.size();j++){
    //         if(element == brr[j]){
    //            ans.push_back(element);
    //         }
    //     }
    // }
    // for(auto value: ans){
    //     cout<<value<<" ";
    // }


    // Pair Sum of Arrays

    // vector<int> arr{1,3,2,7,9};
    // vector<int> brr{2,4,6,4};
    // vector<int> ans;

    // for(int i=0;i<arr.size();i++){
    //     int element = arr[i];
    //     for(int j=0;j<brr.size();j++){
    //         if(element + brr[j] == 9){
    //            cout<<"("<<element<<","<<brr[j]<<")"<<endl;
    //         }
    //     }
    // }


    // Sort 0 and 1

    // vector<int> arr{1,0,0,1,0,1,1,0};
    // int start = 0;
    // int end = arr.size() - 1;
    // int i = 0;

    // while(start < arr.size()){
    //      if(arr[i] == 1){
    //         swap(arr[start],arr[i]);
    //         i++;
    //         start++;
    //      }
    //      else{
    //         swap(arr[i],arr[end]);
    //         end--;
    //      }
    // }
    // for(auto value: arr){
    //     cout<<value<<" ";
    // }



    // Left Rotate an Array
    vector<int> arr{1,2,3,4,5,6,7};
    vector<int> ans;

    int start = 0;
    int end = arr.size() - 1;
    int i=0;
    while(start <= end){
        int element = arr[i];
        element = arr[end];
        ans.push_back(element);
       end--;
       i++;
    }
    for(auto value: ans){
        cout<<value<<" ";
    }


    return 0;
}