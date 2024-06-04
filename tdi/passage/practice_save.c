#include<stdio.h>


main() {
FILE* file = fopen("chi.txt","w");

if (file == NULL) { printf("Error \n "); return 1 ;}

fprintf(file," tesing archives ");

fclose(file);












}
