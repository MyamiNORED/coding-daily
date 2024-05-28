// C program to illustrate
// strcmp() function
#include<stdio.h>
#include<string.h>
int main()
{
	// z has greater ASCII value than g
	char first_str[] = "zfz";
	char second_str[] = "gfg";
	
	int res = strcmp(first_str, second_str);
	
	if (res==0)
		printf("Strings are equal");
	else
		printf("Strings are unequal");
		
	printf("\nValue of result: %d" , res);
	
	return 0;
}

