#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int main(void){
	int sum,a=5,b=3;
	sum =add(a,b);
	printf("%d+%d=%d\n",a,b,sum);
	return 0;
}
int add(int num1,int num2){
	int a;
	a=num1+num2;
	return a;
}