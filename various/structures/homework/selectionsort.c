
#include<stdio.h>


int T[10] = {44,8,7,2,1,3,4,79,21,7};

void
sort(int N) {
int temp;
for(int i = 0 ; i < N;i++)
{
	for(int j=i+1; j<N ; j++){
	
	if(T[j]<T[i] ){

	temp = T[i];
	T[i] = T[j];
	T[j] = temp;

}





}
}
};


main() {

sort(10);

return 0;
}
