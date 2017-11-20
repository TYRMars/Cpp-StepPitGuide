# 01-03-02
## 字符串

* 字符串是存储在内存的连续字节中的一系列字符。
* C++处理字符串的方式有两种：
  - 第一种来自C语言，俗称C串。这节主要说的就是这个
  - 另一种是string类库的方法

存储在连续字节中的一系列字符意味着可以将字符串存储在char数组中，其中每个字符都位于自己的数组元素中

* C-风格字符串具有一种特殊性质：
* 以空字符结尾，空字符被写作`\0`，其ASCII码为`0`，用来标记字符串的结尾。

```Cpp
char dog[8] = {'b','s','','m'}; //not a string!
char dog[8] = {'f','a','t','e','\0'}; // a string!
```

## 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-03-02#01-01)`拼接字符串常识`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-03-02#01-02)`在数组中使用字符串`
*

## 01-01
### 拼接字符串常识

* 字符串很长无法放在一行中。C++允许拼接字符串字面值，即将两个用引括起的字符串合并为一个。事实上，任何两个由空白（空格、制符表和换行符）分割的字符串常量都将自动拼接成一个
* 下面所有的输出语句都是等效的

```Cpp
cout << "Hi Siri " "今天天气怎么样！\n";
cout << "Hi Siri 今天天气怎么样！\n";
cout << "Hi Si"
"ri 今天天气怎么样！\n";
```

## 01-02
### 在数组中使用字符串

```Cpp
#include <iostream>
#include <cstring> // strlen() function

int main()
{
  using namespace std;
  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++owboy";

  cout << "Howdy! I'm" << name2;
  cout << "! What's your name ?\n";
  cin >> name1;
  cout
}
```
