#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

    vector<vector<int>> arr{
        {0,1,2,0,0,1,2,2,1,0,2,1,1,0,2,1,0,0},
       
    };
    
    sort(arr[0].begin(), arr[0].end());
  

 for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
 }
    
   
    return 0;
}