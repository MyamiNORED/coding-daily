#include<stdio.h>
#include<string.h>


struct Date {
        int jour[2];
        int moi[2] ;
        int annee[4];
};



struct Abscence {

	int nemuro[100] ;
	char nom[16] ;
	char prenom[16] ;
	char cin[8] ;
	char motif[50];
	struct Date date;
};


void remplissage(struct Abscence abscence[2],int n)
{
	printf("enter absences in this format\n");
	printf("nemuro:nom:prenom:cin:motif:date\n");

	for(int i =0 ; i <n ; i++) {
		scanf("%d:%s:%s:%s:%s:%d:%d:%d",
		&abscence[i].nemuro,&abscence[i].nom,
		&abscence[i].prenom,&abscence[i].cin,
		&abscence[i].motif,&abscence[i].date.jour,
		&abscence[i].date.moi,&abscence[i].date.annee);

	printf("\nrecu\n");
}

};

void search(struct Abscence abscence[], char nom[], int size) {
    printf("\nSearching for %s .........", nom);
    for (int i = 0; i < size; i++) {
        if (strcmp(abscence[i].nom, nom) == 0) {
            printf("\nFound: %d %s %s %s %s %d/%d/%d",
                   abscence[i].nemuro,
                   abscence[i].nom,
                   abscence[i].prenom,
                   abscence[i].cin,
                   abscence[i].motif,
                   abscence[i].date.jour,
                   abscence[i].date.moi,
                   abscence[i].date.annee);
        }
    }



};










void main() {
int size = 2 ;
struct Abscence  abscence[size];
remplissage(abscence , size);
char nom[] = "myami";
search(abscence,nom,size);


}
