#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "NodeTable.h"

using namespace std;

CList::CList() {
    head = new CNode();
    head->next = NULL;
}

int CList::SystemInit()
{
    cout<<"┌--------------------------------------------------┐\n";
    cout<<"                    欢迎使用本系统                     \n";
    cout<<"   1.表格初始化（显示表格）                             \n";
    cout<<"   2.新增学生信息                                     \n";
    cout<<"   3.查找学生信息（删除）                              \n";
    cout<<"   4.对学生信息进行排序                                 \n";
    cout<<"   请输入选择：1|2|3|4                                \n";
    cout<<"└--------------------------------------------------┘\n";
    int i;
    cin >> i;
    return i;
}

void CList::InputIn()
{
    cout << "请输入学号:";
    cin >> stuNumber;
    cout << "请输入姓名:";
    cin >> stuName;
    cout << "请输入性别:";
    cin >> stuSex;
    cout << "请输入专业:";
    cin >> stuType;
}

void CList::OutputIn()
{
    if(fstream("student.txt")){
        ofstream outfile("student.txt",ofstream::app);
        int j=1;
        while (j==1){
            CList::InputIn();
            outfile << stuNumber << " " << stuName << " " << stuSex << " " << stuType << endl;
            cout << "是否继续输入(输入1继续),输入其他任意结束";
            cin >> j;
        }
    }else{
        ofstream out("student.txt");
        int j=1;
        while (j==1){
            CList::InputIn();
            out << stuNumber << " " << stuName << " " << stuSex << " " << stuType << endl;
            cout << "是否继续输入(输入1继续),输入其他任意结束";
            cin >> j;
        }
    }
}



void CList::InitFromTxt() {
    CNode *p, *q;
    p = head;
    q = new CNode();
    //输入到链表中
    ifstream in("student.txt");
    for (string str; getline(in, str);) {
        q->data = str;
        p->next = q;
        p = q;
        q = new CNode();
    }
}

void CList::Display() const //显示链表
{
    CNode *p;
    p = head->next;
    while (p) {
        cout << p->data << endl;
        p = p->next;
    }
}

void CList::Update() const //显示链表
{
    CNode *p;
    p = head->next;
    ofstream outfile("student.txt",ofstream::app);
    while (p) {
        outfile  << p->data << endl;
        p = p->next;
    }
}

bool CList::Find(const string e) const
{
    CNode* p=head->next;
    string i;
    while(p)
    {
        i = p->data;
        if(i.find(e) != string::npos)
        {
            return true;
        }
        p=p->next;
    }
    return false;
}

void CList::Delete_list(string e) {
    if (!Find(e))
    {
        cout << "链表不包含值为" << e << "的节点!" << endl;
        return;
    }
    else
    {
        CNode *p = head;
        CNode *q = head->next;
        string i;
        while (q) {
            i=q->data;
            if (i.find(e))
            {
                break;
            }
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        return;
    }
}


int main() {
    CList n;
    int i = 0;
    i = n.SystemInit();
    n.InitFromTxt();
    if(i==1)
    {
        cout << "学号  姓名  性别  专业" <<endl;
        n.Display();
        return 0;
    }
    else if(i==2){
        n.OutputIn();
        return 0;
    }
    else if(i==3)
    {
        n.Display();
        string m;
        cout << "输入删除索引（例如:姓名张三）";
        cin >> m;
        n.Delete_list(m);
        n.Display();
        n.Update();
    }

}
