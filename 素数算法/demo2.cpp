#include <stdio.h>
#include <time.h>
int main(void)
{
	
	int x=2,y,cnt=0,tag,i,sum=0;
	int n,m;
	scanf("%d %d",&n,&m);
	while(cnt<m){

		tag = 1;
		for (i = 2; i <= x/2; i++)
			{
				if (x%i==0)
				{
					tag=0;
					break;
					/* code */
				}
				/* code */
			}
			if(tag==1){
				cnt++;
			}
			if ((tag==1)&&(cnt>=n))
			{
				sum+=x;
				/* code */
			}
			x++;
			/* code */
	}
	printf("%d\n",sum);
}