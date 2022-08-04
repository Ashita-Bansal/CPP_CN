#include <iostream>
#include <cstring>
using namespace std;

int board[11][11];

bool isPossible(int n,int row,int col){

    //same column
    for(int i=row-1;i>=0;i--){
        if(board[i][col]==1){
            return false;
        }
    }

    //upper left diagonal
    //row-col should not be the same
    for(int i=row-1,j=col-1;i>=0 and j>=0;i--,j--){
        if(board[i][j]==1){
            return false;
        }
      
    }

    //upper right diagonal
    for(int i=row-1,j=col+1;i>=0 and j<n;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }

    return true;
}

void nQueenHelper(int n,int row){
    if(row==n){
        //we have reached some solution
        //we will print the board
        //return

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
        }
        cout<<endl;
        return;
    }

    //place at all possible positions and move to smaller problem

    for(int col=0;col<n;col++){

        if(isPossible(n,row,col)){
            board[row][col]=1;
            nQueenHelper(n,row+1);
            board[row][col]=0;
        }
    }
    return;
}

void placeNqueens(int n){
    memset(board,0,11*11*sizeof(int));
    nQueenHelper(n,0);
}

int main(){
    placeNqueens(4);
}