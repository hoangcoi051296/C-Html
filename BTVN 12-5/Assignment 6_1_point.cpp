#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	do{
		printf("Nhap so phan tu :\n");
	scanf("%d",&n);
	}while(n<=0);
	int *arr;
	arr=(int*)malloc(n*sizeof(int));
	for(int i=0; i<n;i++){
		bool flag=true;
		while(flag){
			int count=0;
			printf("Nhap so thu  %d : \n",i);
			scanf("%d", arr+i);
			for (int j=0; j<i;j++){
				if(*(arr+i)==*(arr+j)){
					count++;
				}
			}if(count==0){
				flag= false;
			}
			
		}
		
	
		}
	
	int i,j, temp;
	for(int i=0;i<n-1;i++){
		for( j=0;j<n-i-1;j++){
			if (*(arr+j)>*(arr+j+1)){
			int temp = *(arr+j);
		*(arr+j)=*(arr+j+1);
		*(arr+j+1)=temp;
			}
		}
		
	 
	}
	printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr+i));
	
	}
	}
