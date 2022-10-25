#include<stdio.h>
int main(){
	char ch,A,Z,a,z;
	printf("enter the character :");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("lower case character :%c",ch+32);
	}else if(ch>='a'&&ch<='z'){
		printf("upper case character :%c",ch-32);
	} else
	{
		printf("invalid character:");
	}
	return 0;
}
