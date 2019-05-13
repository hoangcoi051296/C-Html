#include<stdio.h>

int main(){
	int m,n;
	do
	{
		printf("Nhap so hang:\n");	
		scanf("%d",&m);
		printf("Nhap so cot:\n");	
		scanf("%d",&n);
	}while(n<=0,m<=0);
	int A[m][n];
	for( int i=0; i<m; i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("A[%d][%d] = \n",i,j);
			scanf("%d", & A[i][j]);
			
		}
	}
	int B[m][n];
	int tong[m][n];
	int hieu[m][n];
	
	for( int i=0; i<m; i++)
	{
		for (int j=0;j<n;j++)
		{
			printf("B[%d][%d] = \n",i,j);
			scanf("%d", & B[i][j]);
			
		}
	}
	for (int i=0; i<m; i++){
		for( int j=0; j<n;j++){
			printf("%3d", A[i][j]);
			
		}printf("\n");
	}
		printf("\n");
		for (int i=0; i<m; i++){
		for( int j=0; j<n;j++){
			printf("%3d", B[i][j]);
			
		}printf("\n");
	}
	printf("\n");
	for (int i=0; i<m;i++){
		for( int j=0;j<n;j++){
			tong[i][j]=A[i][j]+B[i][j];
			printf("%3d", tong[i][j]);
		}printf("\n");
	}
		printf("\n");
	for (int i=0; i<m;i++){
		for( int j=0;j<n;j++){
			hieu[i][j]=A[i][j]-B[i][j];
			printf("%3d", hieu[i][j]);
		}printf("\n");
	}
}
