#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,4,6,8};
    int brr[] = {1,3,5,7};
    vector<int> ans;
    for(int i=0;i<4;i++){
     ans.push_back(arr[i]);
     
    }
    for (int j = 0; j < 4; j++){
       ans.push_back(brr[j]);
     }
     for(int k=0;k<ans.size();k++){
        cout<<ans[k]<<" ";
     }
    return 0;
}                                          