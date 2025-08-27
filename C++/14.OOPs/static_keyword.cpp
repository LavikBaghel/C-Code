#include<iostream>
using namespace std;

class abc{
    public:
    static int x, y;

    void fun(){
        cout<<x<<","<<y<<endl;
    }
};

int abc::x;
int abc::y;

int main(){
    abc obj1;
    obj1.x = 1;
    obj1.y = 2;

    obj1.fun();

    abc* obj2;
    (*obj2).x = 4;
    obj2->y = 5;
    obj2->fun();
    obj1.fun();

    return 0;
}