#include<iostream>
#include<stdio.h>
using namespace std;

int main(){

//    for(int row=0;row<4;row++){
//     for(int col=0;col<4;col++){
//         if(row==1 && col==1 || row==1 && col==2 || row==2 && col==1 || row==2 && col==2){
//             cout<<"  ";
//         }
//         else{
//             cout<<"* ";
//         }
//     }
//     cout<<endl;
//    }


// for(int row=0;row<5;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//inverted half pyramid
// for(int row=0;row<5;row++){
//     for(int col=5;col>row;col--){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//Numeric half pyramid
// for(int row=0;row<5;row++){
//     for(int col=0;col<row+1;col++){
//         cout<<col+1<<" ";
//     }
//     cout<<endl;
// }

//Full pyramid

    // for(int row=5;row>0;row--){
    //        //space
    //     for(int space=0;space<row-1;space++){
    //         cout<<" ";
    //     }
    //     for(int col=6;col>row;col--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    //Numeric full pyramid

    int n;
    cout<<"Enter the value of n";
    cin>>n;
     
    int count;
    for(int row=0;row<n;row++){
         count = row+1;
        for(int col=1;col<=row+1;col++){
            cout<<count<<" ";
            count++;
            
        }
        if(row!=0)
        for(int reverse=count-2;reverse>row;reverse--){
            cout<<reverse<<" ";
        }
        cout<<endl;
    }



    // hollow full pyramid

    // for(int row=0;row<5;row++){
    //     //space
    //     for(int space=4;space>row;space--){
    //              cout<<" ";
    //     }
    //     for(int col=0;col<=row;col++){
    //         if(row==2 && col==1 || row==3 && col==1 || row==3 && col==2){
    //             cout<<"  ";
    //         }
    //         else{

    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }


    //Hollow Diamond
     //first half
    //  int n;
    //  cout<<"Enter the valur of n"<<endl;
    //  cin>>n;
    //  for(int row=0;row<n;row++){
    //     //space
    //     for(int space=n;space>row;space--){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<=row;col++){
    //         if( col==0 || col==row){

    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
    //     }
    //     cout<<endl;
    //  }

    //  //Second Half
    //  for(int row2=n;row2>0;row2--){
    //     // space
    //     for(int space2=n;space2>=row2;space2--){
    //       cout<<" ";
    //     }
    //     for(int col2=row2;col2>0;col2--){
    //         if(col2==row2 || col2==1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    //  }

    // Flipped Solid Diamond

    //first quater
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col =0;col<n-row;col++){

    //         cout<<"*";
    //     }
    //     for(int space=0;space<2*row;space++){
    //           cout<<" ";
            
    //     }
    //     for(int col =0;col<n-row;col++){

    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // //Second quater
    // for(int row=n;row>0;row--){
    //     for(int col=row;col<=n;col++){
    //         cout<<"*";
    //     }
    //     for(int space=0;space<2*row-2;space++){
    //         cout<<" ";
    //     }
    //     for(int col=row;col<=n;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //Fancy Pattern #2
    // int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<row+1;
    //         if(col!=row){

    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    //  int n;
    // cout<<"Enter the value of n"<<endl;
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     int col=0;
    //     for(;col<row+1;col++){
    //         cout<<col+1;
    //     }
    //     for(int col1=col-1;col1>0;col1--){
    //         cout<<col1;
    //     }
    //     cout<<endl;
    // }

    //Hollow Inverted Half Pyramid
    // int n;
    // cout<<"Enter the value of n";
    // cin>>n;

    // for(int row=0;row<n;row++){
    //     for(int col=n;col>0;col--){
    //         if(row==0 || col==n || row+1==col){

    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Floyd's Triangle Pattern
     
    // int count=1;
    // for(int row=0;row<5;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    return 0;
}