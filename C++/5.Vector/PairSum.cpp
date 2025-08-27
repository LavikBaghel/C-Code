#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{1,2,3,4,5,6,7,3};
     cout<<"The pair of number which sum is 9 are: "<<endl;
    for(int i=0;i<arr.size();i++){
       int element = arr[i];
        for(int j=i+1;j<arr.size();j++){
            // cout<<element<<","<<arr[j]<<endl;
            if(arr[j] + element == 9){
                 cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            }
        }
    }

    return 0;
}