//
// Created by zhangjianan on 2017/10/30.
//

#ifndef INC_10_24_BASE_H
#define INC_10_24_BASE_H

#include <fstream>
#include "score.h"

using namespace std;

void SysScore :: outputtable(char* txtname)
{
    int len=scoreList.size()-1;
    ofstream out(txtname);
    for(int i=0;i<=len;i++)
    {
        out << "学号："<<scoreList[i].stu_no
            <<"|姓名:"<<scoreList[i].stu_name
            <<"|高等数学:"<<scoreList[i].highMath_score
            <<"|大学英语:"<<scoreList[i].english_score
            <<"|计算机导论:"<<scoreList[i].computer_score
            <<"|总分:"<<scoreList[i].all_score
            <<"|平均成绩:"<<scoreList[i].avg_score<<endl;

    }
    out<<"制作人"<<maker<<"     制表日期"<< getTime() <<endl;
    out <<endl;
}

int SysScore :: SystemInit() {
    cout << "┌--------------------------------------------------┐\n";
    cout << "                    欢迎使用本系统                     \n";
    cout << "   1.表格初始化（显示表格）                             \n";
    cout << "   2.新增学生信息                                     \n";
    cout << "   3.查找学生信息                                     \n";
    cout << "   4.对学生信息进行排序                                 \n";
    cout << "   请输入选择：1|2|3|4                                \n";
    cout << "└--------------------------------------------------┘\n";
    int i;
    cin >> i;
    return i;
}

Students void SysScore::init_input()
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
    return *s;
}


#endif //INC_10_24_BASE_H
