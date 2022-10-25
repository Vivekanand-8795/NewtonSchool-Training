#include<stdio.h>
int main(){
	int physics,chemistry,biology,sum,aveg;
	printf("enter marks : ");
	scanf("%d",&physics);
	printf("enter marks : ");
	scanf("%d",&chemistry);
	printf("enter marks : ");
	scanf("%d",&biology);
	sum=physics+chemistry+biology;
	printf("marks : %d",sum);
	aveg=sum/3;
	printf("total marks : %d",aveg);
	return 0;
}
