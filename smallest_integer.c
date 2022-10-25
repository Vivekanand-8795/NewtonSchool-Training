#include<stdio.h>
int main(){
	int x,y,smallest;
	printf("enter two number \n");
	scanf("%d%d",&x,&y);
	smallest=(x<y&&y<x)?(x):((y<x&&x<y)?(y):(x));
	printf("smallest number is : %d",smallest);
	return 0;
}
