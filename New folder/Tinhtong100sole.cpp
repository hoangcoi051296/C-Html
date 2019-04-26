#include<stdio.h>

int main(){
	int S=0;
	int i=1;
	for(int n=1;n<=100;n++){
		S=S+i;
		i=i+2;
	}
	printf("S=%d\n",S);
	
return 0;
}
