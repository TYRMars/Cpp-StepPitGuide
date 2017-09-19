//
// Created by zhang on 2017/9/19.
//
#include <iostream>
#include <string.h>

using namespace std;

void swap_char(char a[])
{
	int flag,temp;
	int len = strlen(a);
	if(len % 2 != 0)
	{
		flag = len-1;
	}else{
		flag = len-2;
	}
	for(int i=0;i<len/2; i = i+2)
		{
			temp = a[i];
			a[i] = a[flag];
			a[flag] = temp;
			flag = flag-2;
		}
		cout  << a << endl;
}

void main()
{
	char chr[100];
	cout << "请输入一个数组" << endl;
	cin >> chr;
	swap_char(chr);
}
