#include<iostream>
using namespace std;

class shape{
    public:
    void area(){
        cout<<"Finding Area";
    }
};
class rectangle:public shape{
      public:
      void area(){
        cout<<"Area of rectangle";
      }
};
class circle:public shape{
    public:
    void area(){
        cout<<"Area of circle";
    }
};


int main(){
   
    shape s;
    rectangle r;
    r.area();
    cout<<endl;
    s.area();



    return 0;
}