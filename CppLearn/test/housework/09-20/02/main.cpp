#include <iostream>
#include <fstream>
#include "ThingsInput.h"

using namespace std;

int  ThingsCreate::SystemInit()
{
    cout<<"┌--------------------------------------------------┐\n";
    cout<<"                    欢迎使用本系统                    \n";
    cout<<"   1.输入表格(设备统计)                               \n";
    cout<<"   2.统计各类设备的数量                                \n";
    cout<<"   请输入选择：1|2                                   \n";
    cout<<"└--------------------------------------------------┘\n";
    int i;
    cin >> i;
    return i;
}

void ThingsCreate::InputIn()
{
    cout << "请输入设备号:";
    cin >> sysID;
    cout << "请输入设备名:";
    cin >> sysName;
    cout << "请输入设备种类:(a:实验设备/b:办公设备/c:教学设备)";
    cin >> sysType;
    if(sysType == 'a')
    {
        sysClass = "实验设备";
    }
    else if(sysType == 'b')
    {
        sysClass = "办公设备";
    }
    else if(sysType == 'c')
    {
        sysClass = "教学设备";
    }
}

void ThingsCreate::OutputIn()
{
    if(fstream("equi.txt")){
        ofstream outfile("equi.txt",ofstream::app);
        int j=1;
        while (j==1){
            ThingsCreate::InputIn();
            outfile << sysID << " " << sysName << " " << sysClass << endl;
            cout << "是否继续输入(输入1继续),输入其他任意结束";
            cin >> j;
        }
    }else{
        ofstream out("equi.txt");
        int j=1;
        while (j==1){
            ThingsCreate::InputIn();
            out << sysID << " " << sysName << " " << sysClass << endl;
            cout << "是否继续输入(输入1继续),输入其他任意结束";
            cin >> j;
        }
    }
}

void ThingsCreate::OutputOut()
{
    int i =0,num_a=0,num_b=0,num_c=0;
    ifstream in("equi.txt");
    string s[200];

    char *a="实验设备";
    char *b="办公设备";
    char *c="教学设备";
    for(string str;getline(in,str);)
    {
        s[i]=str;
        cout<<s[i]<<endl;
        if(strstr(s[i].c_str(), a) != NULL)
        {
            num_a++;
        }
        if(strstr(s[i].c_str(), b) != NULL)
        {
            num_b++;
        }
        if(strstr(s[i].c_str(), c) != NULL)
        {
            num_c++;
        }
        i++;
    }
    in.close();
    cout<<"实验设备"<<num_a<<endl;
    cout<<"办公设备"<<num_b<<endl;
    cout<<"教学设备"<<num_c<<endl;
}

int main() {
    ThingsCreate t;
    int i;
    i = t.SystemInit();
    if (i==1)
    {
        t.OutputIn();
        return 0;
    }
    else if (i==2)
    {
        t.OutputOut();
        return 0;
    }
}