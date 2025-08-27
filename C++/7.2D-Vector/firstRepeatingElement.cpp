#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> arr = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    vector<int> brr;
    int value = 0;
      for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=arr.size();j>0;j--){
              if(i == j){
                 break;
              }
              if(value == 1){
                 exit(0);
              }
              if(element == arr[j]){
               
                cout<<element<<" ";   
                  value++;
               }
              
       }
        
      }
   

    return 0;
}