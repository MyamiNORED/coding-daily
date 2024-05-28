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

void
sort_cin(int N){
	int j;
	struct Abscence abscence x[];
	for(i = 0 ;i< N; i++) {
	for(j = i+1;j<N;i++){	
	
	if(strcmp(T[j].cin,T[i].cin) ==1){
	x = T[i];
	T[i] = T[j];
	T[j] = T[i];
	
	}
}}
};







void main() {
int i ;
int N  =  4 ;
struct Abscence  T[N];
remplissage(T , N);
sort_cin(N);

 for (int i = 0; i < N; i++) {
       
            printf("\n %d %s %s %s %s %02d/%02d/%04d",
                   T[i].nemuro,
                   T[i].nom,
                   T[i].prenom,
                   T[i].cin,
                   T[i].motif,
                   T[i].date.jour,
                   T[i].date.moi,
                   T[i].date.annee);
        
    }




}
