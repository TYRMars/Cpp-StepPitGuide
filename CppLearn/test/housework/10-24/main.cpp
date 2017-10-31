#include <iostream>
#include "score.h"

using namespace std;

int main()
{

    int i = 0;
    SysScore init;
    string text_name = "student.txt";
    init.init_table(text_name);//载入表格
    while (i == 0){
        int n = init.SystemInit();//初始化菜单
        init.quick(1);
        switch (n)
        {
            case 1:
                init.Display();
                break;
            case 2:
                init.init_input();
                break;
            case 3:
                init.quick(1);
                int stu_n;
                cout << "请输入你想查询的学生学号:";
                cin >> stu_n;
                init.Find(stu_n);
                break;
            case 4:
                cout << "1.以学号为排序方式；2.以总成绩为排序方式"<<endl;
                int ql;
                cin >> ql;
                if(ql == 1 || ql == 2)
                {
                    init.quick(ql);
                    init.Display();
                }
                break;
            case 5:
                cout << "1.以学号为排序方式；2.以总成绩为排序方式"<<endl;
                int ls;
                cin >> ls;
                if(ls == 1 || ls == 2)
                {
                    init.quick(ls);
                }else
                {
                    break;
                }
                init.init_output();
                cout << "导出完毕"<<endl;
                break;
            default:
                cout << "输入错误";
                break;
        }
        cout << "是否继续操作,输入0继续，输入其他数字跳出程序";
        cin >> i;
    }
}