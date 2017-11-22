//
// Created by zhangjianan on 2017/10/24.
//

#ifndef INC_10_24_SCORE_H
#define INC_10_24_SCORE_H

#include <string>
#include <iostream>
#include <fstream>
#include <vector>

//数据导入->快速排序->开始选择功能

using namespace std;


struct Students
{
    int stu_num;
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
    void init_table(string txt_name);//初始化表格数据
    void Display();//显示表格
    void Display_rankingList();//显示成绩排行榜
    int SystemInit();//系统初始化
    int getTime();//得到时间
    void quick(int type);
    void BubbleSort();
    void init_input();//信息输入到数组
    void init_output();//输出到相应文件
    int Find(int find_no);//二分查找
    void Fix_Student_One(int n);//修改学生信息
    void Fix_Student_One_detail(int n);
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

void SysScore::BubbleSort()
{
    int n = scoreList.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (scoreList[i].all_score > scoreList[j].all_score)
            {
                swap(scoreList[i],scoreList[j]);
            }
        }
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

int SysScore::Find(int find_no)
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
            return Mid;
        }
        else if (find_no < scoreList[Mid].stu_no)//小于中间元素，查找前半部
        {
            High = Mid - 1;
        }
        else//大于中间元素，查找后半部。
        {
            Low = Mid + 1;
        }
    }

    cout << "没有"<< find_no <<"学生数据" << endl;
    cout<<endl;
}

void SysScore ::Fix_Student_One(int n)
{
    int i,j=0;
    while (j==0)
    {
        cout << "你想要修改哪一项？" << endl;
        cout << "1.学号|2.姓名|3.高等数学|4.大学英语|5.计算机导论" << endl;
        cout << "请输入选项:";
        cin >> i;
        cout << endl << "请输入你要更改的信息" << endl;
        switch (i)
        {
            case 1:
                cin >> scoreList[n].stu_no;
                Fix_Student_One_detail(n);
                break;
            case 2:
                cin >> scoreList[n].stu_name;
                Fix_Student_One_detail(n);
                break;
            case 3:
                cin >> scoreList[n].highMath_score;
                Fix_Student_One_detail(n);
                break;
            case 4:
                cin >> scoreList[n].english_score;
                Fix_Student_One_detail(n);
                break;
            case 5:
                cin >> scoreList[n].computer_score;
                Fix_Student_One_detail(n);
                break;
            default:
                cout << "无修改" << endl;
                break;
        }
        cout << "是否还需要修改，如需修改请输入0，输入其他数退出修改" << endl;
        cin >> j;
    }
}

void SysScore ::Fix_Student_One_detail(int n)
{
    scoreList[n].all_score = get_all(scoreList[n].highMath_score,scoreList[n].english_score,scoreList[n].computer_score);
    scoreList[n].avg_score = get_average(scoreList[n].all_score);
    cout << "学号："<<scoreList[n].stu_no
         <<"|姓名:"<<scoreList[n].stu_name
         <<"|高等数学:"<<scoreList[n].highMath_score
         <<"|大学英语:"<<scoreList[n].english_score
         <<"|计算机导论:"<<scoreList[n].computer_score
         <<"|总分:"<<  scoreList[n].all_score
         <<"|平均成绩:"<<scoreList[n].avg_score<<endl;
}

int SysScore :: SystemInit()
{
    cout << "┌--------------------------------------------------┐\n";
    cout << "                    欢迎使用本系统                     \n";
    cout << "                                                     \n";
    cout << "   1.表格初始化（显示表格）                             \n";
    cout << "   2.新增学生信息                                     \n";
    cout << "   3.查找学生信息                                     \n";
    cout << "   4.排序学生信息                                     \n";
    cout << "   5.学生数据修改                                     \n";
    cout << "   6.导入表格                                         \n";
    cout << "   7.导出表格                                        \n";
    cout << "   8.成绩排行输出                                      \n";
    cout << "                                                     \n";
    cout << "   请输入选择：1|2|3|4|5|6|7  进行选择                  \n";
    cout << "└--------------------------------------------------┘\n";
    int i;
    cin >> i;
    return i;
}

void SysScore ::init_table(string txt_name)
{
    cout << "初始化表格" <<endl;
    cout << txt_name <<endl;
    ifstream in(txt_name);
    Students *n = new Students();
    for(string str;getline(in,str);)
    {
        vector<string> s;
        string pat="|";
        s=split(str,pat);
        vector<string>::iterator it;
        char value[] = "";
        it = find(s.begin(),s.end(),value);
        if(it!=s.end())
        {
            return;
        }else{
            n->stu_no = atoi(s[0].c_str());
            n->stu_name =s[1];
            n->highMath_score=atoi(s[2].c_str());
            n->english_score=atoi(s[3].c_str());
            n->computer_score=atoi(s[4].c_str());
            n->all_score = get_all(n->highMath_score,n->english_score,n->computer_score);
            n->avg_score = get_average(n->all_score);
            scoreList.push_back(*n);
        }
    }
    free(n);
    cout << "初始化表格完毕" <<endl;
}

void SysScore :: init_output()
{
    cout << "请输入制作者:" << endl;
    cin >> maker;
    cout << "请输入导出表格:" << endl;
    string txt_name;
    cin >> txt_name;
    int len=scoreList.size()-1;
    ofstream out(txt_name);
    for(int i=0;i<=len;i++)
    {
        out <<scoreList[i].stu_num <<"|"
            <<scoreList[i].stu_no <<"|"
            <<scoreList[i].stu_name <<"|"
            <<scoreList[i].highMath_score <<"|"
            <<scoreList[i].english_score <<"|"
            <<scoreList[i].computer_score <<"|"
            <<scoreList[i].all_score <<"|"
            <<scoreList[i].avg_score<<endl;

    }
    out <<endl;
    out<<"制作人:"<< maker << "  " <<"制表日期"<< getTime() <<endl;
    cout << maker << endl;
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
        cout << "请输入计算机成绩:";
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
    cout << "显示数据" <<endl;
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
    cout << "显示完毕" <<endl;
}

void SysScore::Display_rankingList() {
    cout << "显示数据" <<endl;
    int len=scoreList.size()-1;
    for(int i=0;i<=len;i++)
    {
        scoreList[i].stu_num = i+1;
        cout << "名次："<< scoreList[i].stu_num << "|学号："<<scoreList[i].stu_no
             <<"|姓名:"<<scoreList[i].stu_name
             <<"|总分:"<<scoreList[i].all_score<<endl;
    }
    cout << "显示完毕" <<endl;
}


#endif //INC_10_24_SCORE_H
