#include "stdio.h"

int main(void)
{
	int a=0,b=0,c=0,d=0,e=0,i=0;
	char *p,s[20];/*p是指针字符串，s是字符串数组*/
	while((s[i]=getchar())!='\n') i++;/*类似于printf，但是它可以通过while查找到你输入的每一个字符，最后回车输入完毕*/
	p=s;
	while(*p!=10){
		if(*p>='A'&&*p<='Z')a++;
		else if(*p>='a'&&*p<='z')b++;
		else if(*p==' ')c++;
		else if(*p>='a'&&*p<='z')d++;
		else e++;
		p++;
	}
	printf("大写字母 %d 小写字母 %d \n",a,b);
	printf("空格 %d 数字 %d 其他字符 %d\n",c,d,e);
	
}