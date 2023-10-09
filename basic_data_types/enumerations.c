#include <stdio.h>

enum suit {
    eSpade = 4,
    eHeart = 3, 
    eDiamond = 2,
    eClub =1
};


int main(void) 
{   
    enum suit s = eSpade;
    int card = s;
    printf("%d\n", s);
    if (card == eClub) printf("club\n");
    else if(card == eDiamond) printf("diamond\n");
    else if(card == eHeart) printf("heart\n");
    else if(card == eSpade) printf("spade\n");
    else printf("unknown\n");
    
    return 0;
}
