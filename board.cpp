#include <iostream>
// #include <piece.h>
class Piece {
    private:
        
    public:
        int posx, posy, value;
    char pieceType; //Pawn Knight Bishop Rook Queen King
    char color; //White Black
		
};



int main(){
    Piece pawn;
    pawn.posx = 0;
    pawn.posy = 0;
    pawn.value = 1;
    pawn.pieceType = 'P';
    // std::cout << "The board is " << board << std::endl;
    std::cout << pawn.pieceType << std::endl;
    return 0;
}

