#include<stdio.h>
#include<stdlib.h>


int isPrime( int x)
{
	
	int S=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		S=S+1;
	}
	if(S<=2)
	{
		printf("%d La so nguyen to\n",x);
	}else
	{
		printf("%d Khong phai la so nguyen to\n",x);
	}
	

}
int main()
{
	int n;
	printf("Please, enter a number :\n");
	scanf("%d", &n);
	isPrime(n);
	printf("\n");
	int a;
	printf("Nhap a :\n");
	scanf("%d", &a);
	int b;
	printf("Please, enter a number :\n");
	scanf("%d", &b);
	for (int i=a; i<=b;i++)
	{
	isPrime(i);
	}

}


