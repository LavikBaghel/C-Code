#include<iostream>
using namespace std;
 
class car{
   public :
    int age;
    string name;

   void speed(){
    cout<<"Faster than a light year";
   }
     
};

class hyundai :public car{

};


int main(){

  car c1;
//   cout<<c1.age;
  hyundai h1;
  h1.speed();
  cout<<endl<<h1.age;
 
    return 0;
}
