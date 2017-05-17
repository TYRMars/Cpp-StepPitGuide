#include "stdio.h"

int main(void)
{
	float i,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,y;
	printf("请输入金额");
	scanf("%f",&i);
	printf("请输入利率");
	scanf("%f",&y);
	t1=i+(i*y);
	t2=t1+(t1*y);
	t3=t2+(t2*y);
	t4=t3+(t3*y);
	t5=t4+(t4*y);
	t6=t5+(t5*y);
	t7=t6+(t6*y);
	t8=t7+(t7*y);
	t9=t8+(t8*y);
	t10=t9+(t9*y);
	printf("10年后，本金含利息共有：%.2f\n",t10);
	return 0;
}

