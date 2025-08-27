#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

static bool mycomp(string a,string b){
    string t1 = a+b;
    string t2 = b+a;
    return t1>t2;
}

string findLargestNumber(vector<int> nums){
    vector<string> snums;
    for(auto n: nums){
       snums.push_back(to_string(n));
    }

    sort(snums.begin(), snums.end(), mycomp);

    string ans = "";
    for(auto str: snums){
        ans += str;
    }
    return ans;
}

int main(){

    vector<int> nums = {2,9,90,23,10};
    // testcase -> [2,10] [3,30] [0,0,0]

    cout<<findLargestNumber(nums);

    return 0;
}