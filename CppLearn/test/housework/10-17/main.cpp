#include <iostream>
#include <stack>
#include "stack_hanoi.h"

using namespace std;

void StackHanoi::hanoi(int n,StackList& A,StackList& B,StackList& C) {
    if (n==1)
    {
        StackHanoi::move(A,C);
    }
    else
    {
        StackHanoi::hanoi(n-1,A,C,B); //递归调用hanoi,步骤1
        StackHanoi::move(A,C);//步骤2
        StackHanoi::hanoi(n-1,B,A,C);//递归调用hanoi,步骤3
    }
};

void StackHanoi::move(StackList& a,StackList& b) {
    int temp = 0;
    temp = a.top();
    a.pop();
    b.push(temp);
    do_num = do_num +1;
    cout << "移动了第" << do_num << "次" << endl;
    StackHanoi::StackDisplay(S1,S2,S3);
}

void StackHanoi::StackDisplay(stack<int> a,stack<int> b,stack<int> c)
{
    cout << "┌--------------------------------------------------┐" << endl;
    StackHanoi::is_empty(a);
    cout << "----------------------------------------------------" << endl;
    StackHanoi::is_empty(b);
    cout << "----------------------------------------------------" << endl;
    StackHanoi::is_empty(c);
    cout << "└--------------------------------------------------┘" << endl;
}

void StackHanoi::is_empty(stack<int> s)
{
    int temp;
    if(s.size() != 0)
    {
        while (!s.empty())
        {
            temp = s.top();s.pop();
            for (int j = 0; j < temp; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
    else
    {
        cout << endl;
    }
}

void StackHanoi::Init_Hanoi(int n)
{
    for (int i = n; i >0 ; i--) {
        S1.push(i);
    }
    StackHanoi::StackDisplay(S1,S2,S3);
    StackHanoi::hanoi(n,S1,S2,S3);
}

int main( )
{
    int n;
    cout << "input the number of diskes:";
    cin >> n;//输入盘子数
    cout << "The step to moving " << n << " diskes:\n";
    StackHanoi hanoi_init;
    hanoi_init.Init_Hanoi(n);

}
