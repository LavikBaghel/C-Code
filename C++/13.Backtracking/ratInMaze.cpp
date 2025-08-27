#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int i,int j,int row,int col, int maze[][3], vector<vector<bool> > &visited){
   if( ( (i>=0 && i<row) && (j>=0 && j<col)) && (maze[i][j] == 1) && (visited[i][j]==false)) {

    return true;
   }
   else{
    return false;
   }
}

void solveMaze(int maze[3][3],int row,int col,int i,int j,vector<vector<bool> > &visited,vector<string>& path,string output){
     
    //  Base case
    if(i == row-1 && j == col-1) {
    //    Answer found
    path.push_back(output);
    return;
    }

    //Down -> (i+1, j)
    if(isSafe(i+1, j, row,col, maze,visited)) {
        visited[i+1][j] = true;
        solveMaze(maze,row,col,i+1,j,visited,path,output + 'D');

        //Backtrack
        visited[i+1][j] = false;
    }

    //Left -> (i, j-1)
    if(isSafe(i, j-1, row,col, maze,visited)) {
        visited[i][j-1] = true;
        solveMaze(maze,row,col,i,j-1,visited,path,output + 'L');

         //Backtrack
        visited[i][j-1] = false;
    }


    //Right -> (i, j+1)
    if(isSafe(i, j+1, row,col, maze,visited)) {
        visited[i][j+1] = true;
        solveMaze(maze,row,col,i,j+1,visited,path,output + 'R');

        //Backtrack
        visited[i][j+1] = false;
    }


    //Up -> (i-1, j)
    if(isSafe(i-1, j, row,col, maze,visited)) {
        visited[i-1][j] = true;
        solveMaze(maze,row,col,i-1,j,visited,path,output + 'U');

        //Backtrack
        visited[i-1][j] = false;
    }

}

int main(){

    int maze[3][3] = {
                  {1,0,0},
                  {1,1,0},
                  {1,1,1} };

    int row = 3;
    int col  = 3;

    vector<vector<bool>> visited(row, vector<bool>(col,false));

    //rat source position marks true
    visited[0][0] = true; 

    vector<string> path;
    string output = "";

    solveMaze(maze,row,col,0,0,visited,path,output);

    cout<<"Printing thr result" <<endl;

    for(auto i:path){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}