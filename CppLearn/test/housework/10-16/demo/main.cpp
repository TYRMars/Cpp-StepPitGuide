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
    cout<<"   3.删除学生信息                                     \n";
    cout<<"   4.对学生信息进行排序                                 \n";
    cout<<"   请输入选择：1|2|3|4                                \n";
    cout<<"└--------------------------------------------------┘\n";
    int i;
    cin >> i;
    return i;
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
    cout << endl;
}

bool CList::Find(const string e) const
{
    CNode* p=head->next;
    while(p)
    {
        if(p->data==e)
        {
            return true;
        }
        p=p->next;
    }
    return false;
}

void CList::Delete_list(string a) {
    if (!Find(a))
    {
        cout << "链表不包含值为" << a << "的节点!" << endl;
        return;
    }
    CNode *p = head;
    CNode *q = head->next;
    while (q) {
        if (q->data == a)
        {
            break;
        }
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    return;
}


int main() {
    CList n;
    int i = 0;
    i = n.SystemInit();
    if(i==1)
    {
        cout << "学号  姓名  性别  专业" <<endl;
        n.InitFromTxt();
        n.Display();
    }


}
