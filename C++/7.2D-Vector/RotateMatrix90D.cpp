#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<vector<int>> arr{
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    for(int i=2;i>=0;i--){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}