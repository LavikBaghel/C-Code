#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class MinStack{
    public:
    vector< pair<int, int>> st;

    void push(int data){
        if(st.empty()){
            pair<int, int> p = make_pair(data, data);
            st.push_back(p);
        }
        else{
            pair<int, int> p;
            p.first = data;
            p.second = min(data, st.back().second);
            st.push_back(p);
        }
    }

    void pop(){
        st.pop_back();
    }
 
    int top(){
      return st.back().first;
    }

    int getMin(){
        return st.back().second;
    }

};


int main(){

    MinStack m;

    m.push(2);
    m.push(9);
    m.push(7);
    m.push(4);

    cout<<m.top()<<endl;
    cout<<m.getMin()<<endl;
}