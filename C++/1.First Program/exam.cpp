#include <iostream>
#include <bits/stdc++.h>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

int areaofRectangle(int x,int y){
    int result = x * y;
    return result;
}

int factorial(int n){
    int factorial = 1;

    for(int i=1;i<=n;i++){
       factorial *= i;
    }
    return factorial;
}

int printToNumber(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

int reverseInteger(int n){
    int ans = 0;
    for(int i =0;i<n;i++){
        ans += n % 10;
    }
}

void increment(int arr[]){
    arr[0] = 6;
}

bool findNumber(int arr[],int size,int find){
    for(int i=0;i<size;i++){
        if(arr[i] == find){
            return true;
        }
    }
    return false;
}

void countZeroOnes(int arr[],int size){
    int countZeros = 0;
    int countOnes = 0;

    for(int i=0;i<size;i++){
      if(arr[i] == 0){
        countZeros++;
      }
      else if(arr[i] == 1){
        countOnes++;
      }
    }
    cout<<"Ones are : "<<countOnes<<endl;
    cout<<"Zeros are : "<<countZeros<<endl;
}

int findMax(int arr[],int size){
    int max = 0;
    for(int i=0;i<size;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int printArray(int arr[],int size){
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
   return 0;
}
void reverseArray(int arr[],int size,int start,int end){
      while(start<=end){
        // swap(arr[start],arr[end]);     //Simple way to reverse an array

        //Way 2 ->
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp; 
        start++;
        end--;
      }
      printArray(arr,size);
}

void printingAaray(int brr[][3],int row,int col){
      //printing the matrix
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }            
}

void  rotateMatrix(int arr[][3],int brr[][3],int row,int col){
    for(int i=0;i<row;i++){
        int sum = 2;
        for(int j=0;j<col;j++){

            brr[i][sum] = arr[j][i];
            sum--;
          
        }
    }
}
void upLoop(int arr[][4],int row,int col,int count){
    for(int j=row-1;j>=0;j--){
        cout<<arr[j][count]<<" ";
    }
    // cout<<"Amount : "<<count<<" "<<endl;
    
}

void wavePrint(int arr[][4],int row,int col)
{
    int count = 0;
   while(count<col){
     for(int i=0;i<row;i++){
        cout<<arr[i][count]<<" ";
    }
    count++;
    // cout<<"Amount : "<<count<<" "<<endl;
    upLoop(arr,row,col,count);
    count++;
   } 
   
}
int main()
{

    //   int n;
    //   if(cin>>n){
    //     cout<<"Done"<<endl;
    //   }
    //   else{
    //     cout<<"Not Done"<<endl;
    //   }

    //   if(cout<<"Done"<<endl){
    //     cout<<"Done"<<endl;
    //   }

    /*            Patterns                */
    // rectangle
    //  for(int row = 0;row <3;row++){
    //      for(int col = 0;col<5;col++){
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //  }

    // hollow rectangle
    //   for(int row = 0;row <3;row++){
    //      for(int col = 0;col<5;col++){
    //          if(row==1 && col == 1 || row==1 && col ==2 || row==1 && col ==3){
    //              cout<<"  ";
    //          }
    //          else{
    //            cout<<"* ";
    //          }

    //     }
    //     cout<<endl;
    // }

    // half pyramid
    //  for(int row=0;row<5;row++){
    //     for(int col =0;col < row+1;col++){
    //      cout<<"* ";
    //     }
    //     cout<<endl;
    //  }

    // Inverted half pyramid
    //  for(int row = 5;row > 0;row--){
    //      for(int col = 0;col <row;col++){
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //  }

    // Numerical half pyramid
    //   for(int row=0;row<5;row++){
    //     for(int col =0;col < row+1;col++){
    //      cout<<col+1;

    //    }
    //    cout<<endl;
    // }

    // Full pyramid
    //  for(int row = 0;row<5;row++){
    //      //for space
    //      for(int space =row+1;space<5;space++){
    //          cout<<" ";
    //      }
    //      //for star
    //      for(int col = 0 ; col <= row ;col++){
    //           cout<<"* ";
    //      }
    //      //for space
    //      for(int space =row+1;space<5;space++){
    //          cout<<" ";
    //      }
    //      cout<<endl;
    //  }

    // Numerical Full pyramid
    // for(int row = 0;row<5;row++){
    //     //for space
    //     for(int space =row+1;space<5;space++){
    //         cout<<" ";
    //     }
    //     //for star
    //     for(int col = 0 ; col <= row ;col++){
    //          cout<<col+1 ;
    //          cout<<" ";
    //     }
    //     //for space
    //     for(int space =row+1;space<5;space++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // Hollow Diamond
    //   int n;
    //  cin>>n;  //no. of rows

    // for(int row=0; row<n; row++){
    //     for(int col=0;col<n-row-1;col++){
    //       cout<<" ";
    //     }

    //     // stars
    //     for(int col=0; col<2*row+1; col++){
    //         // print * for last or first place

    //         if(col==0){
    //           // First character
    //           cout<<"*";
    //         }
    //         else if(col==2*row){
    //          //Second Character
    //          cout<<"*";
    //         }
    //         else{
    //           cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<n;row++){
    //   // spaces
    //   for(int col=0;col<row;col++){
    //     cout<<" ";
    //   }

    //   //  star

    //   for(int col=0; col<2*n-2*row-1;col++){
    //     if(col==0 ||col == 2*n - 2*row-2){
    //         cout<<"*";
    //     }
    //     else{
    //       cout<<" ";
    //     }
    //   }
    //   cout<<endl;
    // }

    // inner hollow diamond

    // for (int row = 0; row < 5; row++)
    // {
    //     for (int col = 5; col > row; col--)
    //     {
    //         cout << "* ";
    //     }
    //     // print space
    //     for (int space = 0; space < 2 * row; space++)
    //     {
    //         cout << "  ";
    //     }
    //     // for printing star
    //     for (int col = 5; col > row; col--)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // // down portion
    // for(int row=0;row<5;row++){
    //    for (int col = 0; col < row+1; col++)
    //     {
    //         cout << "* ";
    //     } 
         

    //     //space
    //     for(int space=2*row;space<8;space++){
    //         cout<<"  ";
    //     }
    //     //remaining stars
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout << "* ";
    //     } 
    //     cout<<endl;
    // }


    // Hollow inverted half pyramid
    // for(int row=0;row<5;row++){
    //     for(int col=5;col>row;col--){
            
    //         if(row == 1 && col == 4 || row == 1 && col == 3 || row ==2 && col==4){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Flyoid's Triangle
    //       int count = 1;                       
    // for(int row=0;row<6;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<count << " ";
    //     count++;
    //     }
    //     cout<<endl;

    // }

    // int length,breadth;
    // cin>>length;
    // cin>>breadth;

    // cout<<"Area of rectangle is : "<<areaofRectangle(length,breadth);

    // int n;
    // cout<<"Enter the number you want factorial : "<<endl;
    // cin>>n;

    // cout<<factorial(n);

    // int n;
    // cout<<"Enter the number"<<endl;
    // cin>>n;



    // printToNumber(n);

    // reverseInteger(n);

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<5;j++){
    //         if(i==1 && j==0 || i==1 && j==2 || i==1 && j==4 || i==2 && j==0 || i==2 && j==2 || i==2 && j==4){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // int arr[] = {2,3,4,5,6};
    // int size = 5;
    // int find;
    // cout<<"Enter thenumber you want to find :"<<endl;
    // cin>>find;

    // if(findNumber(arr,size,find)){
    //     cout<<"Found"<<endl;
    // }
    // else{
    //     cout<<"Not Found";
    // }


    // cout<<arr[0]<<" "<<arr[1]<<endl;
    // increment(arr);
    // cout<<arr[0]<<" "<<arr[1]<<endl;
    
    // int arr[] = {0,1,0,0,0,1,1,0,1,1,0,1,1};
    // int size = 13;

    // countZeroOnes(arr,size);


    // int arr[] = {4,9,12,4,1,9};
    // int size = 6;

    // cout<<findMax(arr,size);

    // int arr[] = {10,20,30,40,50,60};
    // int size = 6;
    // int start = 0;
    // int end = size - 1;

    // reverseArray(arr,size,start,end);



    // vector<int> arr{1,2,3,4,5};
    // vector<int> brr{6,7,8,9};

    // for(int i=0;i<brr.size();i++){
    //     arr.push_back(brr[i]);
    // }

    // for(int j=0;j<arr.size();j++){
    //     cout<<arr[j]<<" ";
    // }
    // cout<<endl;

    // cout<<brr.empty()<<endl;
    // for(int k=0;k<brr.size();k++){
    //     cout<<arr[k]<<" ";
    // }


   //Intersection of two array/Vectors

//    vector<int> arr{1,3,5,7,9};
//    vector<int> brr{1,2,3,4,5};

//    for(int i=0;i<arr.size();i++){
//     for(int j=0;j<brr.size();j++){
//       if(arr[i] == brr[j]){
//         cout<<arr[i]<<" ";
//       }     
//     }
//    }
//    cout<<endl;



  //Pair Sum
//   vector<int> arr{1,3,5,7};
//   vector<int> brr{2,4,6};

//    for(int i=0;i<arr.size();i++){
//     for(int j=0;j<brr.size();j++){
//       if(arr[i] + brr[j] == 7){
//         cout<<"("<<arr[i]<<","<<brr[j]<<")"<<" ";
//       }     
//     }
//    }
//    cout<<endl;


  //Left rotate an array by one
    // vector<int> arr{1,2,3,4,5};
    

    // int temp = arr[0];
    // for(int i=0;i<arr.size();i++){
    //     arr[i] = arr[i+1];
    // }
    // arr[arr.size() - 1] = temp;

    // for(int j=0;j<arr.size();j++){
    //     cout<<arr[j]<<" ";
    // }


    //Majority element in array
    // vector<int> arr{1,3,2,4,2,3,1,3,2,1,2,1,4,2,3,1,3};



    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Transposea matrix
    // int brr[3][3];
    // int arr[3][3] = {{1,2,3},
    //                  {4,5,6},
    //                  {7,8,9}};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //       brr[i][j] = arr[j][i];
    //     }
    // }

    //printiong the matrix
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //        cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Rotate a matrix by 90deg

    //  int row = 3;
    //  int col=3;
    // int brr[row][col];
    // int arr[row][col] = {{1,2,3},
    //                      {4,5,6},
    //                      {7,8,9}};


    // cout<<"Before rotating the matrix"<<endl;
    // printingAaray(arr,row,col);

    // rotateMatrix(arr,brr,row,col);


    // cout<<"After rotating the matrix"<<endl;
    // printingAaray(brr,row,col);


    //spiral printof a matrix
     //loop 1st for printing the first row
//     for (int i = 0; i < 1; i++)
//     {
//         for(int j=0;j<col;j++){
//            cout<<arr[i][j]<<" ";
//         }
//     }

//     //2nd for printing the last side of column

//     for(int i=row-2;i<row;i++){
//         cout<<arr[i][col-1]<<" ";
//     }

//     //Printing the last down side
    
//     for(int i=row-2;i>=0;i--){
//         cout<<arr[row-1][i]<<" ";
//     }
    
//    //printing the last part of matrix

//   for(int i = 0;i<row-1;i++){
//     cout<<arr[row-2][i]<<" ";
//   }


//Wave print of a matrix

// int row=4;
// int col=4;


// int arr[4][4] =    {{1,2,3,4},
//                     {5,6,7,8},
//                     {9,10,11,12},
//                     {13,14,15,16}};


//     wavePrint(arr,row,col);


//Move negative number a side

// int arr[]= {3,2,-1,5,-7,-2,6};
// int size = sizeof(arr)/sizeof(int);

// for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//         if(arr[i] < arr[j]){
//             swap(arr[i],arr[j]);
//         }
//     }
// }

// for(int i=0;i<size;i++){
//    cout<<arr[i]<<" ";
// }

//sort 0's 1's & 2's

// vector<int> nums{2,0,1};
//  for(int i=0;i<nums.size();i++){
//         for(int j=0;j<nums.size();j++){
//             int temp;
//             if(nums[i] < nums[j]){
//                temp = nums[i];
//                nums[i] = nums[j];
//                nums[j] = temp;
//             }
//         }
//  }   

    //    for(int i=0;i<nums.size();i++){
    //        cout<<nums[i]<<" ";
    //    }

    //find duplicate in array

//     vector<int> arr{ 1,2,3,6,1,3,6};

//      for(int i=0;i<arr.size();i++){
//     for(int j=i+1;j<arr.size();j++){
//         if(arr[i] == arr[j]){
//            cout<<arr[i]<<" ";
//            break;
//         }
//     }
// }

//find missing Number

int nums[] = {3,0,1};
int size = sizeof(nums)/sizeof(int);



    return 0;
}