#include<stdio.h>
#include<stdlib.h>

int main(){
	int m,n;
	do
	{
		printf("Nhap so hang:\n");	
		scanf("%d",&m);
		printf("Nhap so cot:\n");	
		scanf("%d",&n);
	}while(n<=0,m<=0);
	int *A;
	A=(int*)malloc(m*n*sizeof(int));
	for( int i=0; i<m; i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("A[%d][%d] = \n",i,j);
			scanf("%d", A+n*i+j);
			
		}
	}
	int *B;
	B=(int*)malloc(m*n*sizeof(int));
	for( int i=0; i<m; i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("B[%d][%d] = \n",i,j);
			scanf("%d", B+n*i+j);
			
		}
	}
	int *T;
	T=(int*)malloc(m*n*sizeof(int));
	int *H;
	H=(int*)malloc(m*n*sizeof(int));
	
	for (int i=0; i<m; i++){
		for( int j=0; j<n;j++){
			printf("%3d", *(A+n*i+j));
			
		}printf("\n");
	}
		printf("\n");
		for (int i=0; i<m; i++){
		for( int j=0; j<n;j++){
			printf("%3d", *(B+n*i+j));
			
		}printf("\n");
	}
	printf("\n");
	for (int i=0; i<m;i++){
		for( int j=0;j<n;j++){
			*(T+n*i+j)=*(A+n*i+j)+*(B+n*i+j);
			printf("%3d", *(T+n*i+j));
		}printf("\n");
	}
		printf("\n");
	for (int i=0; i<m;i++){
		for( int j=0;j<n;j++){
			*(H+n*i+j)=*(A+n*i+j)-*(B+n*i+j);
			printf("%3d", *(H+n*i+j));
		}printf("\n");
	}
}
