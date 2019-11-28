#include <stdio.h>
int main()
{
	int a,b,c;
	a = 5;
    b = 0;
    if(b != 0)
    {
        c = a/b;
        printf("The result is %d\n",c);
    }
	else if(b == 1)
    {
        printf("The result is %d\n",a);
    }
    else
    {
        printf("Not possible");
    }
	return 0;
}