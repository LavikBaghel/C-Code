#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans = 0;
       for(int i=0;i<arr.size();i++){
            ans = ans ^ arr[i];
       }
       return ans;
}

int main(){

    //  vector<int>arr;
    //  int ans = sizeof(arr)/sizeof(int);
    //  cout<<ans<<endl;

    int n;
    cout<<"Enter the value of n"<<endl;
     cin>>n;                           //Unique Number find
     vector<int> arr(n); 
     for(int i=0;i<arr.size();i++){
         cin>>arr[i];
    }
    int unique = findUnique(arr);
    cout<<"Unique Number is: "<<unique;
    return 0;
}