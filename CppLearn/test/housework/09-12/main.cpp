//
// Created by zhang on 2017/9/12.
//
#include <iostream>
#include <Windows.h>
#include "initTime.h"

using namespace std;

void Time::getTime()
{
    SYSTEMTIME sys;
    GetLocalTime(&sys);
    hour=sys.wHour;
    minute=sys.wMinute;
    second=sys.wSecond;
}
void Time::SetTimeType(int m)
{
    m == 0 ? Time::DisplayTime12() : Time::DisplayTime24() ;
}
void Time::DisplayTime12()
{
    while (1)
    {
        Time::addSecond();
        system("cls");
        if (hour>12)
            cout<<"PM:"<<hour-12<<":"<<minute<<":"<<second<<endl;
        else
            cout<<"AM:"<<hour<<":"<<minute<<":"<<second<<endl;
    }
}
void Time::DisplayTime24()
{
    while (1){
        Time::addSecond();
        system("cls");
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
}
void Time::addSecond(void)
{
        Sleep(1000);
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

}

int main()
{
    int timeType;
    cout << "Enter 0 chose 12 hours, or Enter any chose 24 hours" << endl;
    cin >> timeType;
	Time t;
	t.SetTimeType(timeType);
    return 0;
}
