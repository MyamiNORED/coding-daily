//Exircice complet langage C gestion des abscences
//les bibliothèques
#include<stdio.h>
#include<string.h>
//les structures date et absence
struct date{
	int j,m,a;
};
struct abs{
	int num;
	char nom[10],prenom[10],cin[10],motif[20];
	struct date dtAbs;
};
//procédure de saisir abs
struct abs T[500];
int N,i;
void saisir(int N){
	for(i=0;i<N;i++){
		printf("saisir le numero le nom le prenom la  cin le motif d-absence et la date d-absence du personne %d \n",i+1);
		scanf("%d",&T[i].num);
		scanf("%s",T[i].nom);
		scanf("%s",T[i].prenom);
		scanf("%s",T[i].cin);
		scanf("%s",T[i].motif);
		scanf("%d",&T[i].dtAbs.j);
		scanf("%d",&T[i].dtAbs.m);
		scanf("%d",&T[i].dtAbs.a);
	}}
//procédure de recherche abs par date
void Recherche_Par_Date(int N,struct date x){
	printf("donner la date dabsence");
	scanf("%d%d%d",&x.j,&x.m,&x.a);
	for(i=0;i<N;i++){
		if(T[i].dtAbs.a==x.a && T[i].dtAbs.m==x.m && T[i].dtAbs.j==x.j){
			printf("%s%s\n",T[i].nom,T[i].prenom);}}}
//procédure de recherche abs par nom et prenom
void Recherche_Par_NP(int N,char n[],char p[]){
printf("saisir nom prenom");
scanf("%s%s",n,p);
	for(i=0;i<N;i++){
		if(strcmp(T[i].nom,n)==0 && strcmp(T[i].prenom,p)==0){
			printf("%s",T[i].cin);}}}
//procédure de trier abs par cin
void Trie_Par_CIN(int N){
	int j;
	struct abs x;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;i++){
			if(strcmp(T[j].cin,T[i].cin)==1){
			x=T[i];
		    T[i]=T[j];
		    T[j]=x;}}}}
//procédure de trier abs par numero
void Trie_Par_Num(int N){
	struct abs x;
	int j;
	for(i=0;i<N;i++){
		for(j=i+1;j<N;i++){
			if(T[j].num>T[i].num){
				x=T[i];
				T[i]=T[j];
				T[j]=x;}}}}
//procédure d'afficher toutes abs
void Afficher(int N){
	for(i=0;i<N;i++){
	printf("[%d][%s][%s][%s][%s][%d-%d-%d]\n",T[i].num,T[i].nom,T[i].prenom,T[i].cin,T[i].motif,T[i].dtAbs.j,T[i].dtAbs.m,T[i].dtAbs.a);
	}}
//procédure de modifier une abs
void Modifier(int N,char no[],char pre[]){
int nouveauNum;
printf("modif saisir nom prenom");
scanf("%s%s",no,pre);
printf("saisir nouveau Num");
scanf("%d",&nouveauNum);
for(i=0 ;i<N ;i++)
if(strcmp(T[i].nom,no)==0 && strcmp(T[i].prenom,pre)==0)
T[i].num=nouveauNum;}
//procédure de supprimer une abs
void Supprimer(int N,int nm){
int j;
printf("numéro absence :\n");
scanf("%d",&nm);
for(i=0 ;i<N ;i++)
if(T[i].num==nm)
for(j=i ;j<N ;j++)
T[j]=T[j+1];}
//procédure de ajouter une abs
void Ajouter(){
printf("Ajouter new absence:\n");
		scanf("%d%s%s%s%s%d%d%d",&T[i].num,T[i].nom,T[i].prenom,T[i].cin,T[i].motif,&T[i].dtAbs.j,&T[i].dtAbs.m,&T[i].dtAbs.a);}
//Procédure de sauvegarder les abcences
void Sauvgarder(int N){
FILE*absence;
	absence=fopen("C:\\Users\\Lehouizi\\Desktop\\absence.txt","w");
	if(!absence)
	printf("erreur\n");
	else
	printf("ruessite\n");
	for(i=0;i<N;i++){
	fprintf(absence,"%d%s%s%s%s%d%d%d\n",T[i].num,T[i].nom,T[i].prenom,T[i].cin,T[i].motif,T[i].dtAbs.j,T[i].dtAbs.m,T[i].dtAbs.a);}}
//Programme principale pour executer toutes les procédures
main(){
	struct date dt;
	char n[10],p[10],no[10],pre[10];
	int N,nm,choix;
	printf("saisir le dimension du tableau");
	scanf("%d",&N);
	for(;;){
	printf("***********Taper votre Choix***********\n");
	printf("***********<<<<<<<Menu>>>>>>***********\n");
	printf(" 1:Saisir les absences\n 2:Recherche abs par date\n 3:Recherche abs par nom et prenom\n 4:Trier abs par cin\n 5:Trier abs par numero\n 6:Afficher toutes abs\n 7:Modifier une abs\n 8:Supprimer une abs\n 9:Ajouter une abs\n 10:Sauvegarder une abs\n 0:quitter le programme\n");
	printf("***************************************\n");
	scanf("%d",&choix);
	if(choix==1){saisir(N);}
	else if(choix==2){Recherche_Par_Date(N,dt);}
	else if(choix==3){Recherche_Par_NP(N,n,p);}	
	else if(choix==4){Trie_Par_CIN(N);}
	else if(choix==5){Trie_Par_Num(N);}
	else if(choix==6){Afficher(N);}
	else if(choix==7){Modifier(N,no,pre);}
	else if(choix==8){Supprimer(N,nm);}
	else if(choix==9){Ajouter();}
	else if(choix==10){Sauvgarder(N);}
	else if(choix==0){break;}
	}
	return 0;
}





















