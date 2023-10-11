#include <stdio.h>
#include <stdbool.h>

typedef enum  {
    eClub,
    eDiamond,
    eHeart,
    eSpade,
} Suit ;

typedef enum {
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
} Face ;

typedef struct {
    Suit suit;
    int suitValue;
    Face face;
    int faceValue;
    bool isWild;
} Card ;

bool isEqual(Card c1, Card c2);
int sumCards(Card c1, Card c2);
