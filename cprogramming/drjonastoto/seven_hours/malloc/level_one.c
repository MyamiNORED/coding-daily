
#include<stdio.h>
#include<stdlib.h>

int main () {


int *ptr ; // declare a pointer to an integer 



// allocate memory to an integer,

ptr = (int *)malloc (sizeof(int));

if (ptr == NULL) {
	printf("memory allocation failed !\n");
	return 1;
	}

// use allocated memory 
*ptr = 42 ;
printf("value : %d \n ",*ptr );

// free the allocated memory 

free(ptr);

return 0;

}

	



