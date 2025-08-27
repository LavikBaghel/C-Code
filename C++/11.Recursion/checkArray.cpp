#include<iostream>
using namespace std;

bool checkArray(int arr[], int size, int i){

        if( i == size-1) return true;
        
        if(arr[i] > arr[i+1]){
            return false;
        }
        else{
          checkArray(arr,size,i+1);
        }

}

int main(){

   int arr[] = {10,20,30,40,50};
   int size = sizeof(arr)/sizeof(int);
   int i = 0;

   if(checkArray(arr,size,i)){
    cout<<"Sorted";
   }
   else{
    cout<<"Not sorted";
   }

   
    return 0;
}