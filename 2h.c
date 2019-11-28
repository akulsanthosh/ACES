#include <stdio.h>
int main()
{
	int a,b,c;
    a = 5;
    b = ++a * a--;
    c = ++b + --b; 
    printf("The val of a is %d\n",a);
	printf("The val of b is %d\n",b);
    printf("The val of c is %d\n",c);
	return 0;
}