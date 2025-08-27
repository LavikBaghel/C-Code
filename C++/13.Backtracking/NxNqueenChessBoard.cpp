#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>> &board, int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" "; 
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row,int col, vector<vector<char>> &board, int n){
    // Queen position where we don't place queen

    int i = row;
    int j = col;

    //Check now
    while(j >= 0){
        if(board[i][j] == 'Q'){
            return false;
        }
        j--;
    }

    //check upper left diagonal
    i = row;
    j = col;
    while(i>=0 && j>=0) {
       if(board[i][j] == 'Q'){
        return false;
       }
       i--;
       j--; 
    }

    //Check bottom left diagonal
    i = row;
    j = col;

    while(i<n && j >= 0) {
        if(board[i][j] == 'Q'){
            return false;           
        }
        i++;
        j--;
    }

    // All condition are satisfied now we can place queen
    return true; 
}



void solve(vector<vector<char>> &board,int col,int n){
    //Base case
    if(col >= n) {
        printSolution(board, n);
        return;
    }

    //solving only one case >> rest cases solved by recursion

    for(int row = 0; row<n; row++){
        if(isSafe(row,col,board,n)) {
            board[row][col] = 'Q';

            //Recursion
            solve(board,col+1,n);
            // Backtracking
            board[row][col] = '-';
        }
    }
}

int main(){

    int n = 4;
    vector<vector<char>> board(n, vector<char>(n,'-'));
    int col= 0;

    solve(board, col, n);

    return 0;
}


