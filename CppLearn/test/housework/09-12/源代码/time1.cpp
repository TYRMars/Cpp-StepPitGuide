#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;
class Time
{
    private:
        int hour;     //0-23
        int minute; //0-59
        int second; //0-59
		int kind;//0:12小时制，1:24小时制

    public:
		Time()
		{
			getTime();

        } 
        Time(int h,int m,int s,int k)//构造函数
		{
			hour=h;
			minute=m;
			second=s;
			kind=k;
		}
		void Time::getTime();
        void SetTime(int,int,int,int);
        void DisplayTime12 (void);
        void DisplayTime24 (void);
		void addSecond(void);
		 
};
void Time::getTime()
{
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	hour=sys.wHour;
	minute=sys.wMinute;
	second=sys.wSecond;
}	
void Time::DisplayTime12()
{
	system("cls");
	if (hour>12)
		cout<<"PM:"<<hour-12<<":"<<minute<<":"<<second<<endl;
	else
		cout<<"AM:"<<hour<<":"<<minute<<":"<<second<<endl;
}
void Time::DisplayTime24()
{
	system("cls");
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
void Time::addSecond(void)
{
	while (1)
    {
		_sleep(1000);
		second++;
		if (second>59)
		{
			second=0;
			minute++;
			if (minute>59)
			{
				minute=0;
				hour++;
				if (hour>23)
					hour=0;
			}
		}
		if (kind==0)
			DisplayTime12();
		else
			DisplayTime24();

	}
}


void main()
{
	Time t;
	t.addSecond();
	Time t1(14,10,10,0);
    Time t2(20,20,20,1);
	t1.addSecond();
	//DisplayTime24();
	
}
