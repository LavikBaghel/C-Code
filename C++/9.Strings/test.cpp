#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;

bool  checkPalidrome(char ch[]){
   int i=0;
    int j=strlen(ch)-1;
    while(i<=j){
        if(ch[i] == ch[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

bool  findInput(string str,string input){
    int i=0;
    int j = str.length() - 1;
    while(i<j){
       if(str == input){
        return true;
    }
    else{
        return false;
    }
    }
    return false;
}


bool palidromCheck(string str, int i,int j){
    while(i<=j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;

    }
    return true;
}

bool validPalidrome(string str){
    int i=0;
    int j=str.size()-1;

    while(i<=j){
        if(str[i]!=str[j]){
            return palidromCheck(str,i+1,j) || palidromCheck(str,i,j-1);
        }
        else{
            i++;
            j--;
           
        }
    }
    return true;
}

void removeAdjacentDuplicate(string str){
    int i=0;
    int j=str.size();
    string ans;

    while(i < j){
        

        if(str[i] != ans[ans.size()-1]){
             ans.push_back(str[i]);
            
        }
        else{
           ans.pop_back();
        }
        i++;
        
    }
   cout<<ans;
    
}


string removeAllOcurrence(string str,string part){

int pos;
       pos = str.find(part);

   while(pos != string::npos){
      str.erase(pos, part.length());
      pos = str.find(part);
   }
   return str;
}    


int main(){
 

//  1.length of a character array => we can use strlen() function
//    char ch[] = "cde";
//    int count = 0;
//    int i=0;
//    while(ch[i] != '\0'){
//            i++;
//    }
//    cout<<i;

// 2.upperCase and Lowercase
  
    // char ch[] = "ABC";
    // int i=0;
    // while(ch[i] != '\0'){
    //     // ch[i] = ch[i] - 'a' + 'A';   //for uppercase
    //     ch[i] = ch[i] - 'A' + 'a';      //for lowercase
    //     cout<<ch[i];
    //     i++;
    // }


    //3.reverse a character 
    // char ch[] = "hello";

    // int i=0;
    // int j = strlen(ch)-1;
    // while(i<=j){
    //     swap(ch[i], ch[j]);
    //     i++;
    //     j--;
    // }
    // cout<<ch;

    //4. Replace a special character with space;
    // char ch[100];
    // cin.getline(ch,20);
    // char space = '32';
    // char atRate = '64';
    
    // for(int i=0;i<strlen(ch);i++){
    //     if(ch[i] == ' '){
    //         ch[i] = '@';
    //     }
    // }
    // cout<<ch;

    // 5. chech given character is palidrome or not
    // char ch[] = "absba";
    // if(checkPalidrome(ch)){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }

    /*  Strings  */
    //1. find the input string and tell it present or not

    // string str = "hello i am unknown identity";
    // cout<<"Enter the value you want to search/find"<<endl;
    // string input;
    // getline(cin,input);
    
    // if(findInput(str, input)){
    //     cout<<"Found";
    // }
    // else{
    //     cout<<"Not found";
    //  }

    // 3. Valid Palidrome

    // string str = "abcca";
    // cout<<validPalidrome(str);



// 4. remove adjacent duplicate 
//     string str = "abbaca";
   

//     removeAdjacentDuplicate(str);
   



//   4. remove all occurence of substring

   string str = "daabcbaabcbc";
   string part = "abc";

   cout<<removeAllOcurrence(str, part);
   
    
       


    

    return 0;
}