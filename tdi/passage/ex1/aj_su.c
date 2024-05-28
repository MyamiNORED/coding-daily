#include<stdio.h>


int arr[]; 
int N;
void Tri(int N, int arr[]){
	int temp;
	for(int i =0 ; i < N; i++) {
	for(int j = i+1 ; j < N ; j++) {
	if (arr[i] > arr[j] ) {temp = arr[i];arr[i] = arr[j];arr[j] = temp;}}}

	};


main() {
int arr[]= { 7 , 2 , 1 ,10,8,11,44,4};
int N = 8;
Tri(N,arr);

for (int i = 0 ; i < N; i++) {
	printf(" %d ",arr[i]);

}


}
