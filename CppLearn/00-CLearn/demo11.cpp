#include "stdio.h"
int main(void)
{
	int A[200]={0};
	int a=16;
	int b=19;
	int i=0;
	while(a!=0&&i<200){
		a=a*10;
		a=a%b;
		A[i]=a;
		i++;
	}
	for (i = 0; i < 200; ++i)
	{
		printf("%d\n",A[i]);
	}
}