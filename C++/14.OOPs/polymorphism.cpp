#include<iostream>
using namespace std;

class problemSolver{
    public :
    int sum(int a, int b){
        return a+b;
    }

    int sum(int a, int b, int c){
        return a+b+c;
    }

    int sum(int a, float b){
        return a+b;
    }
};

int main(){

   problemSolver obj;

   cout<<obj.sum(2,3)<<" "<<obj.sum(1,2,3)<<" "<<obj.sum(2,2.3f)<<endl;


   return 0;
}