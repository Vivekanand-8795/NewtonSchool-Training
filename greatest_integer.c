#include<stdio.h>
int main(){
	int a,b,c, large;
	printf("enter three numbers \n :");
	scanf("%d%d%d",&a,&b,&c);
	large=(a>b&&b>a)?(a):((b>c&&c>b)?(b):(c));
	printf("largest number is :%d",large);
	return 0;
}
