//
// Created by zhangjianan on 2017/10/25.
//

#ifndef INC_10_24_TEST_H
#define INC_10_24_TEST_H

#include<stdio.h>
#include<string>
#include <sstream>
#include<iostream>
#include<iomanip>
#include <fstream>
#include<vector>
using namespace std;

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
class  CourseScore
{
public:
    CourseScore();
    ~CourseScore();
    CourseScore(char* maker1);
    void getTime();//得到系统时间
    void insert(int no1,string name1,int advanced_mathematics1,int college_english1,int introduction_to_computers1);
    void readtxt(char* txtname);
    int gettotal(int advanced_mathematics2,int college_english2,int introduction_to_computers2);//总分
    float getaverage(int total1);//求平均分。
    int getsize();//得到成绩表长度。
    int getyear();
    int getmonth();
    int getday();
    //void bubble_sort_no();
    //void bubble_sort_total();
    void myquicksort_no(int low, int high);//按学号快速排序
    void Myquicksort_no();
    void myquicksort_total(int low, int high);//按总分快速排序
    void Myquicksort_total();
    void output(char* txtname);
    void outputtable(char* txtname);//输出成绩表到文件，结尾写入制表人，制表时间。
    void put();//控制台输出
    void find(int findno);//按学号查找记录，二分查找。
    void update(int upno,int am,int ce,int itc);//按学号更改成绩
    void updatebytxt(char* txtname);//按文件内容更改成绩
private:
    struct score
    {
        int no;
        string name;
        int advanced_mathematics,college_english,introduction_to_computers,total;
        float	average;
    };
    vector<score> scoretable;
    int year,month,day;
    string maker;
};

CourseScore :: CourseScore()
{
    vector<score> scoretable(10);
    getTime();
    maker="";
}
CourseScore :: ~CourseScore()
{

}
CourseScore :: CourseScore(char* maker1)
{
    vector<score> scoretable(10);
    getTime();
    maker=maker1;
}


void CourseScore:: insert(int no1,string name1,int advanced_mathematics1,int college_english1,int introduction_to_computers1)
{
    score *s = new score();
    s -> no = no1;
    s -> name = name1;
    s -> advanced_mathematics = advanced_mathematics1;
    s -> college_english = college_english1;
    s -> introduction_to_computers = introduction_to_computers1;
    s -> total =gettotal(advanced_mathematics1,college_english1,introduction_to_computers1);
    s -> average = getaverage(s -> total);
    scoretable.push_back(*s);
}
void CourseScore:: readtxt(char* txtname)
{

    ifstream in(txtname);
    for(string str;getline(in,str);)
    {
        vector<string> s;
        string pat="-";
        s=split(str,pat);
        int sno = atoi(s[0].c_str());
        string sname=s[1];
        int sadvanced_mathematics=atoi(s[3].c_str());
        int scollege_english=atoi(s[5].c_str());
        int sintroduction_to_computers=atoi(s[7].c_str());
        insert(sno,sname,sadvanced_mathematics,scollege_english,sintroduction_to_computers);
    }
}
int CourseScore ::gettotal(int advanced_mathematics2,int college_english2,int introduction_to_computers2)
{
    int total=advanced_mathematics2+college_english2+introduction_to_computers2;
    return total;
}
float CourseScore ::getaverage(int total1 )
{
    float average=(float)total1/3;
    return average;
}
int CourseScore ::getsize()
{
    return scoretable.size();
}

int CourseScore ::getyear()
{
    return year;
}
int CourseScore ::getmonth()
{
    return month;
}
int CourseScore ::getday()
{
    return day;
}

