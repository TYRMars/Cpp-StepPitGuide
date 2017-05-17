#include "stdio.h"

int main(void)
{
	int a[5][5]={{2,1,1,1,2}, {1,2,1,2,1}, {1,1,2,1,1}, {1,2,1,2,1}, {2,1,1,1,2}};
	int s1=0;
	int s2=0;
	int s3=0;
	int sum1=0;
	int sum2=0;
	int m=0;
	int n=0;
	int i=0;
	int j=0;

    // 主对角线
   
	for (i = 0; i <5; i++)
	{
		s1 +=a[i][j];
		j+=1;
	}
	// 次对角线
	j=0;
	for (i = 4; i >=0; i--)
	{
		s2 +=a[i][j];
		j+=1;
	}
	// 环形计算
	//先计算第一行和最后一行
	for (int i = 0; i < 5; i++)
	{
		m+=a[i][0];
		n+=a[i][4];
	}
	sum1=m+n;

	m=0;
	n=0;
	for (int j = 1; j < 4; j++)
	{
		m+=a[0][j];
		n+=a[4][j];
	}
	sum2=m+n;

	s3=sum1+sum2;

	printf("%d\n",s1);
	printf("%d\n",s2);
	printf("%d\n",s3);
}