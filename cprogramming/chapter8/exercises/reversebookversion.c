#include <stdio.h>

#define size sizeof(a)/sizeof(a[0])
#define N 10 

main()
{
int a[N], i;
printf("enter %d numbers : ", N);
for (i = 0; i < size ; i++)
{
	scanf("%d", &a[i]);
}
printf("in reverse order: ");
for ( i = size - 1; i>=0 ; i--)
{
	printf(" %d", a[i]);
}
printf("\n");

return 0;
}
