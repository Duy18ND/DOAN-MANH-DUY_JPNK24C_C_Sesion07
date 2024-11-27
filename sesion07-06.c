#include<stdio.h>
int main(){
	int sochan = 0,sole = 0;
	int array[5] = {4,6,2,3,9};
	
	for(int i = 0; i < 5; i++){
		printf("INPUT phan tu thu %d la: %d \n",i +1,array[i]);
	}
	for( int i = 0; i < 5; i++){
		if(array[i] % 2 == 0){
		sochan = array[i] + 3; 
		printf("OUTPUT Phan tu CHAN thu %d la: %d + 3 = %d \n",i +1,array[i],sochan);
		}else{
			sole = array[i] + 2;
			printf("OUTPUT Phan tu LE thu %d la: %d + 2 = %d \n",i +1,array[i],sole);
		}
	}
	return 0;
}
