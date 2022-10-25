#include<stdio.h>
int main(){
	int per;
	printf("enter the number :");
	scanf("%d",&per);
	if(per>=60){
		printf("first");
	}else if(45<=per<60){
		printf("second");
	}else if(33<=per<45){
		printf("third");
	}else if(per<33){
		printf("needs improvement");
	}else{
		printf("failed");
	}
	return 0;
}
