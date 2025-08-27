#include<iostream>
using namespace std;

int main(){
                           // Study Pattern

      //1.Solid Cube Pattern
    //outer loop
//       for(int row=0; row<3; row++){
//     inner loop
//         for(int col=0; col<4;col++){
//              cout<<"* ";
//           }
//       cout<<endl;
//    }
 
            // 2.Hollow Rectangle   

    // for(int row=0;row<3;row++){
    //     for(int col=0;col<6;col++){
    //         if(row==1 && col==1 || row==1 && col==2 || row==1 && col==3 || row==1 && col==4 ){
    //             cout<<"  ";
    //         }
    //         else{
    //             cout<<"* ";  }          
    //     }
    //     cout<<endl;
    // }

       
    //    3.Half pyramid

    // for(int row=0;row<6;row++){
    //    for(int col=0;col<6;col++){
    //     if(row==0 && col==0){
    //         cout<<"* ";    //extra space for nice view
    //     }
    //     else if(row==1 && col==0 || row==1 && col==1){
    //         cout<<"* ";   //extra space for nice view
    //     }
    //     else if(row==2 && col==0 || row==2 && col==1 || row==2 && col==2){
    //         cout<<"* ";  //extra space for nice view
    //     }
    //     else if(row==3 && col==0 || row==3 && col==1 || row==3 && col==2 || row==3 && col==3){
    //         cout<<"* ";  //extra space for nice view
    //     }
    //     else if(row==4 && col==0 || row==4 && col==1 || row==4 && col==2 || row==4 && col==3 || row==4 && col==4){
    //         cout<<"* ";  //extra space for nice view
    //     }
    //     else if(row==5 && col==0 || row==5 && col==1 || row==5 && col==2 || row==5 && col==3 || row==5 && col==4 || row==5 && col==5){
    //         cout<<"* ";  //extra space for nice view
    //     }
    //     else{
    //         cout<<" ";
    //     }
        
    //    }
    //    cout<<endl;
    // }




        //  4.Half Numeric Pyramid

//    int r; //no. of rows
//    cout<<"Enter the number of rows: ";
//    cin>>r;

//    for(int row=0;row<r;row++){
//       for(int col=0;col<row+1;col++){
//           cout<<col+1;
//       }
//       cout<<endl;
//    }


          //5.Reverse half pyramid
      
//      int r; //no. of rows
//    cout<<"Enter the number of rows: ";
//    cin>>r;
//    int c; //no. of column
//    cout<<"Enter the number of column: ";
//    cin>>c;

//    for(int row=0;row<r;row++){
//       for(int col=0;col<c-row;col++){
//           cout<<col+1;
//       }
//       cout<<endl;
//    }


    //  6.Full pyramid

  // for(int row=0;row<5;row++){
  //   for(int space=5;space>row;space--){
  //       cout<<" ";     
  //   }
  //   for(int star=0;star<=row;star++){
  //       cout<<"* ";
  //      } 
    
  //   cout<<endl;
  // }


              // 7. Hollow Diamonds

    // int n;
    // cin>>n;  //no. of rows

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



                //  8.Flliped solid Diamond

    // for(int row=0;row<5;row++){
      
    //   for(int i=0;i<2;i++){
    //     // star
    //        for(int star=0;star<5-row;star++){
    //       cout<<"*";
    //      }
    //      //space
    //      for(int space=0;space<row+1;space++){
    //             cout<<"  ";
    //      }
    //   }
    //    cout<<endl; 
    // }        

    // //another half portion
    // for(int row=0;row<5;row++){
      
    //   for(int i=0;i<2;i++){
    //     // star
    //        for(int star=0;star<row+1;star++){
    //       cout<<"*";
    //      }
    //      //space
    //      for(int space=0;space<5-row;space++){
    //             cout<<"  ";
    //      }
    //   }
    //    cout<<endl; 
    // }      


      // 9. Fancy Numeric Pattern

    // for(int row=0; row<4;row++){
    //     for(int col=0;col<row+1;col++){
    //       cout<<row+1;
    //       if(col != row){
    //         cout<< "*";
    //       }
    //     }
    //     cout<<endl;
    // }
    // // Half portion
    // for(int row=0; row<4;row++){
    //     for(int col=0;col<4-row;col++){
    //       cout<<4-row;
    //       if(col != 4-row-1){
    //         cout<< "*";
    //       }
    //     }
    //     cout<<endl;
    // }


    // 10. Fancy Reverse Numeric Pattern

    // for(int row=0;row<5;row++){
    //     int col;
    //     for(col=0;col<row+1;col++){
    //       cout<< col + 1;
    //     }
    //     col= col-1;
    //       // Reverse counting printing
    //       for(; col>=1; col--){
    //         cout<< col;
    //       }
    //     cout<<endl;
    // }

    // Increment & Decrement
    // int a =5;
    // cout << (++a) * (++a);

    // for(int i=0;i<6;i++){
    //   for(int j=0;j<i+1;j++){
    //     cout<<"* ";          //Half pyramid
    //   }
    //   cout<<endl;
    // }

    // for(int i=6;i>0;i--){
    //   for(int j=0;j<i+1;j++){       //inverted half pyramid
    //     cout<<"* ";
    //   }
    //   cout<<endl;
    // }


    // for(int i=1;i<=6;i++){
    //   for(int j=1;j<=i+1;j++){
    //     cout<<j<<" ";          //Half numeric pyramid
    //   }
    //   cout<<endl;
    // }


  //     for(int row=0;row<5;row++){
  //   for(int space=5;space>row;space--){
  //       cout<<" ";                          
  //   }                                       //Solid Diamond
  //   for(int star=0;star<=row;star++){
  //       cout<<"* ";
  //      } 
                   
  //   cout<<endl;
  // }
  //  for(int row=0;row<5;row++){
  //   for(int space=0;space<=row;space++){
  //       cout<<" ";     
  //   }
  //   for(int star=5;star>row;star--){
  //       cout<<"* ";
  //      } 
    
  //   cout<<endl;
  // }

      
      //Flipped solid Diamond
   
  //  for(int row=0;row<5;row++){
  //   for(int col=0;col<=5-row;col++){
      
  //     if(row==0 && col==5 || row==1 && col==4 || row==2 && col==3 || row==3 && col==2 || row==4 && col==1){
  //       for(int space=0;space<2*row+1;space++){
  //                 cout<<" ";
  //       } 
  //    }
  //     else{
  //       cout<<"*";
  //      } 

  //   } 
  //    for(int n=0;n<5-row;n++){
  //     cout<<"*";
  //    } 
    
  //    cout<<endl;
  //   //spaces
    
  //  }


  //   for(int row=0;row<5;row++){
  //   for(int col=0;col<=row+1;col++){
      
  //     if(row==0 && col==1 || row==1 && col==2 || row==2 && col==3 || row==3 && col==4 || row==4 && col==5){
  //       for(int space=10;space>2*row+1;space--){
  //                 cout<<" ";
  //       } 
  //    }
  //     else{
  //       cout<<"*";
  //      } 

  //   } 
  //    for(int n=0;n<row+1;n++){
  //     cout<<"*";
  //    } 
    
  //    cout<<endl;
  //   //spaces
    
  //  }

    //  Fancy pattern-2

    // for(int row=1;row<5;row++){
    //   for(int col=1;col<row+1;col++){
    //     cout<<row;
    //     if(col!=row){
    //       cout<<"*";
    //     }
    //   }
    //   cout<<endl;
    // }

    //  for(int row=4;row>0;row--){
    //   for(int col=0;col<row;col++){
    //     cout<<row;
    //     if(col != row-1){
    //       cout<<"*";
    //     }
    //   }
    //   cout<<endl;
    // }



      // Number Palindrome pyramid

      // for(int row=0;row<5;row++){
      //   for(int col=0;col<row+1;col++){
      //     cout<<col+1;
      //   }
      //   for(int reverse=row;reverse>0;reverse--){
      //     cout<<reverse;
      //   }
      
      //   cout<<endl;
      // }


      // Hollow Square

      // for(int row=0;row<6;row++){
      //   for(int col=0;col<6;col++){
      //     if(row==0 || row==5){
      //       cout<<"* ";
      //     }
      //     else if(col==0 || col==5){
      //       cout<<"* ";
      //     }
      //     else{
      //       cout<<"  ";
      //     }
      //   }
      //   cout<<endl;
      // }


         

      // Hollow inverted half pyramid

      // for(int row=0;row<5;row++){
      //   for(int col=5;col>row;col--){
      //   if(row==0 || col==5 || col==row+1){
      //     cout<<"* ";
      //   }
      //   else{
      //     cout<<"  ";
      //   }
      //   }
      //   cout<<endl;
      // }  


  

      //  Hollow half pyramid

      // for(int row=0;row<5;row++){
      //   // space
      //   for(int space=4;space>row;space--){
      //     cout<<" ";
      //   }
      //   for(int col=0;col<row+1;col++){
      //     if(col==0 || col==row || row==4){
      //       cout<<"* ";
      //     }
      //     else{
      //       cout<<"  ";
      //     }
      //   }
      //   cout<<endl;
      // }


      // Numeric hollow half pyramid

      // for(int row=0;row<5;row++){
      //   for(int col=0;col<row+1;col++){
      //      if(col==0 || col==row || row==4){
      //       cout<<col+1<<" ";
      //     }
      //     else{
      //       cout<<"  ";
      //     }
      //   }
      //   cout<<endl;
      // }



          

      // numeric palidrome equilateral pyramid

      // for(int row=0;row<5;row++){
      //   // space
      //   for(int space=4;space>row;space--){
      //     cout<<"  ";
      //   }
      //  for(int col=0;col<row+1;col++){
      //   cout<<col+1<<" ";
      //  }
      //  for(int reverse=row;reverse>0;reverse--){
      //     cout<<reverse<<" ";
      //   }
       
      //  cout<<endl;

      // }


       //Fancy Pattern #2

      //  for(int row=0;row<5;row++){

      //   //start
      //   for(int star=0;star<5+3-row;star++){
      //     cout<<"*";
      //   }
      //   //Numbers
      //   for(int num =0;num<row+1;num++){
      //     cout<<row+1<<"*";
      //   }
      //   //start
      //   for(int star=0;star<5+2-row;star++){
      //     cout<<"*";
      //   }
        
      //   cout<<endl;
      //  }



      // Solid Half Diamond

      // for(int row=0;row<5;row++){
      //   for(int col=0;col<row+1;col++){
      //       cout<<"*";
      //   }
        
      //    cout<<endl;
      // }
      // for(int row=0;row<4;row++){
      //   for(int col=4;col>row;col--){
      //       cout<<"*";
      //   }
        
      //    cout<<endl;
      // }


      
      //  Fancy Pattern #3

    //   for(int row=0;row<4;row++){

    //     // number
    //     for(int num=0;num<row+1;num++){
    //       if(row==0 || num==0){
    //         cout<<"*";
    //       }
    //       else{
    //         cout<<num;
    //       }
    //     }
    //     for(int reverse=row-1;reverse>0;reverse--){
  
    //           cout<<reverse;  
    //     }
    //     for(int lastStar=row;lastStar<row+1;lastStar++){
    //           if(row==0){
    //             break;
    //           }
    //           else{
    //              cout<<"*";
    //           }
    //     } 
    //     cout<<endl;
    //   }



    //   // remaing part
    //  for(int row=3;row>0;row--){
          
    //         for(int num=0;num<row+1;num++){
    //       if(num==0){
    //         cout<<"*";
    //       }
    //       else{
    //         cout<<num;
    //       }
    //     }
    //     for(int reverse=row-1;reverse>0;reverse--){
  
    //           cout<<reverse;  
    //     }
          

    //     // Last star
    //     for(int lastStar=row;lastStar<row+1;lastStar++){
    //           if(row==0){
    //             break;
    //           }
    //           else{
    //              cout<<"*";
    //           }
    //     } 
    //       cout<<endl;
    //  }
      



      //Fancy Pattern #2
      // int count =1;
      // for(int row=0;row<4;row++){
        
      //   for(int col=0;col<row+1;col++){
      //     cout<<count++;
      //   if(col!=row){
      //     cout<<"*";
      //    }             
      //  }
      //   cout<<endl;
      // }
                                                        
      // // reverse part
      // int count2=1;
      // int count3 = 7;
      // int count4 = 4;
      // int count5 = 2;
      // for(int row=4;row>0;row--){
        
      //   for(int col=0;col<row;col++){
         
      //     if(row==4){
      //       cout<<count3++;
      //     }
      //     if(row==3){
      //       cout<<count4++;
      //     }
      //     if(row==2){
      //       cout<<count5++;
      //     }
      //     if(row==1){ 
      //       cout<<count2;
      //     }
      //     // cout<<count2++;
      //   if(col!=row-1){
      //     cout<<"*";
      //    }             
      //  }
      //   cout<<endl;
      // }



      // Floyd's Triangle Pattern
      //    int num=1;
      // for(int row=0;row<7;row++){
      //   for(int col=0;col<row+1;col++){
      //     cout<<num++<<" ";
      //   }
      //   cout<<endl;
      // }



      // Pascal's Triangle Pattern

      // int n;
      // cin>>n;
      // for(int i=1;i<=n;i++){
      //   int C=1;
      //   for(int j=1; j<=i;j++){
      //     cout<<C<<" ";
      //     C = C * (i - j)/ j;
      //   }
      //   cout<<endl;
      // }


      
      //Butterfly Pattern

      for(int row=0;row<5;row++){
        for(int col=0;col<row+1;col++){
          cout<<"*";
        }
        // space
        for(int space=0;space<(8-2*row);space++){
          cout<<" ";
        }
        // another star pattern
        for(int col=0;col<row+1;col++){
          cout<<"*";
        }
        cout<<endl;
      }

      // Down pattern
      for(int row=0;row<5;row++){
        for(int col=5;col>row;col--){
          cout<<"*";
        }
        // space
        for(int space=0;space<(2*row);space++){
          cout<<" ";
        }
        // another star pattern
        for(int col=5;col>row;col--){
          cout<<"*";
        }
        cout<<endl;
      }
      






}
   