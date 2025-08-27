#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{2,4,6,5,8};
    
    vector<int> brr{1,2,5,7,8};
    
    vector<int> ans;

    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=0;j<brr.size();j++){
            if(element == brr[j]){
                ans.push_back(element);
            }
        }
    }
    for(auto value: ans){
        cout<<value<<" ";
    }

   
    

   
    
    return 0;
}                                          