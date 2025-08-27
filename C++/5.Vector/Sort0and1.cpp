#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr{0,1,0,1,0,1,0,1};
    int i=0;
    int sum = 0;
    int end = arr.size() - 1;
    while(i<arr.size()){
        if(arr[i] == 1){
            swap(arr[sum],arr[i]);
            sum++;
            i++;
        }
        else{
            swap(arr[i],arr[end]);
            // i++;
            end--;
        }
    }
    for(auto value: arr){
        cout<<value<<" ";
    }
    return 0;
}