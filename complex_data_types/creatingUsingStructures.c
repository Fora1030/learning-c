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
};

bool isEqual(struct Card c1, struct Card c2);
int sumCards(struct Card c1, struct Card c2);

int main(void)
{   
    struct Card c1 = {0};
    struct Card c2 = {
        eHeart, (int)eHeart, eKing, (int)eKing, false
    };

    struct Card c3 = {
        eHeart, (int)eHeart, eDiamond, (int)eDiamond, false
    };


    printf("is the same card? %d\n",isEqual(c2, c2));
    printf("cards summed, %d\n",sumCards(c2, c2));
    return 0;
}

bool isEqual(struct Card c1, struct Card c2)
{
    if (c1.suit != c2.suit) return false;
    if (c1.face != c2.face) return false;

    return true;

}

int  sumCards( struct Card c1 , struct Card c2 )  {
  int cardSum = c1.faceValue + c2.faceValue;
  return cardSum;
}
