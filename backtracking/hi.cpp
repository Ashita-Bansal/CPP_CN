#include <iostream>
#include <cstring>
using namespace std;
int board[11][11];

placeNQueens(int n){
    memset(board,0,11*11*sizeof(int));
}

int main(){
    placeNQueens(4);
}