#include<iostream>
using namespace std;

//矩形 字符填充
void dispIsoscelesTriangle_1()
{
	int i,j,n=6;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			cout<<" ";
		for(j=1;j<=2*i-1;j++)
			cout<<"*";
		cout<<endl;
	}
}
//矩形 边框行
void dispIsoscelesTriangle_2()
{
	int i,j,n=6;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+i-1;j++)
			if(j==n-i+1||j==n+i-1||j>n-i+1&&(i==1||i==n))
				cout<<"*";
			else
				cout<<" ";
			cout<<endl;
	}
}
//等腰三角形 字符填充
void dispRectangle_1(){
	int i,j,n=6;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<"*";
		cout<<endl;
	}
}
//等腰三角形 边框型
void dispRectangle_2()
{
	int i,j,n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++)
		{
			if(j==1||j==n||i==1||i==n)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			cout<<endl;
		}
	}
}
//
void dispRightAngledTriangle_1()
{
	int i,j,n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			cout<<"*";
		cout<<endl;
	}
}
void dispRightAngledTriangle_2()
{
	int i,j,n=6;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			if(j==1||i==j||i==n)
				cout<<"*";
			else
				cout<<" ";
			cout<<endl;
	}
}

void chose_shape(int x, int y)
{
	if(y==1)
	{
		switch(x)
		{
			case 1:
				dispRectangle_1();
				break;
			case 2:
				dispRightAngledTriangle_1();
				break;
			case 3:
				dispIsoscelesTriangle_1();
				break;
		}
	}
	else if(y==2)
	{
		switch(x)
		{
			case 1:
				dispRectangle_2();
				break;
			case 2:
				dispRightAngledTriangle_2();
				break;
			case 3:
				dispIsoscelesTriangle_2();
				break;
		}
	}
}

//------------------------------软件开始------------------------------------------//
int main(){
	int x,y;
	cout<<"┌--------------------------------------------------┐\n";
	cout<<"│                    图形显示                      │\n";
	cout<<"│                                                  │\n";
	cout<<"│1--------显示矩形                                 │\n";
	cout<<"│2--------显示直角三角形                           │\n";
	cout<<"│3--------显示等腰三角形                           │\n";
	cout<<"│4--------退出                                     │\n";
	cout<<"│请输入选择：1|2|3|4                               │\n";
	cout<<"│                                                  │\n";
	cout<<"└--------------------------------------------------┘\n";

	cin>>x;

	if(x==4){
		return 0;
	}

	cout<<"┌--------------------------------------------------┐\n";
	cout<<"│                    显示方式                      │\n";
	cout<<"│                                                  │\n";
	cout<<"│1--------字符填充                                 │\n";
	cout<<"│2--------用字符形成边框                           │\n";
	cout<<"│请输入选择：1|2                                   │\n";
	cout<<"│                                                  │\n";
	cout<<"└--------------------------------------------------┘\n";

	cin>>y;

	chose_shape(x,y);
}
