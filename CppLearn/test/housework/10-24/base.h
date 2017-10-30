//
// Created by zhangjianan on 2017/10/30.
//

#ifndef INC_10_24_BASE_H
#define INC_10_24_BASE_H

#include <fstream>
#include "score.h"

using namespace std;

int SysScore :: SystemInit()
{
    cout << "┌--------------------------------------------------┐\n";
    cout << "                    欢迎使用本系统                     \n";
    cout << "   1.表格初始化（显示表格）                             \n";
    cout << "   2.新增学生信息                                     \n";
    cout << "   3.查找学生信息                                     \n";
    cout << "   4.对学生信息进行排序                                 \n";
    cout << "   5.输出表格                                         \n";
    cout << "   请输入选择：1|2|3|4|5                                \n";
    cout << "└--------------------------------------------------┘\n";
    int i;
    cin >> i;
    return i;
}

void SysScore ::init_table(char* txt_name)
{
    ifstream in(txt_name);
    Students *n = new Students();
    for(string str;getline(in,str);)
    {
        vector<string> s;
        string pat="|";
        s=split(str,pat);
        n->stu_no = atoi(s[0].c_str());
        n->stu_name =s[1];
        n->highMath_score=atoi(s[2].c_str());
        n->english_score=atoi(s[3].c_str());
        n->computer_score=atoi(s[4].c_str());
        if(s[5] != NULL)
        {
            n-> all_score = atoi(s[5].c_str());
            n-> avg_score = atoi(s[6].c_str());
        }
        scoreList.push_back(*n);
    }
}

void SysScore :: init_output(char* txt_name)
{
    int len=scoreList.size()-1;
    ofstream out(txt_name);
    for(int i=0;i<=len;i++)
    {
        out <<scoreList[i].stu_no <<"|"
            <<scoreList[i].stu_name <<"|"
            <<scoreList[i].highMath_score <<"|"
            <<scoreList[i].english_score <<"|"
            <<scoreList[i].computer_score <<"|"
            <<scoreList[i].all_score <<"|"
            <<scoreList[i].avg_score<<endl;

    }
    out <<endl;
    out<<"制作人:"<<maker<< "  " <<"制表日期"<< getTime() <<endl;
    out <<endl;
}


void SysScore::init_input()
{
    int i =0;
    while (i==0)
    {
        Students *s = new Students();
        cout << "请输入学号:";
        cin >> s->stu_no;
        cout << "请输入姓名:";
        cin >> s->stu_name;
        cout << "请输入高数成绩:";
        cin >> s->highMath_score;
        cout << "请输入英语成绩:";
        cin >> s->english_score;
        cout << "请输入计算机成绩";
        cin >> s->computer_score;
        s->all_score = get_all(s->highMath_score, s->english_score, s->computer_score);
        s->avg_score= get_average(s->all_score);
        scoreList.push_back(*s);
        cout << "是否要继续输入(输入任意非0数跳出)";
        cin >> i;
    }
}

void SysScore::Display()
{
    int len=scoreList.size()-1;
    for(int i=0;i<=len;i++)
    {
        cout << "学号："<<scoreList[i].stu_no
            <<"|姓名:"<<scoreList[i].stu_name
            <<"|高等数学:"<<scoreList[i].highMath_score
            <<"|大学英语:"<<scoreList[i].english_score
            <<"|计算机导论:"<<scoreList[i].computer_score
            <<"|总分:"<<scoreList[i].all_score
            <<"|平均成绩:"<<scoreList[i].avg_score<<endl;

    }
    cout<<"制作人:"<<maker<< "  " <<"制表日期"<< getTime() <<endl;
    cout <<endl;
}



#endif //INC_10_24_BASE_H
