#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cua mang:\n");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n;i++){
		printf("Nhap so thu  %d : \n",i);
		scanf("%d", &arr[i]);
		if (arr[i]==arr[i-1]){
			break;
		}
	}
	int i,j, temp;
	for(int i=0;i<n-1;i++){
		for( j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
			int temp = arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
		
	 
	}
	printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
	
	}
	}
