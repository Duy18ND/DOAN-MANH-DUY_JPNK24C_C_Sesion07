#include<stdio.h>
int main(){
	int min, max;
	int array[5];
for(int dodai = 0; dodai < 5; dodai++){
	printf("Phan tu thu %d la :",dodai +1);
	scanf("%d",&array[dodai]);
}
for(int dodai = 0; dodai < 5; dodai++){
	if(min > array[dodai]){
		min = array[dodai];
	}
	if(max < array[dodai]){
		max = array[dodai];
	}
}
printf("So min trong phan tu la: %d \n",min);
printf("So max trong phan tu la: %d \n",max);
return 0;
}
