#include<stdio.h>
int main(){
	int array[5];
	for(int dodai = 0; dodai < 5; dodai++){
	printf("Nhap Phan Tu Thu %d la: ",dodai + 1);
	scanf("%d",&array[dodai]);
}
	printf("Cac phan tu trong mang la : \n");
for(int dodai = 0; dodai < 5; dodai++){
	printf("%d \n",array[dodai]);
}
return 0;
}

