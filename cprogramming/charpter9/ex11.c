
#include<stdio.h>


int  has_zero(int a[], int n); 

int  has_zero(int a[], int n) {
	int i ;
	for (i = 0 ; i < n ; i++)
	{	if (a[i] == 0 )
		return 1;
	}
	return 0;
	
}
int main() {

int a[] = {1,24,4,0};

int b[] = {1,24,4};

printf("\n  %d",has_zero(a,4));
printf("\n  %d",has_zero(b,3));

return 0 ;

}
