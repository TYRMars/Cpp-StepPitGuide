#include <iostream>
#include "score.h"

using namespace std;

int main()
{

    int i = 0;
    int stu_n,num;
    SysScore init;
    string text_name = "student.txt";
    init.init_table(text_name);//载入表格
    while (i == 0){
        int n = init.SystemInit();//初始化菜单
        init.quick(1);
        switch (n)
        {
            case 1://表格初始化（显示表格)
                init.Display();
                break;
            case 2://新增学生信息
                init.init_input();
                break;
            case 3://查找学生信息
                init.quick(1);
                cout << "请输入你想查询的学生学号:";
                cin >> stu_n;
                init.Find(stu_n);
                break;
            case 4://排序学生信息
                cout << "1.以学号为排序方式；2.以总成绩为排序方式"<<endl;
                int ql;
                cin >> ql;
                if(ql == 1 || ql == 2)
                {
                    init.quick(ql);
                    init.Display();
                }
                break;
            case 5://学生数据修改
                init.quick(1);
                cout << "请输入你想修改的学生学号:";
                cin >> stu_n;
                num = init.Find(stu_n);
                init.Fix_Student_One(num);
                break;
            case 6://导入表格
                cout << "请输入想要导入的表格";
                cin >> text_name;
                init.init_table(text_name);
                break;
            case 7://导出表格
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
        cout << "是否还需要继续其他操作,输入0继续，输入其他数字跳出程序";
        cin >> i;
    }
}