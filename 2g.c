#include <stdio.h>
int main()
{
	int a,b;
    a = 5;
    b = a + --a + a++;
    printf("The val of a is %d\n",a);
	printf("The val of b is %d\n",b);
	return 0;
}
