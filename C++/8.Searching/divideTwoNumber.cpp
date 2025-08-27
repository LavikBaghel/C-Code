#include<iostream>
#include<limits.h>
using namespace std;

int twoNumberDivide(int dividend, int divisor){
     int start = 0;
     int end = abs(dividend);
     int mid = start + (end-start)/2;
     int ans = 0;
    while(start<=end){
     if(abs(mid*divisor) == abs(dividend)){
          ans = mid;
           break;
            
     }
     if(abs(mid*divisor) < abs(dividend)){
            start = mid+1;
            ans = mid;
     }
     if(abs(mid*divisor) > abs(dividend)){
            end = mid-1;
     }
        mid = start + (end-start)/2;
 }
     
    //  for negative ans
     if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
        return ans;
     }
     else{
        return -ans;
     }
     
}

int main(){

    int dividend;
     cout<<"Enter the value of dividend: ";
     cin>>dividend;
    cout<<"Enter the value of divisor: ";
    int divisor;
    cin>>divisor;
    int ans = twoNumberDivide(dividend, divisor);
    cout<<ans;
    return 0;
}