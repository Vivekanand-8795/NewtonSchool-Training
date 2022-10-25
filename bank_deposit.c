#include<stdio.h>
int main(){
	float fd,t,r,num;
	printf("enter number :");
	scanf("%f",&num);
	printf("enter year :");
	scanf("%f",&t);
	printf("enter rate :");
	scanf("%f",&r);
	
		fd=(num*t*r)/100;
		printf("fixed deposit :%f",fd);
	
}
