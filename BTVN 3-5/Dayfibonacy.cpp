#include<stdio.h>

int main(){
	long long x=0,y=1,z;
	for( int i=1; i<100;i++){
		
		x=y;
		y=z;
		z=x+y;
		
	}
	printf("%lld \n" ,z);
	
}
