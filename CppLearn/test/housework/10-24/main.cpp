#include <iostream>
#include "score.h"
#include "base.h"

using namespace std;

int main()
{

    int i = 1;

    while (i > 0){
        SysScore init;
        int n = init.SystemInit();//初始化菜单
        init.init_table("Student.txt");//载入表格
        init.quick(1);
        cin >> n;
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
                }
                break;
            case 5:
                init.init_output("score.txt");
                cout << "导出完毕"<<endl;
            default:
                cout << "输入错误";
                break;
        }
    }
}