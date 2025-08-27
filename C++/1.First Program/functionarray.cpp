#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

float areaOfCircle(int radius){
    return M_PI*radius*radius;
}

bool findValue(int arr[],int size,int find){
    for(int i=0;i<size;i++){
        if(arr[i] == find){
            return true;
        }
    }
    return false;
}

int reverseArray(int arr[],int size, int start, int end){
    int temp;
      while(start<end){
          temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          start++;
          end--;
      }
}
void printArray(int arr[],int size){
       for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findUniqueNumber(vector<int> arr){

    int start = 0;
    int end = arr.size() - 1;
    int ans = 0;

    while(start<arr.size()){
        ans = ans ^ arr[start];
        start++;
    }
    return ans;
}

void pairSum(vector<int> arr,vector<int> brr,int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i] + brr[j] == sum){
                cout<<"("<<arr[i]<<","<<brr[j]<<")"<<" ";
            }
        }
    }
}

void sortZeroAndOne(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){
        if(arr[start] <arr[end]){
            start++;
            end--;
        }
        else if(arr[start] > arr[end]){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if(arr[start] == arr[end]){
            if(arr[start] == 0){
              start++;
            }
    
            else if(arr[start] == 1){
                end--;
            }
            
            
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

void printArray(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

bool findElement(int arr[][3],int find,int row, int col){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(arr[i][j] == find){
            cout<<"Element found at index"<<"("<<i<<","<<j<<")"<<endl;;
            return true;
          }
        }
    }
    return false;
}

int findMax(int arr[][3],int row,int col){
    int maxi = INT32_MIN;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(maxi < arr[i][j]){
            maxi = arr[i][j];
          }
        }
    }
    return maxi;
    
}
int findMin(int arr[][3],int row,int col){
     int mini = INT32_MAX;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
          if(mini > arr[i][j]){
            mini = arr[i][j];
          }
        }
    }
    return mini;
}

void transposeMatrix(int arr[][3],int row,int col){

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}

int NegLeftSide(vector<int> arr){
    int start = 0;
    int end = start+1;

    while(end < arr.size()){
        if(arr[start] < 0){
            start++;
            end++;
        }
        else if(arr[end] > 0){
           end++;
        }
        else if(arr[end] < 0){
            swap(arr[start], arr[end]);
            start++;
            end++;
        }
    }
    printArray(arr);
}

int findDuplicate(vector<int> arr){
    
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return -1;

    
    
}

int findMissingElement(vector<int> arr){
    int i = 0;

    while ((i<arr.size())){
        if(i == arr[i] - 1){
            i++;
        }
        else if(arr[i] == arr[arr[i]-1]){
            i++;
        }
        else{
            swap(arr[i], arr[arr[i] - 1]);
        }
    }
    for(int j=0;j<arr.size();j++){
        if(arr[j] != j+1){
          return j+1;
        }   
    }
   return -1;
} 

