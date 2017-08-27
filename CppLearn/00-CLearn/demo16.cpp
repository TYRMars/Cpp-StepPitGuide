#include <stdio.h>
#include <stdlib.h>
int main(void){
	int input,cnt=0,pwd=6128;
	do
	{
		printf("请输入密码！");
		scanf("%d",&input);
		cnt++;
		if (input==pwd)
		{
			printf("密码输入正确欢迎进入本系统");
			break;
		}
		if (cnt>=3)
		{
			printf("输入密码超过三次！！！！！你很危险");
			return 0;
		}
	} while (input!=pwd);
	printf("你好棒！！！\n");
	return 0;
}