#include<stdio.h>
#include<stdlib.h>

int main(){
int *arr;
	arr=(int*)malloc(10*sizeof(int));
	
	for ( int i=0;i<10;i++){
		printf("Nhap so thu %d : \n",i);
		scanf("%d", arr+i);}
		int n;
		printf("Nhap so n can tim\n");
		scanf("%d",&n);
	int dem=0;
	for(int i=0;i<10;i++){
		if(*(arr+i)==n){
			dem++;
		}
	}
	if(dem==0){
		printf("Khong tim thay so %d ",n);
	}else{
		printf("So %d tim thay %d lan\n",n,dem);
	}

	

	}
	