void CourseScore :: myquicksort_no(int low, int high)
{

    if (low < high)
    {
        int l = low;
        int r = high;
        score key ;//记录key值
        key=scoretable[l];
        while (l < r)
        {
            while (l < r&&key.no <= scoretable[r].no)//从右往左遍历,找到第一个小于key的元素
                --r;
            scoretable[l] = scoretable[r];
            while (l < r&&key .no>= scoretable[l].no)//从左往右遍历,找到第一个大于key值的元素
                ++l;
            scoretable[r] = scoretable[l];
        }
        scoretable[l] = key;//其实此时l=r

        myquicksort_no(low, l-1);
        myquicksort_no(r + 1, high);
    }
}
void  CourseScore :: Myquicksort_no()
{
    int high=scoretable.size()-1;
    int low=0;
    myquicksort_no(low, high);
}
void CourseScore :: myquicksort_total(int low, int high)
{
    if (low < high)
    {
        int l = low;
        int r = high;
        score key = scoretable[l];//记录key值

        while (l < r)
        {
            while (l < r&&key.total <= scoretable[r].total)//从右往左遍历,找到第一个小于key的元素
                r--;
            scoretable[l] = scoretable[r];
            while (l < r&&key.total >= scoretable[l].total)//从左往右遍历,找到第一个大于key值的元素
                l++;
            scoretable[r] = scoretable[l];
        }
        scoretable[l] = key;//其实此时l=r

        myquicksort_total( low, l-1);
        myquicksort_total( r + 1, high);
    }
}
void CourseScore :: Myquicksort_total()
{
    int high=scoretable.size()-1;
    int low=0;
    myquicksort_total(low, high);
}
void CourseScore :: find(int findno)
{
    Myquicksort_no();//排序之后使用二分查找
    int times=0;
    if (scoretable.size() == 0)  //表为空
    {
        cout<<"表内无数据"<<endl;
    }

    int n = 0, Low = 0, High = scoretable.size()-1;

    while (Low <= High)
    {
        int Mid = (Low + High) / 2;

        if (findno == scoretable[Mid].no)  //找到记录，计数器加一。
        {
            cout<<"学号："<<scoretable[Mid].no<<"--姓名:"<<scoretable[Mid].name<<"--高等数学:"<<scoretable[Mid].advanced_mathematics
                <<"--大学英语:"<<scoretable[Mid].college_english<<"--计算机导论:"<<scoretable[Mid].introduction_to_computers
                <<"--总分:"<<scoretable[Mid].total<<"--平均成绩:"<<fixed<<setprecision(1)<<scoretable[Mid].average<<endl;
            times++;
        }
        if (findno < scoretable[Mid].no)   //小于中间元素，查找前半部
        {
            High = Mid - 1;
        }
        else                              //大于中间元素，查找后半部。
        {
            Low = Mid + 1;
        }
    }
    if(times==0);//没有找到。
    {
        cout << "没有该学生数据" << endl;
    }
    cout<<endl;
}
void CourseScore :: update(int upno,int am,int ce,int itc)
{
    Myquicksort_no();//排序之后使用二分查找
    int times=0;
    if (scoretable.size() == 0)  //表为空
    {
        cout<<"表内无数据"<<endl;
    }
    int n = 0, Low = 0, High = scoretable.size()-1;
    while (Low <= High)
    {
        int Mid = (Low + High) / 2;

        if (upno == scoretable[Mid].no)  //找到记录，计数器加一,输出修改后的数据。
        {
            scoretable[Mid].advanced_mathematics=am;
            scoretable[Mid].college_english=ce;
            scoretable[Mid].introduction_to_computers=itc;
            scoretable[Mid].total=gettotal(am,ce,itc);
            scoretable[Mid].average=getaverage(gettotal(am,ce,itc));
            times++;
            cout<<"修改成功 "<<"学号："<<scoretable[Mid].no<<"--姓名:"<<scoretable[Mid].name<<"--高等数学:"<<scoretable[Mid].advanced_mathematics
                <<"--大学英语:"<<scoretable[Mid].college_english<<"--计算机导论:"<<scoretable[Mid].introduction_to_computers
                <<"--总分:"<<scoretable[Mid].total<<"--平均成绩:"<<fixed<<setprecision(1)<<scoretable[Mid].average<<endl;
        }
        if (upno < scoretable[Mid].no)  //小于中间元素，查找前半部
        {
            High = Mid - 1;
        }
        else                            //大于中间元素，查找后半部。
        {
            Low = Mid + 1;
        }
    }
    if(times==0)//没有找到。
    {
        cout<<"没有该学生的数据"<<endl;
    }
    cout<<endl;
}
void CourseScore :: updatebytxt(char* txtname)
{
    Myquicksort_no();//排序之后使用二分查找

    if (scoretable.size() == 0)  //表为空
    {
        cout<<"表内无数据"<<endl;
    }
    ifstream in(txtname);
    for(string str;getline(in,str);)//按行读取文件。
    {   int times=0;
        vector<string> s;
        string pat="-";
        s=split(str,pat);
        int sno = atoi(s[0].c_str());
        string sname=s[1];
        int sadvanced_mathematics=atoi(s[3].c_str());
        int scollege_english=atoi(s[5].c_str());
        int sintroduction_to_computers=atoi(s[7].c_str());
        int n = 0, Low = 0, High = scoretable.size()-1;
        while (Low <= High)
        {
            int Mid = (Low + High) / 2;

            if (sno == scoretable[Mid].no)  //找到记录，按文件内容更改记录。成功一次，输出修改的数据内容，计数器加1。
            {
                scoretable[Mid].advanced_mathematics=sadvanced_mathematics;
                scoretable[Mid].college_english=scollege_english;
                scoretable[Mid].introduction_to_computers=sintroduction_to_computers;
                scoretable[Mid].total=gettotal(sadvanced_mathematics,scollege_english,sintroduction_to_computers);
                scoretable[Mid].average=getaverage(gettotal(sadvanced_mathematics,scollege_english,sintroduction_to_computers));

                cout<<"修改成功 "<<"学号："<<scoretable[Mid].no<<"--姓名:"<<scoretable[Mid].name<<"--高等数学:"<<scoretable[Mid].advanced_mathematics
                    <<"--大学英语:"<<scoretable[Mid].college_english<<"--计算机导论:"<<scoretable[Mid].introduction_to_computers
                    <<"--总分:"<<scoretable[Mid].total<<"--平均成绩:"<<fixed<<setprecision(1)<<scoretable[Mid].average<<endl;
                times++;
            }
            if (sno < scoretable[Mid].no)  //小于中间元素，查找前半部
                High = Mid - 1;
            else                            //大于中间元素，查找后半部。
                Low = Mid + 1;
        }
        if(times==0)//没有找到。输出不存在的学生姓名
        {
            cout<<"没有"<<sname <<"的数据"<<endl;
        }
    }
    cout<<endl;

}
void CourseScore :: put()
{
    int len=scoretable.size()-1;
    for(int i=0;i<=len;i++) //在控制台循环输出向量中所有元素
    {
        cout <<"学号："<<scoretable[i].no<<"----姓名:"<<scoretable[i].name<<"----高等数学:"<<scoretable[i].advanced_mathematics
             <<"----大学英语:"<<scoretable[i].college_english<<"----计算机导论:"<<scoretable[i].introduction_to_computers
             <<"----总分:"<<scoretable[i].total<<"----平均成绩:"<<fixed<<setprecision(1)<<scoretable[i].average<<endl;
    }  cout <<endl;
}
void CourseScore :: output(char* txtname)
{
    int len=scoretable.size()-1;
    ofstream out(txtname);
    for(int i=0;i<=len;i++)
    {
        out <<"学号："<<scoretable[i].no<<"----姓名:"<<scoretable[i].name<<"----高等数学:"<<scoretable[i].advanced_mathematics
            <<"----大学英语:"<<scoretable[i].college_english<<"----计算机导论:"<<scoretable[i].introduction_to_computers
            <<"----总分:"<<scoretable[i].total<<"----平均成绩:"<<fixed<<setprecision(1)<<scoretable[i].average<<endl;

    }
    out <<endl;
}
void CourseScore :: outputtable(char* txtname)
{
    int len=scoretable.size()-1;
    ofstream out(txtname);
    for(int i=0;i<=len;i++)
    {
        out <<"学号："<<scoretable[i].no<<"----姓名:"<<scoretable[i].name<<"----高等数学:"<<scoretable[i].advanced_mathematics
            <<"----大学英语:"<<scoretable[i].college_english<<"----计算机导论:"<<scoretable[i].introduction_to_computers
            <<"----总分:"<<scoretable[i].total<<"----平均成绩:"<<fixed<<setprecision(1)<<scoretable[i].average<<endl;

    }
    out<<"制作人"<<maker<<"     制表日期"<<getyear()<<"-"<<getmonth()<<"-"<<getday()<<endl;
    out <<endl;
}

//void CourseScore :: bubble_sort_no()
//{
//
//     int temp;
//     int flag;
//	 score s;
//      while (true)
//      {
//          flag = 0;
//          for (int i=0;i<scoretable.size()-1;i++)
//          {
//			  if (scoretable[i].no>scoretable[i+1].no)
//             {
//				 s=scoretable[i];
//				 scoretable[i]=scoretable[i+1];
//				 scoretable[i+1]=s;
//				 flag = 1;
//             }
//          }
//          if (flag == 0)
//			  break;}
//}
//void CourseScore :: bubble_sort_total()
//{
//
//     int temp;
//     int flag;
//	 score s;
//      while (true)
//      {
//          flag = 0;
//          for (int i=0;i<scoretable.size()-1;i++)
//          {
//			  if (scoretable[i].total>scoretable[i+1].total)
//             {
//				 s=scoretable[i];
//				 scoretable[i]=scoretable[i+1];
//				 scoretable[i+1]=s;
//				 flag = 1;
//             }
//          }
//          if (flag == 0)
//			  break;}
//}

#endif //INC_10_24_TEST_H
