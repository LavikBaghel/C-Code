#include<iostream>
using namespace std;

 #define PI 3.14 //Macro
 #define MAXX(x, y) (x > y ? x : y)

float circleArea(float r){
    return PI * r * r;
}

float circlePerimeter(float r){
    return 2 * PI * r;
}

void findMax(){
    int x = 10;
    int y = 23;
    int z = MAXX(x, y);
}

void findMax2(){
    int a = 43;
    int b = 13;
    int c = MAXX(a, b);
}

int main(){

 cout<< circleArea(65.2) << endl;
  return 0;
}