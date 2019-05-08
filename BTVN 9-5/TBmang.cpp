#include<stdio.h>

int main(){
	int x[10];
	for(int i=0; i<10;i++){
		printf("Nhap so thu  %d : \n",i);
		scanf("%d", &x[i]);
	}
	printf("\n");
	int S=0;
	int n=0;
	for(int i=0; i<9;i++){
		S=S+x[i];
		n=n+1;
	}
	printf("Gia tri trung binh cua mang la %d\n",S/n);
	
	}
	

