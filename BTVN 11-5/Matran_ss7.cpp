#include<stdio.h>

int main(){
	int arr[4][4];
	
	for( int i=0; i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("arr[%d][%d] = \n",i,j);
			scanf("%d", & arr[i][j]);
			
		}
	}
	for (int i=0; i<4; i++)
	{
		for( int j=0; j<4;j++)
		{
			printf("%5d", arr[i][j]);
			
		}printf("\n");
	}
		
	printf("\n");
	int S[8];
	
	for ( int i=0;i<4;i++) 
	{
		for ( int j=0; j<4;j++)
		{  
			S[i] += arr[i][j];
			
			
		}	
		
		
	}
	int max= S[0];
	for (int i = 0; i < 4; i++)
	{
		 if (max < S[i])
            max = S[i];
	}
	printf(" Gia tri hang lon nhat la %d\n",max);
	
}
