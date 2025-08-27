#include<iostream>
#include<vector>
using namespace std;

int main(){
 //Way of initializing a 2d vector
//    vector<vector<int>> arr{
//         {1 , 2 , 3 },
//         {4 , 5 , 6 },
//         {7 , 8 , 9 },
//     };
    
 // Another way of initializing 2d vector
    // vector<vector<int>> arr(3, vector<int>(3, 0));

    // for(int i=0;i<arr.size();i++){
    //    for(int j=0;j<arr[i].size();j++){
    //     cout<<arr[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }


    int a;
    cout<<"Enter number of rows ";
    cin>>a;
    int b;
    
   
    
    vector<vector<int>> arr;
   
    for(int i=0;i<a;i++){
       int n=1;
       cout<<"Enter number of columns ";
        cin>>b;
        for(int j=0;j<b;j++){
            cout<<n<<" ";
            n++;

        }
        cout<<endl;
    }

    return 0;
}