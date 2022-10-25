#include<stdio.h>
int main(){
	float bill,rs,rental,unit,total;
	printf("enter the bill:");
	scanf("%f%f%f",&rental,&rs,&unit);
total=rs*unit+rental;
printf("total bill= %f",total);
return 0;
}
