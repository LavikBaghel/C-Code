#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr = {1,2,3,4,4,4,4,4,4,4,4,4,5};
    int size = arr.size();
    int target = 4;
    
    auto low = lower_bound(arr.begin(), arr.end(), target);
    auto upper = upper_bound(arr.begin(), arr.end(), target);

    int result = upper - low ;
    cout<<result<<endl;

    return 0;
}