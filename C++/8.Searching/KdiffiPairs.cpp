#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

int kDiffPairs(vector<int> nums,int k){
   sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i=0;
        int j= 1;
        
        // Approach One
        // while(j < nums.size()){
        //     int diff = nums[j]-nums[i];
        //     if(diff == k){
        //      ans.insert({nums[i], nums[j]});
        //      cout<<"("<<nums[i]<<","<<nums[j]<<")"<<endl;
        //      ++i, ++j;
        //     }
        //     else if(diff > k){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        //     if(i==j){
        //         j++;
        //     }
        // }
        // return ans.size();
}

int main(){

   vector<int> arr = {3,1,4,1,5};
   int k = 2;

   cout<<"Total no. of pairs are : "<<kDiffPairs(arr, k);


    return 0;
}