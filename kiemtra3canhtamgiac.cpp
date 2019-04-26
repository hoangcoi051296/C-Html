#include<stdio.h>

int main(){
	unsigned int a;
	printf("Nhap canh a tu ban phim:\n");
	scanf("%d",&a);
	unsigned int b;
	printf("Nhap canh b tu ban phim:\n");
	scanf("%d",&b);
	unsigned int c;
	printf("Nhap canh c tu ban phim:\n");
	scanf("%d",&c);
	if(a+b>c && a+c>b&& b+c>a){
		printf("a ,b ,c la 3 canh cua 1 tam giac");
	}else{
		printf("a,b,c khong la 3 canh cua 1 tam giac");
	}
}
