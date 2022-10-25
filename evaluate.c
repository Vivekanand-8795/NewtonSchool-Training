#include<stdio.h>
int main(){
	float z,a,b,c,d,e,F;
	printf("enter the value of a :");
	scanf("%f",&a);
	printf("enter the value of b :");
	scanf("%f",&b);
	printf("enter the value of c :");
	scanf("%f",&c);
	printf("enter the value of d :");
	scanf("%f",&d);
	printf("enter the value of e :");
	scanf("%f",&e);
	printf("enter the value of F :");
	scanf("%f",&F);
	z=a*b+(c/d)-e*F;
	printf("total value : %f",z);
	return 0;
}
