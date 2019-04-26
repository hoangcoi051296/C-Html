#include<stdio.h>

int main(){
	int n;
	printf("Nhap so :\n");
	scanf("%d",&n);
	int S=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
		printf(" %d   ",i);
		}
	
	
return 0;
}

