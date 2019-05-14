#include<stdio.h>
#include<stdlib.h>

int main(){
int *arr;
	arr=(int*)malloc(10*sizeof(int));
	
	for ( int i=0;i<10;i++){
		printf("Nhap so thu %d : \n",i);
		scanf("%d", arr+i);}
	printf("\n");
	int S=0;
	int n=0;
	for(int i=0; i<10;i++){
		S=S+*(arr+i);
		n=n+1;
	}
	
	printf("Gia tri trung binh cua mang la %d\n",S/n);
	
	}


	

