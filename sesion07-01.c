#include<stdio.h>
int main(){
	int array[] = {10,20,30,40,50};
	int n = sizeof(array) / sizeof(array[0]);
	int i;
	printf("Do dai cua mang la : %d \n",n);
	for(i = 0; i < n; i++){
		printf("Phan tu thu %d la: %d \n",i,array[i]);
	}
	return 0;
}
