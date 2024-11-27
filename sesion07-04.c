#include<stdio.h>
int main(){
	int n;
	printf("Moi Ban Nhap vao phan tu cua mang la:  ");
	scanf("%d",&n);
	int array[n];
	for(int dodai = 0; dodai < n; dodai++){
	printf("Nhap Phan Tu Thu %d la: ",dodai + 1);
	scanf("%d",&array[dodai]);
}
return 0;
}

