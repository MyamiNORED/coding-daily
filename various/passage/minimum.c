#include<stdio.h>
float
minimum(float Tab[],int size )
	{
	float min = Tab[0];
	for(int i = 0 ; i < size; i++) 
	{
	if(Tab[i] < min){min = Tab[i];}
	
	}
	return min;
	}

void 
insert(float Tab[],int taille,float element,int position)
	{
	float N[taille+1];
	int j = 0;
	for(int i =0 ; i <taille; i++)
	{
	if(i!=position-1){N[j] = Tab[i];j++;}
	else{N[position-1] = element;j++;}
	}
	printf("\n%.2f",N[6]);
	}

main() {
float  tab[10] = {6,-2,9,0,2,3,1.1,1,2,3};

printf("%.2f" ,minimum(tab,10));

insert(tab,10,77,7);


}
