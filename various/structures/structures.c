#include<stdio.h>

struct Article {

	int code ;
	char nom[10];
	int prix;

};

void remplissage (struct  Article Tab[20] , int n) {

	for(int i = 0 ; i <=n ; i++) 
	{
	printf("entrer code nom prix ");
	scanf("%d",&Tab[i].code);
	scanf("%s",&Tab[i].nom);
	scanf("%d",&Tab[i].prix);

	}
	}

main() {
int i , n ;

struct Article Tab[20];
printf("donner nombre d'article");

scanf("%d",&n);
remplissage(Tab, n);


}
