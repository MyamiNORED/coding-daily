#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0 ;

	if (argc == 2) {
		printf("You only two arguments the first is:  %s. \n and the second is:  %s\t .\n",argv[0],argv[1]);

} else if (argc > 1 || argc <4){
	printf("Here's your arguments:\n");

	for (i = 0 ; i < argc ; i++) {
		printf("%s\t" , argv[i]);
	}
	printf("\n");
	}/* else {
		printf("You have too many arguments. You suck .\n");
	}
		*/
	return 0;
	}
