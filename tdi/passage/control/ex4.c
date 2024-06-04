#include<stdio.h>


float prixTTC ( float prixHTC , float TVA) {

	float TTC = prixHTC + (prixHTC * TVA);
	return TTC;

	};


main() {

	float prixHTC;
	float TVA;
	float TTC;

	printf("Entrer le prix hors taxe: ");
	scanf("%f",&prixHTC);
	printf("\nEntrer taux tva de la forme 0.xx: ");
	scanf("%f",&TVA);
	TTC = prixTTC(prixHTC,TVA);
	printf("\nprix TTC est : %.2f ",TTC);


	

}
