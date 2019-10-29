#include "stdio.h"
int arr[10][10][10];
int main()
{
 arr[5][5][5] = 123;
 return 0;
}

/*
Which of the given printf statement(s) would be able to print arr[5][5][5]
(i) printf("%d",arr[5][5][5]);
(ii) printf("%d",*(*(*(arr+5)+5)+5));
(iii) printf("%d",(*(*(arr+5)+5))[5]);
(iv) printf("%d",*((*(arr+5))[5]+5));
*/
