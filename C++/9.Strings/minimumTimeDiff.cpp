// Solve 539 on  leetcode

#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<limits.h>
#include<vector>
using namespace std;

int minimumTimeDifference(vector<string>&timePoints){
     vector<int> minutes;
     for(int i=0;i<timePoints.size();i++){
         string curr = timePoints[i];
         int hours = stoi(curr.substr(0,2));
         int min = stoi(curr.substr(3,2));
         int totalMinutes =  hours * 60 + min;
         minutes.push_back(totalMinutes);

     }
    //  sort
       sort(minutes.begin(), minutes.end());

    // check allm the difference
      int mini = INT_MAX;
      int n = minutes.size();
      for(int i=0;i<n-1;i++){
          int diff = minutes[i+1] - minutes[i];
          mini = min(mini,diff);
      }
      int lastDiff = (minutes[0]+1440) - minutes[n-1];
      mini = min(mini, lastDiff);
      return mini;
      
}
int main(){

    vector<string> timePoints = {"23:59","00:00"};
    cout<<minimumTimeDifference(timePoints);

    return 0;
}
