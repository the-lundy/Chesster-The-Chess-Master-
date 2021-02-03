#include <iostream>
#include "piece.h"

using std::cin;
using std::cout;
using std::endl;

void printI(int arg){
    cout << arg << endl;
}
void printC(char arg){
    cout << arg << endl;
}
void printBoard(int arg[8][8]){
    //Less then 64 since we know the size of the chessboard
    for (int ii = 0; ii < 8; ii++){
        for ( int jj = 0; jj < 8; jj++){
            

            if (jj == 7){
                cout << arg[ii][jj] <<endl;
            } else{
                cout << arg[ii][jj];
            }
        }

    } 
}




int main(){
    Pawn pawn1;
    pawn1.posx = 0;
    pawn1.posy = 0;
    // pawn1.value = 10;
    pawn1.color = 'W';
    pawn1.boardPos[1][1] = 1;
    // std::cout << "The board is " << board << std::endl;
    // for (size ii = 0; ii < sizeof(pawn1.boardPos); ii++){
    // printC(pawn1.color);
    printBoard(pawn1.boardPos);
    // cout << pawn1 << endl;
    // }

    return 0;
}

