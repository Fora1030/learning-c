#include <stdio.h>

enum {
    size1D =5, 
    size2D =4, 
    size3D =3, 
    size4D =7, 
};


int array2D[size2D][size1D] = { 
    {11 , 12 , 13 , 14 , 15 } ,
    {21 , 22 , 23 , 24 , 25 } ,
    {31 , 32 , 33 , 34 , 35 } ,
    {41 , 42 , 43 , 44 , 45 }  };

int array3D[size3D][size2D][size1D] =  
{ 
    { 
        {111 , 112 , 113 , 114 , 115 }, 
        {121 , 122 , 123 , 124 , 125 } 
    },
    { 
        {211 , 212 , 213 , 214 , 215 }, 
        {221 , 222 , 223 , 224 , 225 } 
    },
    { 
        {311 , 312 , 313 , 314 , 315 }, 
        {321 , 322 , 323 , 324 , 325 } 
    } 
};

int main(void) {
    for(int row = 0; row < size2D; row++) {
        for( int col = 0; col < size1D; col++){
            printf("%4d", (array2D[row][col]+=1));
        }
        printf("\n");
    }
    return 0;
}