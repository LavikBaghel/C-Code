#include<iostream>
#include <cmath>
using namespace std;



// Find Max number
// void maxNum(int a,int b){
//     if(a<b){
//         cout<<"max number is: "<<b<<endl;
//     }
//     else{
//         cout<<"max number is: "<<a<<endl;
//     }
// }
       
 // sum of even Number upto N
    //  int printEnum(int n){
    //     for(int i=2;i<=n;i+=2){
    //           cout<<i<<endl;
    //     }
    //     return 0;
    //  }

     // print all  prime number from 1 to N
    
    //  void oddEvenNum(int a){
    //    if(a%2==0){
    //     cout<<"Even";
    //    }
    //    else{
    //     cout<<"Odd";
    //    }
    // }

    // void fact(int n){
    //     int factorial =1;
    //     for(int i=1;i<=n;i++){
    //         factorial *= i;
    //     }
    //     cout<<factorial;
    // }


    // void prime(int num){
    //     for(int n=2;n<num-1;n++){
            
    //         if( num%n==0 ){
    //             cout<<"Not a prime number";
    //             break;
    //         }
    //        else{
    //            cout<<"Prime Number";
    //           break;
    //         }
    //     }
    // }

    
    // bool checkPrime(int n){
    //     int i=2;
    //     for(int i=2;i<n;i++){
    //         if( n%i==0 ){
    //            return false;
    //         }
    //     }
    //     return true;
    // }

// int decimalToBinary(int n){
//     //Division method
//     int binaryno = 0;
//     int i=0;
//     while(n>0){
//       int bit = n % 2;
//       binaryno = bit*pow(10, i++) + binaryno;
//       n = n / 2;
//     }
//     return binaryno;
// }


    int reverse(int x){
        int ans = 0;
        int rem = 0;

        bool isNeg=false;
        if(x <= INT8_MIN){
            x = -x;
        }
        if(x <0){
            isNeg =true;
            x = -x;
        }
       
        while(x>0 || x<0){
           if(ans > INT8_MAX / 10){
            return 0;
           }
            int digit = x % 10;
            ans = ans * 10 + digit;
            x = x/10;
        }
        return isNeg ? -ans : ans;
    }

int main(){
    // cout<<"hello"<<endl;
   
    // Find Max number
    //  maxNum(a,b);
    

    // sum of even Number upto N
    //  int n;
    //  cout<<"Enter the value of n: ";
    //  cin>>n;

    //  printEnum(n);
    //  oddEvenNum(n);
    //  fact(n);
    // prime(n);
         
    
    int n;
    
    // int l;
    cout<<"Enter the value of num: ";
     cin>>n;
   
    // for(int i=1;i<=n;i++){
    //     bool isPrime = checkPrime(i);
    //     if(isPrime){
    //         cout<<i<<" ";
    //     }
   // }
      
    //   print decimal to binary
    // int binary = decimalToBinary(n);

    // cout<<binary<<endl;


    cout<<reverse(n);
     
}



