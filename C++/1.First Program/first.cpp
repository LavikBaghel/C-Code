#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int factorial(int num){
    int sum = 1;
    for(int i=1;i<=num;i++){
        sum *= i ;
    }
    return sum;
}

void transposeMatrix(int arr[][3], int row, int col){
     for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        cout<<arr[j][i]<<" ";
      }
      cout<<endl;
     }

}

int duplicate(vector<int> arr){
  for(int i=0;i<arr.size();i++){
     for(int j=i+1;j<arr.size();j++){
      if(arr[i] == arr[j]){
       return arr[i];
      }
     }
   }
}
//1,2,5,3,4
int missingNumber(vector<int> arr){
  sort(arr.begin(), arr.end());
  int j =1;
  for(int i=0;i<arr.size();i++){
    if(arr[i] != j){
      return j;
    }
    else{
      j++;
    }
  }
  return -1;
}

int binarySearch(int arr[],int size, int target){

  int start = 0;
  int end = size-1;
  int mid = start + (end-start)/2;

  while(start<=end){
    if(arr[mid] == target){
      return mid;
    }
    else if(target < arr[mid]){
      end = mid-1;
    }
    else if(target > arr[mid]){
      start = mid+1;
    }
    mid = start + (end-start)/2;
  }
  return -1;
}

int firstOccurrence(vector<int> arr,int find){
  int start = 0;
  int end = arr.size() - 1;
  int mid = start + (end - start)/2;
  int ans;

  while(start <= end){
    if(arr[mid] == find){
      ans = mid;
      end = mid - 1;
    }
    else if(arr[mid] < find){
      start = mid + 1;
    }
    else if(arr[mid] > find){
      end = mid - 1;
    }
    mid = start + (end-start)/2;

  }
  return ans;
}


int missingElement(vector<int> arr){
  int start = 0;
  int end = arr.size()-1;
  int mid = start +(end-start)/2;
  int ans;

  while(start<=end){
    if(arr[mid] == mid+1){
      start = mid+1;
    }
    else if( arr[mid] != mid+1)
    {
      ans = mid+1;
      end = mid - 1;
    }  
    mid = start +(end-start)/2;
  }
  return ans;
}

bool findElementInVector(vector<vector<int> > arr,int m,int n, int find){
  int start = 0;
  int totalSize = m*n;
  int end = totalSize - 1;
  int mid = start + (end-start)/2;

  while(start<=end){
    int rowIndex = mid/n;
    int colIndex = mid%n;

    if(arr[rowIndex][colIndex] == find){
      cout<<"At position"<<rowIndex<<" "<<colIndex<<" ";
      return true;
    }
    if(arr[rowIndex][colIndex] < find){
       start = mid+1;
    }
    else if(arr[rowIndex][colIndex] > find){
       end = mid - 1;
    }
    mid = start + (end-start)/2;
  }

  return false;
}

int serchInNearlySortedArray(vector<int> arr,int find){
  int start = 0;
  int end  = arr.size()-1;
  int mid = start + (end-start)/2;

  while(start<=end){
    if(arr[mid] == find){
      return mid;
    }
    if(mid-1 >= 0 && arr[mid-1] == find){
      return mid-1;
    }
    if(mid+1 < arr.size() && arr[mid+1] == find){
      return mid + 1;
    }
    if(arr[mid] > find){
      end = mid - 2;
    }
    else if(arr[mid] < find){
      start = mid + 2;
    }

    mid = start + (end-start)/2;
  }
  return -1;
}

int findOddOccurenece(vector<int> arr){
  int start = 0;
  int end = arr.size()-1;
  int mid = start + (end - start)/2;

  while(start <= end){
    if(start == end){
      return arr[start];
    }
    if(mid%2==0){
       if(arr[mid] == arr[mid+1]){
         start = mid + 2;
      }
      else{
        end = mid;
      }
    }
    else{
       if(arr[mid] == arr[mid-1]){
      start = mid + 1;
      }
      else{
        end = mid - 1;
      }
    }
    
    
    mid = start + (end-start)/2;
  }
  return -1;
}

int kClosestElement(vector<int> arr, int k, int x){
   int dif;
   vector<int> brr;
  for(int i =0;i<arr.size();i++){
      dif = abs(x-arr[i]);
      brr.push_back(arr[dif]);
  }
}

