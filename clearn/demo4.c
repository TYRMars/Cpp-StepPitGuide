#include <stdio.h>

int main(void)
{
	int a,b;
	int c;
	printf("请输入两个字\n");
	scanf("%d %d",&a,&b);
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%d\n",a,b,a/b);
}