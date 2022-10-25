#include<stdio.h>
int main(){
	float num,t,interest,deposit;
	printf("enter the number :");
	scanf("%f",&num);
	printf("enter the year:");
	scanf("%f",&t);
	if(num>10001){
		interest=(num*t*6)/100;
		printf("enter the amount of 1 :%f",interest);
	}else if(10001<num&&50000>num){
		interest=num/100*7.5;
		printf("enter the amount of 2 :%f",interest);
	}else if(num){
		interest=num/100*9;
		printf("enter the amount of 3 :%f",interest);
	}else{
		printf("all other deposit ");
		scanf("%f",deposit);
			interest=num/100*4.5;
		printf("enter the amount of 4 :%f",interest);
	}
	return 0;
}
