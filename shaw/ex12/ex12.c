#include <stdio.h>

int main(int argc, char*argv[])
{


	char full_name[]={'Z','e','d',' ','A','.',' ','S','h','a','w'};
	int areas[]={10,12,13,14,20};
	char name[]="Zed";


//warning on some system you may have to change
// %ld in this code  to a %u since it will be unsigned ints

printf("the size of an int :%ld\n",sizeof(int));

printf("the size of areas (int[]): %ld\n",sizeof(areas));
printf("the number of ints in areas  :%ld\n",sizeof(areas) / sizeof(int));
printf("the first area is %d the 2n is %d \n",areas[0],areas[1]);
printf("the size of a char :%ld \n",sizeof(char));
printf("the size of name (char[]): %ld \n",sizeof(name));
printf("the number of chars %ld  \n",sizeof(name) / sizeof(char));
printf("the size of full_name(char[]): %ld \n",sizeof(full_name));
printf("the number of chars :%ld\n",sizeof(full_name) / sizeof(char));
printf("the size of an int :%ld\n",sizeof(int));

printf("name=\"%s\" and full_name =\"%s\"\n",name,full_name);

printf("1: %c 2: %c 3:%c 4:%c ",name[0],name[1],name[2],name[3]);

return 0;
}
