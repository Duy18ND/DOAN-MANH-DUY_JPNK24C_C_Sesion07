#include<stdio.h>
int main(){
	int array[5];
	for(int dodai = 0; dodai < 5; dodai++){
	printf("Nhap Phan Tu Thu %d la: ",dodai + 1);
	scanf("%d",&array[dodai]);
}
for(int dodai = 0; dodai < 5; dodai++){
	if(array[dodai] %2 == 0){
		printf("SO CHAN LA: %d \n",array[dodai]);
	}else{
		printf("SO LE LA: %d \n",array[dodai]);
	}
	
}

return 0;
}

