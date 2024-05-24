#include<stdio.h>
struct student {

	char name[20];
	char class[20];
	int days_of_leave;

};

main() {


struct student tdi[17] ;


for( int i =0 ; i<= 2 ; i++) 
	{

	printf("entrer name,class,daysofleave ");
	scanf("%s,%s,%d",&tdi[i].name,&tdi[i].class,&tdi[i].days_of_leave);

}

for( int i =0 ; i<=2  ; i++)
	{ 
	printf("\n%s,%s,%d",&tdi[i].name,&tdi[i].class,&tdi[i].days_of_leave);

	}

}
