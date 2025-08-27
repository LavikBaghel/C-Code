#include<iostream>
using namespace std;

void quickSort(int a[], int start,int end){
    if(start >= end){
        return;       
    }
    int pivot = end;
    int i = start - 1;
    int j = start;

    while(j < pivot){
        if(a[j] < a[pivot]){
            ++i;
            swap(a[i],a[j]);
        }
        ++j;
    }
    ++i;
    swap(a[i],a[pivot]);
    quickSort(a,start,i-1);
    quickSort(a,i+1,end);
}

int main(){

   int a[] = {4,1,3,9,7};
   int size = sizeof(a)/sizeof(int);
   int start = 0;
   int end = size - 1;

   quickSort(a,start,end);

   for(auto value: a){
    cout<<value<<" ";
   }

    return 0;
}