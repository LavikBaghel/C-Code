#include<iostream>
using namespace std;

int elementFound(int*arr,int size,int target){
     int start = 0;
     int end = size-1;
     int mid = start + (end-start)/2;

     while (start <= end)
     {
        int element = arr[mid];
        if(target == element){
            return mid;
        }
        else if(target<element){
            end = mid-1;
        }
        else{
            start = mid+1;
           
        }
         mid = start + (end-start)/2;
     }
     return -1;

}


int main(){
 
     int arr[] = {2,4,6,8,10,12,14};
     int size = 7;
     int target = 10;

     int indexFind = elementFound(arr, size, target); 

     if(indexFind == -1){
        cout<<"Target not found"<<" ";
     }
     else{
        cout<<"Target found at "<<indexFind<<" Index"<<endl;
     }

    return 0;
}