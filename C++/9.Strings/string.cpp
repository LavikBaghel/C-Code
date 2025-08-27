#include<iostream>
#include<string>
using namespace std;

int main(){
    //  concatenation of two strings
    string firstName = "Lavik";
    string LastName = "Baghel";
    // string fullName = firstName + " " + LastName;
    // cout<<fullName<<endl;
    // Append function
    string fullName = firstName.append(" " + LastName);
    cout<<fullName<<endl;   

    // Length and size of string
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length()<<endl;  
    cout << "The length of the txt string is: " << txt.size()<<endl;
    
    // use of special character with the help of escape operator
    string str = "We are \"VIKING\" of the north";
    cout<<str<<endl;

    // Push_back -> to add character in string
    fullName.push_back('L');
    cout<<fullName<<endl;
    // pop_back -> to remove a character in string
    fullName.pop_back();
    cout<<fullName<<endl;

    // insert
    string str1 = "Hello";
    fullName.insert(6, str1);
    cout<<fullName<<endl;

    // Substring
    string str3 = "QWDFG HMasd rtyhbv";
    string str2 = str3.substr(2,6);
    // get the small part of string
    cout<<str2<<endl;
    //find the size of givinf string
    cout<<str3.find("HMasd")<<endl;;

    // replace
    string oz = "This is my workspace";
    string noz = "Playground";
    oz.replace(11,9,noz);
    cout<<oz<<endl;
    return 0;
}