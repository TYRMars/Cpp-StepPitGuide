#include <stdio.h> 
#include <ctype.h> 
struct sample { int num; char color; char type;}
car[]={101,'G','C',210,'Y','M',105,'R','L', 220,'B','C',308,'W','M',0,'\0','\0'}; 

struct sample find(int n) 
// 结构型函数：按编号查找
{ 
	int i; 
	for (i=0;car[i].num!=0;i++) 
		if (car[i].num==n) break; 
	return(car[i]); 
}
int main(void) 
{
	int number; 
    char ch='y'; 
    struct sample result; 
    while(toupper(ch)=='Y') // 允许反复查找 
    	{ printf("输入编号:"); 
    scanf("%d",&number); 
    result=find(number); // 接收结构型函数返回的结构变量 
    if (result.num!=0) { 
    	printf("编号:%d ",result.num); 
    	printf("颜色:%c ",result.color); 
    	printf("型号:%c\n",result.type); 
    } 
    else printf("所找编号不存在！\n"); 
    printf("是否继续查找(Y/N)?"); 
    scanf("%*c%c",&ch);}
}
