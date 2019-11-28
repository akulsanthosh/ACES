#include <stdio.h>
int main()
{
	int n = 100,i = 1,c = 1,j;
    while(c <= n){
        j = 0;
        while(j < i && c <= n){
            printf("%d ",c);
            c++; j++;
        }
        printf("\n");
        i++;
    }
	return 0;
}