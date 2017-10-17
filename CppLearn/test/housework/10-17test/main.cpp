#include <iostream>
#include <cstdio>

using namespace std;

void hannoi (int n, char A, char B, char C)// 把A盘里面的圆圈转移到C盘里面【A--C】。
{
if (n == 1)
{
cout << "移动圆圈" << n << "从盘" << A << "盘" << C << endl;//把最后一个圆环从起点盘移动到目标盘。
}
else
{
hannoi (n-1, A, C, B);// 把N-1个圆环从起点盘移动到（当前）没有任何圆环的过度盘；通过B、C盘在此函数调用中调用位置的互换，来实现把N-1个圆环从A盘到B盘的转移【A--B】。
cout << "移动圆圈" << n << "从盘" << A << "盘" << C << endl;
hannoi (n-1, B, A, C);// 把N-1个圆环从国度盘移动到目标盘（模仿1和2的操作方法来实现）；通过A、B盘在此函数调用中位置的互换，来实现N-1个圆环从B盘到C盘的转移【B--C】。
}
}

int main()
{
    int n;
    cin >> n;

    hannoi (n, 'a', 'b', 'c');

    system("pause");
    return 0;
}