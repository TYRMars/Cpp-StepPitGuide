#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

//结构化向量
struct FirstCode
{
    char first_code;
    int code_num;
};

//存入一个出现的首字母
//遍历第一次，找出相应的字母，并去除数字
//对数组进行排序
//遍历数组的得到字母个数

class CodeFind
{
private:
    vector<FirstCode> FirstCode_List;
    vector<char> CodeNum;
public:
    //构造函数
    CodeFind()
    {
        vector<FirstCode> FirstCode_List;
    }
    //析构函数
    ~CodeFind() {}
    void ReadFile();
    void Display();
    bool isCharacter(char);
};

void CodeFind ::ReadFile()
{
    ifstream in("student.txt");
    for (string str; getline(in, str);)
    {
        if(isCharacter(str[0])){
            CodeNum.push_back(str[0]);
        } else{
            return;
        }
    }
}

void CodeFind ::Display()
{
    for (int i = 0; i < CodeNum.size(); i++) {
        cout << CodeNum[i] <<endl;
    }
}

bool CodeFind ::isCharacter(char c)
{
    if (c>65 && c<122)
    {
        cout << "字母" <<endl;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    CodeFind *init = new CodeFind();
    init->ReadFile();
    init->Display();
}