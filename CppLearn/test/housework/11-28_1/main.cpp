#include <iostream>
using namespace std;
int main() {
    int num=0,i=0,flag;
    char s[100]={"abc def ghi"};
    while (s[i++]) {
        if (s[i]==' ')
        flag=0;
        else if (flag=0)
        {
            flag=1;
            num++;
        }
    }
    cout << "单词数=" << num;
}
