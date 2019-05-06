#include<stdio.h>

int main(){
		int n;
	printf("Nhap so n tu ban phim:\n");
	scanf("%d",&n);
	int S=0;
	
	for(int i=1;i<n;i++){
		if(n%i==0)
		S=S+i;
		}
			if(S==n){
		printf("So %d la so hoan hao",n);
	}else{
		printf("So %d khong phai la so hoan hao",n);

	}}
	

