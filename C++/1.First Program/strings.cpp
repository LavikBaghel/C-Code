#include<iostream>
#include<string>
#include<string.h>
#include<strings.h>
#include <vector>
using namespace std;

int getLength(char ch[]){
    int length=0;
    int i = 0;

     while(ch[i] != '\0'){
        length++;
        i++;
    }
    return length;
}

void reverse(char name[]){
    int length = strlen(name)-1;
    int i =  0;

    while(i<length){
        int temp;
        temp = name[i];
        name[i] = name[length];
        name[length] = temp;
        i++;
        length--;
    }
    cout<<name;

}

void replaceSpace(char name[]){
    int length = strlen(name);
    int i=0;

    while(i<length){
      if(name[i] == ' '){
         name[i] = '@';
         i++;
      }
      else{
        i++;
      }
    }
    cout<<name;
}

bool checkPalindrome(char name[]){
    int i = 0;
    int length = strlen(name)-1;

    while(i<=length){
      if(name[i] == name[length]){
        i++;
        length--;
      }
      else{
        return false;
      }
    }
    return true;
}

void convertIntoUpperCase(char name[]){
    int i = 0;
    int length = strlen(name);

    while(i<length){
        if(name[i] == ' '){
            i++;
        }
        name[i] = name[i] - 'a' + 'A';
        i++;
    }
    cout<<name;
}
void convertIntoLowerCase(char name[]){
    int i = 0;
    int length = strlen(name);

    while(i<length){
        if(name[i] == ' '){
            i++;
        }
        name[i] = name[i] - 'A' + 'a';
        i++;
    }
    cout<<name;
}

string removeAdjacentDuplicate(string str){
    int i = 0;

    while(i<str.length()){
        if(str[i] == str[i+1]){
            str.erase(i, 2);
            i=0;
        }
        else{
            i++;
        }
    }
    return str;
}
string removeAllSubStringOccurence(string s, string part){
    int length = part.length();
        while(true){
           int occurence = s.find(part);
           if (occurence==std::string::npos){
            return s;
           }
           else{
            s.erase(occurence, length);
           }
        }
        return s;
}

bool checkPalindrome(string str){
    int i = 0;
    int end = str.length()-1;
    while(i<=end){
        if(str[i] == str[end]){
            i++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
bool validPalindrome(string str){
    int i = 0;
    string demo = str;
    while(i<=str.length()){
        if(checkPalindrome(demo)){
            return true;
        }  
        else{
            demo = str;
            demo.erase(i, 1);
            i++;
        }
    }
    return false;
}

string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        cout<<"Fn start";

        int i = 0;
        while(i<strs[0].size() && i<strs[1].size() && i<strs[2].size()){
            if(strs[0][i] == strs[1][i] == strs[2][i]){
                s.push_back(strs[0][i]);
                i++;
            }
            else{
                return s;
            }
        }
        return s;
}
int main(){

    // char ch[20];
    // cin>>ch;
    // // cin.getline(ch, 20);
    // cout<<getLength(ch);


    // char name[20];
    // cin.getline(name, 20);

    // reverse(name);

    // char name[20];
    // cin.getline(name, 20);
    // replaceSpace(name);

    // char name[20];
    // cin.getline(name, 20);
    // if(checkPalindrome(name)){
    //     cout<<"Yes Palindrome";
    // }
    // else{
    //     cout<<"Not a Palindrome";
    // }

    // char name[20];
    // cin.getline(name, 20);
    // convertIntoUpperCase(name);

    // char name[20];
    // cin.getline(name, 20);
    // convertIntoLowerCase(name);

    // string str;
    // getline(cin, str);
    // cout<<str<<endl;
    // cout<<str.length()<<endl;
    // cout<<str.size();

    // string str;
    // getline(cin, str);

    // cout<<removeAdjacentDuplicate(str);

    // string str = "daabcbaabcbc";
    // string part = "abc";
    // cout<<removeAllSubStringOccurence(str, part);


    // string str;
    // getline(cin, str);

    // if(validPalindrome(str)){
    //     cout<<"True";
    // }
    // else{
    //     cout<<"False";
    // }


    // vector<string> strs = {"flower","flow","flight"};
    // cout<<longestCommonPrefix(strs);

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int * ptr = &arr[0];

    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    cout<<arr;
   
    
    return 0;
}