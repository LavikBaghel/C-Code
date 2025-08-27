#include<iostream>
using namespace std;

float findSquare(float n){
    int start = 0;
    int end = n;
    int mid = start + (end-start)/2;
    int ans;
    while(start<=end){
        if(mid*mid == n){
            return mid;
        }
        if(mid*mid>n){
             end = mid-1;
        }
        else{           
            ans = mid;
            start = mid+1;
        }
       mid =  start + (end-start)/2;
    }
    return ans;
}

int main(){

    int n;
    cout<<"enter the number: ";
    cin>>n;
    
    float ans = findSquare(n);
    cout<<ans<<endl;
    int precision;
    cout<<"Enter the number of floating digits in precision "<<endl;
    cin>>precision;

   double step = 0.1;

   for(double i=0;i<precision;i++){
    for(double j=ans;j*j<=n;j=j+step){
        ans = j;
    }
    step = step/10;
   }
   cout<<ans;

    return 0;
}