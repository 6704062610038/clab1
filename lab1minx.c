#include<stdio.h>
int main(){
	int num1;
	int num2;
	int a;
	scanf("%d %d",&num1,&num2);
	if(num1>num2){
		a=num1-num2;
		printf("num1 have %d point more than num2",a);
	}
	else{
		a=num2-num1;
		printf("num2 have %d point more than num1",a);
	}
}
