#include "stdio.h"
int main(void)
{
	// 定义两个flout 一个代表f华氏温度，一个代表c摄氏温度
	float c;
	float f;
	int m;
	printf("请选择转换，1.f华氏温度转c摄氏温度 2.c摄氏温度转f华氏温度");
	scanf("%d",&m);

	switch(m){
		/*华氏温度转换摄氏温度*/
		case 1:
		printf("输入f华氏温度");
		scanf("%f",&f);
		c=5*(f-32)/9;
		printf("%fF=%fC\n",f,c);
		break;
		/*摄氏温度转换华氏温度*/
		case 2:
		printf("输入c摄氏温度");
		scanf("%f",&c);
		f=c*9/5+32;
		printf("%fC=%fF\n",c,f);
		break;

		default:printf("错误\n");
	}
	
	return 0;
}