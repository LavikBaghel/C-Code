#include<iostream>
#include<vector>
using namespace std;

int beautifulArrangement(int n){
    vector<int> ans;
    int count = 0;

    for(int i = 1;i <= n; i++){
        ans.push_back(i);
    }

    for(int j = 1;j <= ans.size();j++){
      for(int k = 1;k <= ans.size();k++){
          if(ans[j] % k == 0){
               count++;
          }
      }
    }
    return count;
}

int main(){

    int n = 2;

    cout<<beautifulArrangement(n);

    return 0;
}