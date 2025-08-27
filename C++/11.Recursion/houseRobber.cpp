#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int robHelper(vector<int>& nums, int i){
    if(i >= nums.size()){
        return 0;
    }

    //sol for 1 case:
     int robAmt1 = nums[i] + robHelper(nums, i+2);

     int robAmt2 = 0 + robHelper(nums, i+1);

     return max(robAmt1, robAmt2);
}

int houseRobber(vector<int>& nums){
   
     return robHelper(nums, 0);
}

int main(){

   vector<int> nums = {1,2,3,1};
   

   cout<< houseRobber(nums);

    return 0;
}