void util(int* &p){
  p = p+1;
}

int main(){
    // cout<<"Hello world" <<endl;
    // cout<< "Enter a number : " <<endl;
    // int a;
    // cin>>a;
    // cout<<"You Enter: " <<a<<endl;

    // char ch = '23423';
    // cout<<ch;

 //   Try something intresting
    // int n;
    // if(cin>>n){
    //     cout<<"Lavik Baghel"<<n<<endl;
    // }

    // int row = 4;
    // int col = 4;

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


   //hollow square
    // int row = 7;
    // int col = 4;

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         if(i==0 || i==row-1 || j==0 || j==col-1){

    //         cout<<"* ";
    //         }
    //         else{

    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

   //hollow half pyramid
    // int i = 6;
    // for(int row=0;row<i;row++){
    //     for(int col=0;col<=row;col++){
    //         if(row==0 || row==1 || row == i-1 || col==0 || col==row){

    //         cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


      
      //Hollow pyramid && full pyramid
    
    // int i = 9;

    // for(int row=i;row>0;row--){
    //     //printing space
    //     for(int space = row;space>0;space--){
    //             cout<<" ";
    //     }
    //     for(int col=i;col>=row;col--){
    //         if(row==i || row==i-1 || row==1 || col==i || row==col){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
            
    //     }
    //        //printing space again
    //     for(int space =row;space>0;space--){
    //             cout<<" ";
    //     } 
    //     cout<<endl;
         
    // }


    //Hollow Diamond
    // int i = 4;

    // for(int row=i;row>0;row--){
    //     //printing space
    //     for(int space = row;space>0;space--){
    //             cout<<" ";
    //     }
    //     for(int col=i;col>=row;col--){
    //         if(row==i || row==i-1 || col==i || row==col){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
            
    //     }
    //        //printing space again
    //     for(int space =row;space>0;space--){
    //             cout<<" ";
    //     } 
    //     cout<<endl;
         
    // }

    //  for(int row=0;row<i;row++){
    //     //printing space
    //     for(int space = 0;space<=row;space++){
    //             cout<<" ";
    //     }
    //     for(int col=i;col>row;col--){
    //         if(col==i || col==row+1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
            
        
            
    //     }
    //     cout<<endl;
         
    // }

    // Fancy Pattern

    // int num = 4;
    // for(int row=1;row<=num;row++){
    //     for(int col=0;col<row;col++){
    //         cout<<row;
    //         if(col!=row-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int row=num;row>0;row--){
    //     for(int col=0;col<row;col++){
    //         cout<<row;
    //         if(col!=row-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    // int num = 4;

    // for(int row=1;row<=num;row++){
    //     for(int col=1; col<=row;col++){
    //         cout<<col<<" ";
    //     }
    //     if(row!=1){
    //         for(int i=row-1;i>0;i--){
    //           cout<<i<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
   

//    int num;

//    cout<<"Enter number"<<endl;
//    cin>>num;
//    cout<<factorial(num);
//    cout<<"1"<<" "<<"3"<<" ";
//    for(int i=1;i<num;i++){
//      cout<<6*i-1<<" ";
//     }


  //  int num = 123;

  //  for(int i=0;i<3;i++){
  //    int ans;
  //    int fans = num%10;
  //    cout<<fans;
  //    ans = num / 10;
  //    int jans = ans % 10;
  //    cout<<jans;
  //    int lans = ans / 10;
  //    cout<<lans;
  //    cout<<endl;
    
  //  }


  //  int arr[]  = {11,2,3,34,5,2,4,1,87,8,6,9,70,87,431};
  //  int size = sizeof(arr)/sizeof(arr[0]);
  //  int maxi = INT8_MIN;
  //  for(int i=0;i<size;i++){
  //     if(maxi < arr[i]){
  //       maxi = arr[i];
  //     }
  //  }
  //  cout<<"Maximum Number is : "<<maxi;




  // int arr[] = {1,2,3,4,5,6,7,8,9,10,11};

  // int size = sizeof(arr)/sizeof(int);
 

  // int i = 0;
  // int j = size-1;

  // while(i<=j){
  //     cout<<arr[i]<<" ";
  //     if(i==j){
  //       break;
  //     }
  //     cout<<arr[j]<<" ";
  //     i++;
  //     j--;
  // }


//Reverse an array
  // int arr[] = {1,2,3,4,5};
  // int size = sizeof(arr)/sizeof(int);

  // int start = 0;
  // int end = size-1;

  // int temp;

  // while(start<end){
  //    temp = arr[start];
  //    arr[start] = arr[end];
  //    arr[end] = temp;
  //    start++;
  //    end--;

  // }
  // for(int i=0;i<size;i++){
  //   cout<<arr[i]<<" ";
  // }

  

  //find unique element

  // vector<int> arr = {2,1,3,2,1};

  // int ans = 0;
  // for(int i=0;i<arr.size();i++){
  //   ans = ans ^ arr[i];
  // }
  // cout<<ans<<" ";

  //union of 2 array

  // vector<int> arr = {1,2,3,4,5};
  // vector<int> brr = {6,4,7,2,8};
  // vector<int> crr;


  // for(int i=0;i<arr.size();i++){
  //   crr.push_back(arr[i]);
  // }
  // for(int i=0;i<brr.size();i++){
    
  //   crr.push_back(brr[i]);
    
  // }
 
  // for( auto value : crr){
  //   cout<<value<<" ";
  // }

  //pair sum

  // vector<int> arr = {1,3,5,7,2,4};
  // int sum = 9;


  // for(int i=0;i<arr.size();i++){
  //   for(int j=i+1;j<arr.size();j++){
  //     // cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
  //      if(arr[i] + arr[j] == sum){
  //         cout<<"Pair sum"<<"("<<arr[i]<<","<<arr[j]  <<")"<<" ";           
  //      }    
  //   }

  // }


  //sort 0's and 1's

//   vector<int> arr = {1,1,1,0,1,1};

//   int i = 0;
//   int j = i+1;

//   while(j<arr.size()){
//     if(arr[i]<arr[j]){
//       i++;
//       j++;
//     }
//     if(arr[i]==arr[j]){
//       j++;
//     }
//     if(arr[i] > arr[j]){
//       swap(arr[i], arr[j]);
//       i++;
//     }
//   }  

//  for(auto values : arr){
//   cout<<values<<" ";
//  }




//Row sum print

// int arr[4][4] = { {1,2,3,4},
//                   {5,6,7,8},
//                   {9,10,11,12},
//                   {13,14,15,16}};

//   int row = 4;
//   int col = 4;
//   int rowSum = 0; 

//   for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//       rowSum += arr[i][j];
//     }
//     cout<<rowSum<<endl;
//     rowSum=0;
//   }              


//Transpose a matrix

// int arr[3][3] = {
//                 {1,2,3},
//                 {4,5,6},
//                 {7,8,9}
// };

// int row = 3;
// int col = 3;

//   transposeMatrix(arr, row, col);

  
  //2-d vector initalise and printiong
  // vector<vector<int> > arr(3, vector<int>(3));

  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }



//Color sorts
  // vector<int> arr = {2,0,2,1,1,0};

  // for(int i=0;i<arr.size();i++){
  //   for(int j=i+1;j<arr.size();j++){
  //     if(arr[i] > arr[j]){
  //       swap(arr[i],arr[j]);
  //     }
     
  //   }
  // }


  // for(auto value : arr){
  //   cout<<value<<" ";
  // }


   //Move all Negative number on left side
  // vector<int> arr = {1,2,-3,4,-5,6};
  // int j =0;
  // int temp;

  // for(int i=0;i<arr.size();i++){
  //   if(0 > arr[i]){
  //     temp = arr[j];
  //     arr[j] = arr[i];
  //     arr[i] = temp;
  //     // swap(arr[j],arr[i]);
  //     j++;
  //   }
  // }

  // for(auto value : arr){
  //   cout<<value<<" ";
  // }


  //  vector<int> arr = {1,3,2,4,2};
 

  //  cout<<duplicate(arr);




  // vector<int> arr = {1,2,4,5,2};

  // cout<<"Missing Number is : "<<missingNumber(arr);


  //Wave print a matrix


  // int arr[4][4] = { 
  //                  {1,2,3,4},
  //                  {5,6,7,8},
  //                  {9,10,11,12},
  //                  {13,14,15,16}
  //                 };
  //   int row = 4;
  //   int col = 4;
  //   for(int i=0;i<row;i++){
  //     for(int j=0;j<col;j++){
  //       cout<<arr[j][i]<<" ";
  //     }
  //     cout<<endl;
  //   }              



  //Spiral print a matrix
  
  // int arr[3][3] = {
  //                  {1,2,3},
  //                  {4,5,6},
  //                  {7,8,9}
  //                 };

  //   int row = 3;
  //   int col = 3;

  //   for(int i=0;i<row;i++){
  //     for(int j=0;j<col;j++){
  //       cout<<arr[i][j]<<" ";
  //     }
      
  //   }



  //Binary Search

  // int arr[] = {1,3,5,7,9,11,13,14};

  // int size = sizeof(arr)/sizeof(int);
  // int target = 9;

  // cout<<binarySearch(arr, size, target);


  // vector<int> arr = {1,3,4,4,4,4,4,4,4,6,7,9};

  // int find = 4;

  // cout<<firstOccurrence(arr, find);

  //Missing element
  // vector<int> arr = {1,2,3,4,5,7,8};

  // cout<<missingElement(arr);


  //Binary search in 2d Array
  // vector<vector<int> > arr{ {1,2,3}, 
  //                           {4,5,6},
  //                           {7,8,9} };
  // int m = 3;
  // int n = 3;

  // int find = 3;

  // if(findElementInVector(arr, m, n, find)){
  //   cout<<"Found"<<" ";
  // }
  // else{
  //   cout<<"Not Found"<<" ";
  // }



  //Binary search in nearly sorted array

  // vector<int> arr = {10,3,40,20,50,80,70};

  // int find = 70;

  // cout<<serchInNearlySortedArray(arr,find);


  //Find odd occurrence in array
 
  // vector<int> arr =  {1,1,2,2,3,3,4,4,3,600,600,4,4};

  // cout<<findOddOccurenece(arr);


  //K-Closest Pair

  // vector<int>arr = {1,2,3,4,5};
  // int k = 4;
  // int x = 3;

  // kClosestElement(arr,k,x);

  // char name[100];
  // cin.getline(name,50);
  // // cin>>name;
  // int size=0;
  // int i=0;
  // int temp;
 

  // while(name[i] != '\0'){
  //   size++;
  //   i++;
  // }
  //  int m=0, n=size-1;
  
  // for(int i=0;i<size;i++){
  //   if(name[i] == ' '){
  //     name[i] = '@';
  //   }
  // }
  // while(m<n){
  //   if(name[m] == name[n]){
  //    m++;
  //    n--;
  //   }
  //   else{
  //     cout<<name<<" is not a pailndrome"<<endl;
  //     break;
  //   }
  //   // cout<<name<<" is Palindrome"<<endl;
  // }
  // while(m<n){
  //   temp = name[m];
  //   name[m] = name[n];
  //   name[n] = temp;
  //   m++;n--;
  // }
  // cout<<"Length of character array : "<<size<<endl;
  // cout<<"Reverse of your typed name is : "<<name;

//     for(int i=0;i<size;i++){
//       //way - 1
//       name[i] = name[i] - 'a' + 'A';
//       //way-2
//       // name[i] = name[i] + 32;
//     }
// cout<<name;

 
  // string str = "azxxzy";
  // int i = 0;
  // int j = i+1;

  // while(j<str.size()){
  //   if(str[i] == str[j]){
  //     str.erase(i, 2);  
  //     i=0;
  //     j=i+1;
  //   }else{
  //     i++;
  //     j++;
  //   }
  // }
  // cout<<str;

  // string str = "abc";
  // int i=0;
  // int j=2;
  // string ptr = str.substr(i,j);
  // cout<<ptr;

  // int a = 5;
  // int* ptr = &a;

  // cout<<"After"<<endl;
  // cout<<a<<endl;
  // cout<<ptr<<endl;
  // cout<<*ptr<<endl;

  // util(ptr);

  // cout<<"Befor"<<endl;
  // cout<<a<<endl;
  // cout<<ptr<<endl;
  // cout<<*ptr<<endl;


    // int a = 9;
    // //Syntax of reference variable
    // int& b = a;
    // cout<<a<<endl;
    // cout<<b<<endl;

    //   int a = 9;
    // //Syntax of reference variable
    // int* b = &a;
    // cout<<&a<<endl;
    // cout<<&b<<endl;
    // cout<<b<<endl;
    // cout<<*b<<endl;


  
 
