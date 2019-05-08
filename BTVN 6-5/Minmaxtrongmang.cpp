#include<stdio.h>

int main(){
	int n[10];
	for(int i=0; i<10;i++){
		printf("Nhap so thu  %d : \n",i);
		scanf("%d", &n[i]);
	}
	int max=n[0];
	for (int i = 0; i < 10; i++){
		 if (max < n[i])
            max = n[i];
	}
       
	printf(" So lon nhat trong mang la : %d \n",max);
	
	int min=n[0];
	for (int i = 0; i < 10; i++){
		 if (min > n[i])
            min = n[i];
	}
       
	printf(" So nho nhat trong mang la : %d \n",min);
	
}
