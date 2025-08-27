#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> array = {1,2,6,3,6,3,1};
    int size = array.size();
    
    for(int i=0;i<size;i++){
        int element = array[i];
        for(int j=size;j>0;j--){
            if(i == j){
                break;
            }
            if(element == array[j]){
                
                cout<<element<<" ";
               
            }
        }

    }
    
   
    return 0;
}