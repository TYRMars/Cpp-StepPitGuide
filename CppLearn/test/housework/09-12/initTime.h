//
// Created by zhang on 2017/9/12.
//

#ifndef DEMO1_INITTIME_H
#define DEMO1_INITTIME_H

#endif //DEMO1_INITTIME_H

class Time
{
private:
    int hour;     //0-23
    int minute; //0-59
    int second; //0-59

public:
    void getTime();
    Time()
    {
        getTime();
    }
    Time(int h,int m,int s)//构造函数
    {
        hour=h;
        minute=m;
        second=s;
    }
    void SetTimeType(int);
    void DisplayTime12 (void);
    void DisplayTime24 (void);
    void addSecond(void);

};
