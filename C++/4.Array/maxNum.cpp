#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    
   int arr[] = {23,76,32,87,45,62,73};
   int size = 7;
     int max=INT_MIN;
    for(int i=0;i<size;i++){
          if(max<arr[i]){
               max = arr[i];
          }
    }
    cout<<"Maximum Number in this Array is: "<<max<<endl;
   
    return 0;
}