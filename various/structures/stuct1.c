#include<stdio.h>

struct date
{

	int jour;
	int moi ; 
	int annee;


};


main() {
struct date may_22;
struct date may_23;
may_22.jour = 1;
may_22.moi = 5 ;
may_22.annee = 2023;
may_23.annee = 2024;
printf("%d", may_22.annee);
printf("\n%d" , may_23.annee);
return 0 ;
}
