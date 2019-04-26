#include<stdio.h>

int main(){
	int n;
	printf("Nhap so :\n");
	scanf("%d",&n);
	int S=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
		S=S+1;}
	if(S<=2){
		printf("%d la so nguyen to",n);
	}else{
		printf("%d khong phai la so nguyen to",n);
	}
	
return 0;
}


