#include<stdio.h>
int N = 100;
struct Appartement 
	{

	int N;
	float S;
	float P;
	};


struct Appartement T[N];


void Saisir() {

	printf("entrer Nemuro appartement superficie et prix");
	for(int  i = 0 ; i < N ; i++){
	scanf("%d %f %f",&T[i].N,&T[i].S,&T[i].P);
}
};


void Trie() {
	struct Appartement  temp;
	for(int i=0;i<N;i++) {
	for(int j=i+1;j<N;j++) {
	if(T[i].N > T[j].N){temp = T[i];T[i] = T[j];T[j] = temp;}
	}}};


void Affichage () {

	
	for(int  i = 0 ; i < N ; i++){
	printf("\n%d %f %f \n",T[i].N,T[i].S,T[i].P);};

	};






void main(){

for(;;){
int N = 2;
printf("menu \n");
printf("1 insertion\n  2 affichage\n 3 trie \n 0 quiter\n");
int choix ;
scanf("%d",&choix);

if(choix==1){Saisir();}
else if(choix == 2){ Affichage();}
else if(choix == 3 ) {Trie();}
else if (choix == 0) {break;}

}
}






