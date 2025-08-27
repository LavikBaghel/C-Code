#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

 void kClosestElement(vector<int> arr,int k,int x,int s){
      int diff;
      int size = s;
      vector<int> brr;
    for(int i =0;i<size;i++){
        diff = abs(x - arr[i]);
        // cout<<diff<<" ";
        brr.push_back(diff);
    }
    // sort(diff,diff+size);
    // sort(diff,diff+size);
    //  cout<<diff<<" ";
    
    sort(brr.begin(),brr.end());
    // for(int i=0;i<brr.size();i++){
    //     cout<<brr[i]<<" ";
    // }
    int i=0;
    while(i<k){
        int element = brr[i]+x;
        cout<<element<<" ";
        i++;
    }
    // for(int j=0;j<k;j++){
    //     cout<<brr[j];
    // }
   
    
 }

int main(){

   vector<int> arr = {12,16,22,30,35,39,42,45,48,50,53,55,56};
   int k = 4;
   int x = 35;
   int size = arr.size();
   kClosestElement(arr,k,x,size);
    
  
    return 0;
}