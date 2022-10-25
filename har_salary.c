#include<stdio.h>
int main(){
	float bs,hra,da,gs;
	printf("enter the basic salary :");
	scanf("%f",&bs);
	hra=bs*(85.00/100);
	da=bs*(45.00/100);
	gs=hra+da+bs;
	printf("gross salary = %f\n",gs);
	return 0;
}
