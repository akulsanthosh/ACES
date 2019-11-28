t// OUTPUT: 3 1 2

#include <stdio.h>

int x=10;

int calc(int y, int z){
    int x = y+z;
    return x;
}

void main()
{
    int x, y, z;

    y=1;
    z=2;
    x=5;

    printf("%d %d %d", calc(y,z), y,z);
    printf("\n");
}