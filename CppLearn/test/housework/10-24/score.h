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

static int cnt = 0;

struct Students
{
    string stu_no;
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
    SysScore()
    {
        vector<Students> scoreList;
        int createTime = getTime();
        string maker = "admin";
    }
    ~SysScore();//析构函数
    void init_table();//初始化表格数据
    int SystemInit();
    int getTime();//得到时间
    Students init_input();//信息输入到数组
    void init_output();//信息输出到文本
    void OutputIn();
    void Find();
    void Fix_Student_One();
    void outputtable(char* txtname);
    void quickSort(int,int,int);
    float get_all(float a, float b, float c);
    float get_average(float all);
    float Student_Sall();

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
                while (l < r&&list.stu_no <= scoreList[r].stu_no)//从右往左遍历,找到第一个小于key的元素
                    r--;
                scoreList[l] = scoreList[r];
                while (l < r&&list.stu_no >= scoreList[l].stu_no)//从左往右遍历,找到第一个大于key值的元素
                    l++;
                scoreList[r] = scoreList[l];
            }
            scoreList[l] = list;//其实此时l=r
        }
        else if(type == 2)
        {
            while (l < r)
            {
                while (l < r&&list.all_score <= scoreList[r].all_score)//从右往左遍历,找到第一个小于key的元素
                    r--;
                scoreList[l] = scoreList[r];
                while (l < r&&list.all_score >= scoreList[l].all_score)//从左往右遍历,找到第一个大于key值的元素
                    l++;
                scoreList[r] = scoreList[l];
            }
            scoreList[l] = list;//其实此时l=r
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




#endif //INC_10_24_SCORE_H
