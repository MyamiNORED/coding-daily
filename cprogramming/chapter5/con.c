#include <stdio.h>

main() {


int i, j, k;


i = 1;
j = 2;
k = i > j ? i : j ;
printf(" k %d \n" , k);
k = (i >= 0 ? i : 0 ) + j ;
printf("k  %d", k);

return 0;
}
