#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;

int findDuplicate(int arr[],int size){
   for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j] && i != j){
                return arr[i];               
            }
        }
    }
}

int findFirstOccurenece(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    int element;
    while(start<=end){
        if(arr[mid] == target){
            element = mid;
            end = mid - 1;
        }
        if(arr[mid] > target){
            end = mid -1;

        }
        if(arr[mid] < target){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return element;
}

int findMissingElement(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid] == mid+1){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return mid+1;
}

//////////Wrong Code
// int missingNumber(vector<int> arr,vector<int> brr){
//    for(int i=0;i<arr.size();i++){
//         for(int j=1;j<=arr.size();j++){
//             if(arr[i] != j){
//                 return j;           
//             }
//         }
//     }
// }
// void transposeMatrix(int arr[][3],int row,int col, int transpose[][3]){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;col++){
//            transpose[j][i] = arr[i][j]; 
//         }
//     }
// }

//printing
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<transpose[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

//    int findKClosestElement(vector<int> arr,int k,int x){
//     int l = 0;
//     int h = arr.size() - 1;

//     while(h-l >= k){
//         if(x - arr[l] > arr[h] - x){
//             l++;
//         }
//         else{
//             h--;
//         }
//     }
//     for(int i=l;i<=h;i++){
//         cout<<arr[i]<<" ";
//     }
    
//    }

  bool evenNumber(int arr[],int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    cout<<count<<endl;
    if(count % 2 == 0){
        return true;
    }
    else{
        return false;
    }
  }

void findMissingNumber(vector<int> arr,vector<int> brr){

  int last = arr[arr.size()-1];
  for(int i=arr[0];i<=last;i++){
    brr.push_back(i);
  }

  for(int i=0;i<arr.size();i++){
    for(int j=0;j<brr.size();j++){
      if(arr[i] == brr[j]){
        
        brr.erase(brr.begin()+j);
      }
    }
  }
  for(auto value : brr){
    cout<<value<<" ";
  }

}

void reverseString(char ch[],int count){
    int i=0;
    int j = count-1;

    while(i <= j){
    char temp;
    temp = ch[i];
    ch[i] = ch[j];
    ch[j] = temp;
    i++;
    j--;
    }
    cout<<ch;

}

// bool checkPalindrome(char ch[], int size){
//     int i = 0;
//     int j = size - 1;

//     while(i<=j){
//         if(ch[i] != ch[j]){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }

bool checkPalindrome(string str, int i, int j){

    while(i<=j){
        if(str[i] != str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string str){
     int i = 0;
     int j = str.length()-1;

     while (i <= j)
     {
        if(str[i] == str[j]){
            i++;
            j--;
        }
        if(str[i] != str[j]){
            return checkPalindrome(str, i+1, j) || checkPalindrome(str, i, j-1);
        }
     }
     
}

int findFactorial(int n){
    if(n>1) return n * findFactorial(n-1);
    else{
        return 1;
    }
    
}

int fibonaaciSeries(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    return fibonaaciSeries(n-1) + fibonaaciSeries(n-2);
    cout<<endl;
    cout<<n;
}

void fun(int n){
    if(n==0){
     return;
    }
    fun(n-1);
    cout<<n<<" ";
    
    
}

int main(){
    
    // for(int row=0;row<4;row++){
    //     for(int col=0;col<4;col++){
    //         if(row==0 || row==3 || col==0 || col==3){
    //         cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    //  for(int row=0;row<4;row++){
    //     for(int col=0;col<=row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<4;row++){
    //     for(int col=4;col>row;col--){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cout<<"Enter the number of n: ";
    // cin>>n;
    // for(int row=0;row<5;row++){
    //     for(int col=0;col<=row;col++){
    //         if(col==0 || col== row || row == 4){
    //         cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<5;row++){
    //     for(int col=5;col>row;col--){
    //         if(col==5 || col == row+1 || row == 0){
    //         cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

        
    //     for(int row=0;row<4;row++){
    //         //space
    //     for(int space=4;space>=row;space--){
    //         cout<<" ";
    //     }
        
    //     //star
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } 


    // int num = 123;
    // int ans = 0;
    // while(num>0){

    // int rem = num % 10;
    // ans = ans * 10 + rem;
    // num = num/10;
    // }
    // cout<<ans;

    // int arr[] = {0,0,1,0,1,1,1,0,0};
    // int size = sizeof(arr)/sizeof(int);
    // int countzero = 0;
    // int countone = 0;

    // for(int i=0;i<size;i++){
    //   if(arr[i] == 0){
    //     countzero++;
    //   }
    //   else if(arr[i] == 1){
    //     countone++;
    //   }
    // }
    // cout<<"Total Zeros are :"<<countzero<<endl;
    // cout<<"Total Ones are :"<<countone;

    // int arr[] = {2,12,4,3,5,78,6,7};
    // int size = sizeof(arr)/sizeof(int);
    // int maxi = INT16_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //     if(maxi < arr[i]){
    //         maxi = arr[i];
    //     }
    // }
    // cout<<"MAX number is: "<<maxi;

    //Extream Print
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    // int size = sizeof(arr)/sizeof(int) - 1;

    // for(int i=0;i<=size;i++){
    //     cout<<arr[i]<<" ";
    //     cout<<arr[size--]<<" ";
    // }

//    vector<int> arr{1,2,4,2,1,3,6,5,5,6,4};
//     int ans =0;
//     for(int i=0;i<arr.size();i++){
//         ans = ans ^ arr[i];
//     }
//     cout<<ans;

    //  vector<int> arr{1,3,5,7};
    //  vector<int> brr{2,4,6};

    //  int sum = 9;

    //  for(int i=0;i<arr.size();i++){
    //  for(int j=0;j<brr.size();j++){
    //     if(arr[i]+brr[j]==sum){
    //         cout<<"("<<arr[i]<<","<<brr[j]<<")"<<" ";
    //     }
    //  }
    //  }

    //sort 0's & 1's
    // vector<int> arr{1,0,1,0,1,0,1,0,1};
    // int start = 0;
    // int end = arr.size() - 1;

    //   while(start<end){
    //     if(arr[start] == 0){
    //         start++;
    //     }
    //     if(arr[start] == 1){
    //         swap(arr[start],arr[end]);
    //         end--;
    //     }
    //   }
      

    // for(auto value : arr){
    //     cout<<value<<" ";
    // }

    // int arr[][3] = { {1,2,3}, {4,5,6}, {7,8,9}};
    // int row=3;
    // int col=3;
    // int transpose[3][3];

    // transposeMatrix(arr, row, col, transpose);

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<transpose[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int arr[] = {-1,2,-3,4,-5,-6};
    // int size = sizeof(arr)/sizeof(int);
    // int count = 0;

    // for(int i=0;i<size;i++){
    //     if(arr[i] < 0){
    //         swap(arr[i],arr[count]);
    //         count++;
    //     }
    // }
    // //printing
    
    // for(auto value : arr){
    //     cout<<value<<" ";
    // }

    // int arr[] = {1,3,4,5,3,6};
    // int size = sizeof(arr)/sizeof(int);

    // cout<<findDuplicate(arr, size);

    // vector<int> arr = {1,3,5,5,2};
    // vector<int> brr;

    // cout<<missingNumber(arr,brr);

    
    // for(auto value : brr){
    //     cout<<value;
    // }

    //Wave print 

    // int arr[][4] = { {1,2,3,4},
    //                  {5,6,7,8},
    //                  {9,10,11,12},
    //                  {13,14,15,16} };
                     
    
    //     for(int col=0;col<4;col++){
    //         if(col == 0 || col ==2){
    //             for(int i=0;i<4;i++){
    //                 cout<<arr[i][col]<<" ";
    //             }
    //         }

    //         if(col == 1 || col == 3){
    //             for(int i=3;i>=0;i--){
    //                  cout<<arr[i][col]<<" ";
    //             }
    //         }
    //     }
    
    
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // int arr[] = {4,5,7,9,12,14,23,27,60};
    // int size = sizeof(arr)/sizeof(int);
    // int start = 0;
    // int end = size - 1;
    // int target = 10;
    // int mid = (start+end)/2;

    // while(start<=end){
    //     if(arr[mid] == target){
    //         cout<<"FOUND";
    //         break;
    //     }

    //     if(arr[mid] > target){
    //         end = mid-1;
    //     }
    //     if(arr[mid] < target){
    //         start = mid+1;
    //     }
    //     mid = (start+end)/2;
    // }
    

    // vector<int> arr = {1,3,4,4,4,4,4,6,7,9};
    // int target = 4;
    // cout<<"Target found at index : "<<findFirstOccurenece(arr, target);

    // vector<int> arr = {1,2,3,4,6,7,8};
    // cout<<findMissingElement(arr);

    //k-closest element
    // vector<int> arr{12,16,22,30,35,39,42,45,48,50,53,55,56};
    // int k = 8;
    // int X = 35;
    // vector<int> brr;
    // vector<int> crr;

    // findKClosestElement(arr,k,X);

    // for(int i=0;i<arr.size();i++){
    //     int b = abs(X - arr[i]);
    //     brr.push_back(b);
    // }
    // for(int i=0;i<brr.size();i++){
    //     crr.push_back(brr[i]);
    // }

    // sort(crr.begin() , crr.end());

    // for(int i=0;i<k;i++){
    //     cout<<crr[i]<<" ";
    // }
    // for(int i=0;i<k;i++){
    //     for(int j=0;j<brr.size();j++){
    //         if(crr[i] == brr[j]){
    //             cout<<arr[j]<<" ";          
    //         }
    //     }
    // }

    // for(auto values : brr){
    //     cout<<values<<" ";
    // }

    // int arr[] = {1,2,3,4,5,6};
    // int size = sizeof(arr)/sizeof(int);

    // if(evenNumber(arr,size)){
    //  cout<<"True";
    // }
    // else{
    //     cout<<"False";
    // }

    // vector<int> arr{-3,0,4,7,10};
    // vector<int> brr;

    // findMissingNumber(arr,brr);

    // char ch[50];
    // cin>>ch;
    // int count = 0;
    // int i=0;
    // while(ch[i] != '\0'){
    //     count++;
    //     i++;
    // }
    // //Reverse a string
    // reverseString(ch,count);

    // //check palindrome
    // if(checkPalindrome(ch, count)){
    //     cout<<"TRUE";
    // }
    // else{
    //     cout<<"FALSE";
    // }

    // string str = "abbaca";
    // int i = 1;
    // while(i<str.length()){
    //     if(str[i] == str[i+1]){
    //         str.erase(i,2);
    //         i = 0;
    //     }
    //     else{
    //         i++;
    //     }
    // }

    //Check Valid Palindrome
    // string str = "abca";

    // cout<<validPalindrome(str);


//    int n;
//    cout<<"Enter the NUmber: ";
//    cin>>n;
  
//     cout<<fibonaaciSeries(n);
//    //  cout<<findFactorial(n);


    int n = 10;

    fun(n);
       


    return 0;\
    
}