#include <iostream>
#include <vector>

using namespace std;
void hanoi(int ,char,char,char);
void move(char,char);
int main( )
{
    int m;
    cout << "input the number of diskes:";
    cin >> m;//输入盘子数
    cout << "The setp to moving" << m << "diskes:\n";
    hanoi(m,'A','B','C'); //调用移动函数
}
void hanoi(int n,char one,char two,char three) {
    if (n==1)
        move(one,three);
    else
    {
        hanoi(n-1,one,three,two); //递归调用hanoi,步骤1
        move(one,three);//步骤2
        hanoi(n-1,two,one,three);//递归调用hanoi,步骤3
    }
};
void move(char getone,char putone) {
    cout << getone << "→" << putone <<endl;
}