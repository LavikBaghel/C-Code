#include<iostream>
using namespace std;


class Animal{
  private:
  int weight;

  public:
  int age;
  string name;

  void eat(){
    cout<<"Eating"<<endl;
  }
  void sleep(){
    cout<<"sleeping"<<endl;
  }

  int getter(){
    return weight;
  }
  void setter(int w){
    this->weight = w;
  }

};

//Protected
// class Dog : protected Animal{
//    public:
//    void print(){
//     cout<<this->age;
//    }
// };

//Private
class Dog : private Animal{
   public:
   void print(){
    cout<<this->age;
   }
};



int main(){
   
    //static way of creating object
    // Animal avc;
    // avc.age = 14;
    // avc.name = "Lion";
    // cout<<avc.age<<endl;
    // cout<<avc.name<<endl;

    // avc.eat();

    Animal* abc = new Animal;
    (*abc).age = 13;
    cout<<(*abc).age<<endl;
    (*abc).eat();
    abc->eat();
    abc->setter(102);
    cout<<abc->getter()<<endl;

    Dog* d1 = new Dog;
    (*d1).print();

    return 0;
}