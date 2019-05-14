#include<stdio.h>
#include<stdlib.h>

int main(){
	int *arr;
	arr=(int*)malloc(4*4*sizeof(int));
	
	
	for( int i=0; i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			printf("arr[%d][%d] = \n",i,j);
			scanf("%d", arr+4*i+j);
			
		}
	}
	for (int i=0; i<4; i++)
	{
		for( int j=0; j<4;j++)
		{
			printf("%5d", *(arr+4*i+j));
			
		}printf("\n");
	}
		
	printf("\n");
	
	int max;
	int vitri=0;
	for ( int i=0;i<4;i++) 
	{
		int temp=0;
		for ( int j=0; j<4;j++)
		{  
			temp += *(arr+4*i+j);
			
			
		}if (i==0){
			max=temp;
		}
			if (temp>max){
			max=temp;
			vitri=i;
			
		}
		
		
	}
	
	printf(" Gia tri hang lon nhat la %d tai vi tri hang thu %d\n",max,vitri
	);
	
}
/*arr[i][j] tuong duong voi arr + socot * i + j*/
