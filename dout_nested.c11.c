#include<stdio.h>
int main(){
	int i,j;
	for (i=2;i<=8;i+=2){
		for(j=2;j<=i;j+=2){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
