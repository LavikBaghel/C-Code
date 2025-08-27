#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;


int finDMaxNum(int arr[3][3],int row,int col){
      int maxi = INT_MIN;
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(maxi<arr[i][j]){
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int main(){
    // Printing Row-wise sum
   
    // int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    // for(int i=0;i<3;i++){
    //      int ans=0;
    //     for(int j=0;j<3;j++){
    //         ans = ans + arr[i][j];
            
    //     }
    //     cout<<ans<<endl;
    //         // ans = 0;
    // }

    

    // Searching an elemnet in 2d array
    // cout<<"Enter the number you want to search in array: ";
    // int n;
    // cin>>n;
    //  int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    // for(int i=0;i<3;i++){
          
    //     for(int j=0;j<3;j++){
           
    //         if(arr[i][j] == n){
    //             cout<<"AT Index "<<"("<<i<<","<<j<<")"<<"Present "<<endl;
    //             break;
    //         }
    //         else{
    //             cout<<"Not Present "<<endl;
               
    //         }
            
    //     }
        
    //         // ans = 0;
    // }


    // Find maximum number in 2d array
    // int arr[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    
    // int col = 3;
    // int row = 3;
    // int num = finDMaxNum(arr, 3, 3);
    // cout<<"The maximum number in this array is "<<num;


    // Transpose an array

    int arr[3][3] = { {2,3,4}, {1,5,8}, {9,7,6}};

    for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++){
            int element = arr[i][j];
            element = arr[j][i];
           
            cout<<element<<" ";
            
        }
        cout<<endl;
    }
    
    
    return 0;
}