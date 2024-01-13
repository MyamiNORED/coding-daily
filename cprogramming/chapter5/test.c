



#include <stdio.h>


main()
{
	int i,j;
	printf("enter i\n");
	printf("enter j\n");

	scanf("%d",&i);
	scanf("%d",&j);

	if ((i>0) && (++j>0))
		printf("i is %d j is %d",i,j);

	else 
		printf("i is %d, j is %d");



}


