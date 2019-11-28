// OUTPUT: 7

#include <stdio.h>

void pointer2P(int **pointer){
    static int q = 7;
    *pointer = &q;
}

void main()
{
    int r = 14;
    int *pointer = &r;

    pointer2P(&pointer);
    printf("%d", *pointer);


    printf("\n");
}