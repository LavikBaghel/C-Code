#include<iostream>
#include<vector>
using namespace std;

int main(){

     int arr[][4] = { {1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16} };
                     
    
      for(int col=0;col<4;col++){
          if(col == 0 || col ==2){
              for(int i=0;i<4;i++){
                  cout<<arr[i][col]<<" ";
              }
          }

          if(col == 1 || col == 3){
              for(int i=3;i>=0;i--){
                    cout<<arr[i][col]<<" ";
              }
          }
      }
      
    return 0;
}