#include<stdio.h>

int j,k;

int *ptr;

int main(void)
{


j = 1 ;
k = 2 ;
ptr = &k;
// ptr pointer to k *****ptr-------> k

printf("\n j has the value %d and is stored at %p \n",j,(void *)&j);
printf("\n k has the value %d and is stored at %p \n",k,(void *)&k);
printf("\n ptr has the value %d and is stored at %p \n",ptr,(void *)&ptr);
printf("\n the value of the integer pointed to by ptr  is %d \n",*ptr );
return 0 ;

}
