/*
#include<stdio.h>

main()
	{
char ch;
ch = getchar();
while (getchar() != '\n')
	{
	ch = getchar();
}

printf("%s",ch);
}*/

#include <stdio.h>

int main() {
    char line[100]; // Assuming the line won't exceed 100 characters
    int i = 0;
    
    // Read characters until newline or EOF
    while ((line[i] = getchar()) != '\n' && line[i] != EOF) {
        i++;
    }
    line[i] = '\0'; // Null-terminate the string
    
    // Print the third character
    if (i >= 3) {
        printf("Third character: %c\n", line[2]);
    } else {
        printf("Line is too short.\n");
    }
   
    printf("printing the whole line : \n");
for (int j = 0; j< i ;j++)
	{
	printf("%c",line[j]);
	}
  
 

   return 0;
}
