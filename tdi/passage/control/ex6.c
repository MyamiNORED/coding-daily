/*

********************Exercice 6**************************************************************************
Ecrire le programme somme en python à partir de

	L=(8,5,4,9,11,1,3,5,2,7,15,)

1- Multiplier la valeur 3 à chacun de ses éléments

2- Ajouter la valeur 22 à la fin de la liste

3- Construire la liste ‘’paire ‘’ qui contient les nombres pairs de L et la liste impaire qui contient les nombres
impairs de L

4- Afficher les 3 premiers éléments

5- Supprimer la valeur 5

6- Inverser l’ordre de l’élément de L

7- Afficher le 2 eme élément en partant de la Fin

**********************************************************************************************************
*/


#include<stdio.h>

main() {

int L[] = {8,5,4,9,11,1,3,5,2,7,15};
int N = 11;// taille du tableau

//1- Multiplier la valeur 3 à chacun de ses éléments

for (int i = 0 ; i < N ; i++) {

	L[i] = L[i] * 3;
}

//2- Ajouter la valeur 22 à la fin de la liste
L[N-1] = L[N-1] + 22;

//3- Construire la liste ‘’paire ‘’ qui contient les nombres pairs de L et la liste impaire qui contient les nombres  impairs de L
//determinin combien y a t il de nombre pair et impair 
//m sera la taille de liste pair,n sera la taille de la liste impair
int m = 0;
int n = 0;
for (int i  = 0 ; i < N; i++) {
	if (L[i] % 2 == 0) {  m++;}
	else { n++;}
}

int pair[m];
int impair[n];
int k=0;
int p = 0;
for (int i  = 0 ; i < N; i++) {

	if (L[i] % 2 == 0) { pair[k]= L[i];k++; }

	else {impair[p] = L[i];p++;}

}
//4- Afficher les 3 premiers éléments 
printf("\nles trois premier elements de la liste pair ");

for (int i  = 0 ; i < 3; i++) {printf("%d ",pair[i]);}

printf("\nles trois premier elements de la liste impair ");


for (int i  = 0 ; i < 3; i++) {printf("%d ",impair[i]);}



}
