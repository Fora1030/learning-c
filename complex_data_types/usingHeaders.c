
#include <stdio.h>
#include <stdbool.h>
#include "usingTypedef.h"

int main(void)
{   
    Card c1 = {0};
    Card  c2= {
        eHeart, (int)eHeart, eKing, (int)eKing, false
    };

    Card c3 = {
        eHeart, (int)eHeart, eDiamond, (int)eDiamond, false
    };


    printf("is the same card? %d\n",isEqual(c2, c2));
    printf("cards summed, %d\n",sumCards(c2, c2));
    return 0;
}

bool isEqual( Card c1, Card c2)
{
    if (c1.suit != c2.suit) return false;
    if (c1.face != c2.face) return false;

    return true;

}

int  sumCards(Card c1, Card c2 )  {
  int cardSum = c1.faceValue + c2.faceValue;
  return cardSum;
}