#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    //solved iterativey not using recusive function
    //testcase -> 7,6,4,3,1
    vector<int> prices = {7,1,5,3,6,4};
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int pos;

    //find minimum price of stock to buy
    for(int i=0;i<prices.size();i++){
        int x = min(mini, prices[i]);
        mini = x;
    }
    //find the day when price of stock is minimum
    for(int i=0;i<prices.size();i++){
        if(prices[i] == mini){
            pos = i;
        }
    }
    // cout<<pos<<endl;
    //finding the maximum price of stock
    for(int i = pos;i<prices.size();i++){
        int y = max(maxi, prices[i]);
        maxi = y;
    }
    //In the end we calculate the maximum profit
    cout<<maxi-mini;
    

    return 0;
}