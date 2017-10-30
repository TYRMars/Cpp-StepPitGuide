//
// Created by zhangjianan on 2017/10/24.
//

#ifndef INC_10_24_SCORE_H
#define INC_10_24_SCORE_H

#include <string>
#include <iostream>
#include <ostream>
#include <vector>

//数据导入->快速排序->开始选择功能

using namespace std;


struct Students
{
    int stu_no;
    string stu_name;
    float highMath_score;
    float english_score;
    float computer_score;
    float all_score;
    float avg_score;
};

class SysScore {
private:
    vector<Students> scoreList;
    int createTime;
    string maker;
public:
    SysScore()//构造函数
    {
        vector<Students> scoreList;
        int createTime = getTime();
        string maker = "admin";
    }
    ~SysScore();//析构函数
    void init_table(char* txt_name);//初始化表格数据
    void Display();//显示表格
    int SystemInit();//系统初始化
    int getTime();//得到时间
    void quick(int type);
    void init_input();//信息输入到数组
    void init_output(char* txt_name);//输出到相应文件
    void Find(int find_no);//二分查找
    void Fix_Student_One(int n);//修改学生信息
    void quickSort(int,int,int);//快速排序
    float get_all(float a, float b, float c);//得到总分
    float get_average(float all);//得到平均分

};

vector< string> split( string str, string pattern)// 按规定字符分割字符串。
{
    vector<string> ret;//用字符串向量保存分割后的多个字符串。
    if(pattern.empty())
    {
        return ret;
    }
    size_t start = 0;//起点
    size_t index=str.find_first_of(pattern,0);//返回第一次出现规定的字符串的下标
    while(index!=str.npos)//到原字符串末尾，停止分割。
    {
        if(start!=index)//产生子串，且子串长度不为0，存入向量。
        {
            ret.push_back(str.substr(start,index-start));
        }
        start=index+1;// 起点改变为剩下字符串的起点。
        index=str.find_first_of(pattern,start);//终点改为剩下字符串第一次出现的下标。
    }
    if(!str.substr(start).empty())//最后字符串不为空，存入向量。
    {
        ret.push_back(str.substr(start));
    }
    return ret;
};

void SysScore :: quick(int type)
{
    int high=scoreList.size()-1;
    int low=0;
    quickSort(type,low, high);
}

void SysScore::quickSort(int type,int low, int high) {
    if (low < high)
    {
        int l = low;
        int r = high;
        Students list = scoreList[l];

        if (type == 1)
        {
            while (l < r)
            {
                while (l < r&&list.stu_no <= scoreList[r].stu_no)
                    r--;
                scoreList[l] = scoreList[r];
                while (l < r&&list.stu_no >= scoreList[l].stu_no)
                    l++;
                scoreList[r] = scoreList[l];
            }
            scoreList[l] = list;
        }
        else if(type == 2)
        {
            while (l < r)
            {
                while (l < r&&list.all_score <= scoreList[r].all_score)
                    r--;
                scoreList[l] = scoreList[r];
                while (l < r&&list.all_score >= scoreList[l].all_score)
                    l++;
                scoreList[r] = scoreList[l];
            }
            scoreList[l] = list;
        }
        else
        {
            return;
        }
        quickSort(type,low,l - 1);
        quickSort(type,r + 1,high);
    }
}


float SysScore::get_all(float a, float b, float c)
{
    float all = a+b+c;
    return all;
}

float SysScore::get_average(float all)
{
    float average = all/3;
    return average;
}


int SysScore :: getTime()
{
    time_t now_time;
    now_time = time(NULL);
    int time = now_time;
    return  time;
}

void SysScore::Find(int find_no)
{
    int times=0;
    if (scoreList.size() == 0)  //表为空
    {
        cout<<"表内无数据"<<endl;
    }

    int n = 0, Low = 0, High = scoreList.size()-1;

    while (Low <= High)
    {
        int Mid = (Low + High) / 2;

        if (find_no == scoreList[Mid].stu_no)  //找到记录，计数器加一。
        {
            cout << "学号："<<scoreList[Mid].stu_no
                 <<"|姓名:"<<scoreList[Mid].stu_name
                 <<"|高等数学:"<<scoreList[Mid].highMath_score
                 <<"|大学英语:"<<scoreList[Mid].english_score
                 <<"|计算机导论:"<<scoreList[Mid].computer_score
                 <<"|总分:"<<scoreList[Mid].all_score
                 <<"|平均成绩:"<<scoreList[Mid].avg_score<<endl;

            times = 1;
        }
        if (find_no < scoreList[Mid].stu_no)   //小于中间元素，查找前半部
        {
            High = Mid - 1;
        }
        else                              //大于中间元素，查找后半部。
        {
            Low = Mid + 1;
        }
    }
    if(times==0)//没有找到。
    {
        cout << "没有"<< find_no <<"学生数据" << endl;
    }
    cout<<endl;
}

void SysScore ::Fix_Student_One(int n)
{

}

#endif //INC_10_24_SCORE_H
