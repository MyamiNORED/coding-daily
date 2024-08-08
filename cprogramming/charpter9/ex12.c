#include<stdio.h>

float median(float x , float y , float z);

float book(float x , float y , float z);

float median(float x , float y , float z){

return ((x <= y) && (( y <= z )  && (z <= y ) )) ? y : ( (x  > y) && (x > z) )   ? x : z;


}

float book(float x , float y , float z){

	if(x<= y) 
		if (y <= z ) return y;
		else if (x <= z) return z;
		else return x;
	if (z <= y ) return  y;
	if (x <= z) return x;
	return z;
}








int main() {

printf("%f",median(7 ,2,0));

printf("\n%f",book(7 ,2,0));
return 0;
}