int firstOccurenceElement(vector<int> arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    int ans;

    while(start<=end){
        if(arr[mid] == target){
            end = mid - 1;
            ans = mid;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurenceElement(vector<int> arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;
    int lastOccurence;

    while(start<=end){
        if(arr[mid] == target){
           start = mid+1;
           lastOccurence = mid;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return lastOccurence;
}

int totalOccurence(vector<int> arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;
    int firstOcc;
    int lastOcc;
    int count = 0;

    firstOcc = firstOccurenceElement(arr, target);
    lastOcc  = lastOccurenceElement(arr, target);

    for(int i=firstOcc;i<=lastOcc;i++){
        count++;
    }
    return count;

}

int missingElementUsingBinarySearch(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;
    int missingElement = -1;

    while(start<=end){
        if(arr[mid] == mid+1){
          start = mid+1;
        }
        else if(arr[mid] > mid+1){
            end = mid -1;
            missingElement = mid+1;
        }
        
        mid = start + (end-start)/2;
    }
    return missingElement;
}

int findPeakElemnet(vector<int> arr){
    int start = 0;
    int end = arr.size() -1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return arr[mid];
        }
        else if(arr[mid] < arr[mid+1]){
            start = mid;
        }
        else if(arr[mid] < arr[mid-1]){
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int binarySearchInNearlySortedArray(vector<int> arr,int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while (start<end){
      if(arr[mid] == target){
        return mid;
      }
      else if(arr[mid-1] == target){
        return mid-1;
      }
      else if(arr[mid+1] == target){
        return mid+1;
      }
      else if(arr[mid] < target){
        start = mid+1;
      }
      else if(arr[mid] > target){
        end = mid-1;
      }
      mid = start + (end-start)/2;
    }

    return -1;
    
}

double findSquareRoot(vector<double> arr, int sqt){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;
    double ans;

    while(start<=end){
        if(sqt == 0){
            return 0;
        }
        else if(arr[mid] * arr[mid] == sqt){
            return arr[mid];
        }
        else if(arr[mid] * arr[mid] > sqt){
            end = mid-1;
        }
        else if(arr[mid] * arr[mid] < sqt){
             ans = arr[mid];
             start = mid+1; 
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int kDiffPairs(vector<int> ans, int k){
    int i = 0;
    int j = 1;
    sort(ans.begin(), ans.end());
    while(j<ans.size()){
        if(ans[j] - ans[i] == k){
            cout<<"("<<ans[j]<<","<<ans[i]<<")"<<endl;
            j++;
            i++;
        }
        else if(ans[j] - ans[i] < k){
            j++;
        }
        else{
            i++;
        }
        if(i == j){
            j++;
        }
    } 
}

vector<int> kClosestElement(vector<int> arr, int k, int x){

    int low = 0;
    int high = arr.size() - 1;

    while(high - low >= k){
        if(x - arr[low] > arr[high] - x){
              low++;
        } 
        else{
            high--;
        }
    }
    vector<int> ans;
    for(int i = low;i<=high;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}

int binarySearch(vector<int> arr, int start, int end, int target){
    int mid =  start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int exponentialSearch(vector<int> arr, int target, int size){
    int i = 1;
    if(arr[0] == target){
        return 0;
    }
    while(i<arr.size() && arr[i]<=target){
         i = i*2;
    }

    return binarySearch(arr, i/2, min(i, size-1), target);
}
int bookAllocationProblem(vector<int> arr, int k){
    
}
int main(){
    // int radius;
    // cout<<"Enter the value of radius"<<endl;
    // cin>>radius;

    // cout<<"Area of Circle is:"<<areaOfCircle(radius);
    // return 0;

//     int arr[10];
//     cout<<"Enter the value of array";
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//    for(int j=0;j<n;j++){
//     cout<<arr[j]*2<<" ";
//    }

    //   int arr[] = {2,9,6,7,4,12,15};
    //   int size = sizeof(arr)/sizeof(int);
    //   int find;
    //   cout<<"Search number in an array";
    //   cin>>find;

    //   if(findValue(arr, size, find)){
    //     cout<<"Present";
    //   }
    //   else{
    //     cout<<"Not Present";
    //   }


    // int arr[] = {0,0,1,0,1,1,1,0};
    // int size = sizeof(arr)/sizeof(int);
    // int countZero = 0;
    // int countOne = 0;

    // for(int i=0;i<size;i++){
    //     if(arr[i] == 0){
    //         countZero++;
    //     }
    //     else{
    //         countOne++;
    //     }
    // }
    // cout<<"1's in array is :"<<countOne<<endl;
    // cout<<"0's in array is :"<<countZero<<endl;


    // int arr[] = {9,4,19,6,8,15};
    // int size = sizeof(arr)/sizeof(int);
    // int maxi = INT32_MIN;

    // for(int i=0;i<size;i++){
    //     if(arr[i] > maxi){
    //         maxi = arr[i];
    //     }
    // }
    // cout<<maxi;

    // int arr[] = {1,2,3,4,5,6,7,8};
    // int size = sizeof(arr)/sizeof(int);
    // int start= 0;
    // int end = size-1;

    // while(start<end){
    //   cout<<arr[start]<<" ";
    //   cout<<arr[end]<<" ";
    //   start++;
    //   end--;
    // }


    // int arr[] = {10,20,30,40,50,60};
    // int size = sizeof(arr)/sizeof(int);
    // int start= 0;
    // int end = size-1;

    // cout<<"Before reversing the array"<<endl;
    // printArray(arr, size);

    // cout<<"After reversing the array"<<endl;
    // reverseArray(arr, size, start, end);
    // printArray(arr, size);

    // vector<int> arr{2,3,4,2,1,3,6,5,5,6,1};

    // cout<<findUniqueNumber(arr);

    // vector<int> arr{1,2,3,4};
    // vector<int> brr{5,6,7};
    // vector<int> crr;

    // for(int i=0;i<arr.size();i++){
    //      crr.push_back(arr[i]);
    // }
    // for(int i=0;i<brr.size();i++){
    //      crr.push_back(brr[i]);
    // }
    // for(int i=0;i<crr.size();i++){
    //      cout<<crr[i]<<" ";
    // }
 
    
    // vector<int> arr{1,2,3,4,5,6};
    // vector<int> brr{2,4,6};
    // vector<int> crr;

    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<brr.size();j++){
    //         if(arr[i] == brr[j]){
    //             brr[j] = -1;
    //             crr.push_back(arr[i]);
    //         }
    //     }
    // }

    // for(int i=0;i<crr.size();i++){
    //      cout<<crr[i]<<" ";
    // }

    // vector<int> arr{1,3,5,7};
    // vector<int> brr{2,4,6};
    // int sum = 9;

    // pairSum(arr, brr, sum);

    // vector<int> arr{1,1,1,0,1,0,1,0,0};

    // sortZeroAndOne(arr);

    // int arr[5][4] = { {1,2,3,4},
    //                   {2,3,4,1},
    //                   {5,6,1,3},
    //                   {2,4,6,8},
    //                   {1,9,9,6}};
    
    //      for(int i=0;i<5;i++){
    //     int rowSum = 0;
    //     for(int j=0;j<4;j++){
    //        rowSum += arr[i][j];
    
    //     }
    //     cout<<i+1<<"th row sum is: "<<rowSum<<endl;
    // }                  

    // int arr[3][3] = {{5,6,8},
    //                  {7,2,4},
    //                  {1,6,9}};

    // int find = 7;
    // int row =3;
    // int col = 3;

    // if(findElement(arr, find, row, col)){
    //     cout<<"Present";
    // }
    // else{
    //     cout<<"Not Present";
    // }

    // int arr[3][3] = {{5,6,9},
    //                  {7,12,2},
    //                  {1,8,4}};

    // int row =3;
    // int col = 3;

    // cout<<"Maximum Number in this array is:"<<findMax(arr, row, col)<<endl;
    // cout<<"Minimum Number in this array is:"<<findMin(arr, row, col);


    // int arr[3][3] = {{1,2,3},
    //                  {4,5,6},
    //                  {7,8,9}};

    // int row =3;
    // int col = 3;

    // transposeMatrix(arr, row, col);

    // vector<int> arr = {1,-2,3,-4,5,-6};
    
    // NegLeftSide(arr);

    // vector<int> arr = {3,3,4,5,2};

    // cout<<findDuplicate(arr);

    // vector<int> arr = {5,2,5,3,4};

    // cout<<findMissingElement(arr);


    // vector<vector<int> > arr{{1,2,3,4},
    //                          {5,6,7,8},
    //                          {9,10,11,12},
    //                          {13,14,15,16}
    // };
    // int row = arr.size();
    // int col = arr[0].size();
    // for(int i=0;i<row;i++){
    //     if((i & 1) == 0){
    //     for(int j=0;j<col;j++){
    //             cout<<arr[j][i]<<" ";
    //         }  
    //     }
    //     else{
    //       for(int j=col-1;j>=0;j--){
    //             cout<<arr[j][i]<<" ";
    //         }
    //     }
    // }

    // vector<int> arr {1,3,4,4,4,4,4,6,7,9};
    // int target = 4;

    // cout<<"First occurence of "<<target<<" at "<<firstOccurenceElement(arr, target);

    // vector<int> arr {1,3,4,4,4,4,4,6,7,9};
    // int target = 4;

    // cout<<"Last occurence of "<<target<<" at "<<lastOccurenceElement(arr, target);
    
    // vector<int> arr {1,3,3,4,4,4,4,6,7,9};
    // int target = 4;

    // cout<<totalOccurence(arr, target);


    // vector<int> arr{1,3,4,5,6};

    // cout<<missingElementUsingBinarySearch(arr);

    // vector<int> arr{1,3,5,12,7,6};

    // cout<<findPeakElemnet(arr);

    // vector<int> arr{1,3};
    // int target = 0;

    // cout<<binarySearchInNearlySortedArray(arr, target);

    // int sqt;
    // cout<<"Find the square root"<<" "<<endl;
    // cin>>sqt;
    // vector<double> arr;

    // for(int i=1;i<=sqt;i++){
    //     arr.push_back(i);
    // }
    
    

    // double finalAns; 
    // finalAns = findSquareRoot(arr, sqt);

    // int precision;
    // cout<<"Enter the number of floating digits in precision "<<endl;
    // cin>>precision;

    // double step = 0.1;
    // for(double i=0;i<precision; i++){
    //     for(double j=finalAns; j*j<=sqt;j=j+step){
    //         finalAns = j;
    //     }
    //     step = step / 10;
    // }
    // cout<<finalAns;

    // vector<int> ans = {3,1,4,1,5};
    // int k = 2;

    // kDiffPairs(ans, k);

    // vector<int> arr = {12,16,22,30,35,39,42,45,48,50,53,55,56};
    // vector<int> arr = {1,2,3,4,5};

    // int k = 4;
    // int x = 35;

    // for(auto value : kClosestElement(arr, k, x)){
    //     cout<<value<<" ";
    // }

    // vector<int> arr = {3,4,5,6,11,13,14,15,56,70};
    // int target = 70;
    // int size = arr.size();

    // cout<<exponentialSearch(arr, target, size);

    vector<int> arr = {22,23,67};
    int k = 2;

    bookAllocationProblem(arr, k);
}