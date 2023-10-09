#include <stdio.h>
#include <stdbool.h>

enum Suit {
    eClub,
    eDiamond,
    eHeart,
    eSpade,
};
enum Face {
    eOne, 
    eTwo, 
    eThree,
    eFour,
    eFive,
    eSix,
    eSeven,
    eEight,
    eNine,
    eTen,
    eJack,
    eQueen,
    eKing,
    eAce
};

struct Card {
    enum Suit suit;
    int suitValue;
    enum Face face;
    int faceValue;
    bool isWild;
    // Add three datatypes mores to 
    bool isRed;
    bool isBlue;
    bool isGreen;
    bool isF;
    bool isG;
};

int main(void)
{

    printf("%lu",sizeof(struct Card));
    return 0;
}