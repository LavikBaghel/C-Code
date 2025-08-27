#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(true){
            char curr_ch = 0;
            for(auto str: strs){
                // out of bound
                if(i >= str.size()) {
                    curr_ch  =0;
                    break;
                }
                // started
                if(curr_ch == 0){
                    curr_ch = str[i];
                }
                else if(str[i] != curr_ch){
                    curr_ch = 0;
                    break;
                }
            
           }
            if(curr_ch == 0){
                break;
            }
            ans.push_back(curr_ch);
            i++;
        }
        return ans;
    }

int main(){
 vector<string> strs = {"flower", "flow", "flight"};
  
   cout<<longestCommonPrefix(strs);   
    return 0;
}