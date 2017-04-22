#include <stdio.h>
#include <time.h>
int main(void)
{
	int x=2,y,cnt=0,tag,i,sum1=0,sum2=0,sum=0;
	int n,m;
	scanf("%d %d",&n,&m);
	while(cnt<m){
		tag = 1;
		for (i = 2; i <= x/2; i++)
		{
			if (x%i==0)
			{
				tag =0;
				break;
				/* code */
			}
			/* code */
		}
		if ((tag==1)&&(cnt<n))
		{
			sum1 = sum1+x;
			y=x;
			/* code */
		}
		if (tag==1)
		{
			cnt++;
			sum2=sum2+x;
			/* code */
		}
		x++;
	}
	sum = sum2 - sum1 + y;
	printf("%d\n", sum);
	return 0;
}