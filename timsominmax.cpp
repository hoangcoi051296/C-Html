#include<stdio.h>

int main(){
	int a;
	printf("Nhap so a tu ban phim:\n");
	scanf("%d",&a);
	int b;
	printf("Nhap so b tu ban phim:\n");
	scanf("%d",&b);
	int c;
	printf("Nhap so c tu ban phim:\n");
	scanf("%d",&c);
if(a>b){
	if(a>c){
		if(b>c){
			printf("%d la so lon nhat\n",a);
			printf("%d la so nho nhat\n",c);
		}else{
			printf("%d la so lon nhat\n",a);
			printf("%d la so nho nhat\n",b);
		}
	}else{
		printf("%d la so lon nhat\n",c);
		printf("%d la so nho nhat\n",b);
	}
}else{
	if(a<c){
		if(b>c){
			printf("%d la so lon nhat\n",b);
			printf("%d la so nho nhat\n",a);
		}else{
			printf("%d la so lon nhat\n",c);
			printf("%d la so nho nhat\n",a);
		}
	}else{
		printf("%d la so lon nhat\n",b);
		printf("%d la so nho nhat\n",c);
	}
	
}
	
	}
	
	
