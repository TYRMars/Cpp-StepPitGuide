# 01-03-03
## String类简介

* 如果要使用string类，必须在程序中包含头文件string。string类位于名称空间std中，因此您必须提供一条using编译指令，或者使用std::string。
* string对象声明为简单变量，而不是数组
* 类设计让程序能够自动处理string的大小。
* 相比于char[]字符串数组，string的优势在于不需要考虑字符串的长度，长度会自动变长。
* 这使得与字符串数组相比，使用string对象更方便，也更安全。从理论上数，可以将char数组视为一组用于存储一个字符串的char存储单元，而string类变量是一个表示字符串的实体

## 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-03-03#01-01)`C++字符串初始化`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-03-03#01-02)`赋值、拼接和附加`
* [01-03](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-03-03#01-03)`string类的其他操作`
* [01-04](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-03-03#01-04)`string类I/O`

## 01-01
### C++字符串初始化

* C++允许列表初始化为C-风格字符串和string对象;

```Cpp
#include <string>
using namespace std;
char first_date[] = {"zhangjianan"};
char second_date[] = {"huangyue"};
string third_date = {"nannan"};
string fourth_date = {"yueyue"};
```

## 01-02
### 赋值、拼接和附加

* 使用string时。一个string对象赋给另一个string对象

```Cpp
#include <string>
using namespace std;

string str1;
string str2 = "yueyue";
str1 = str2;
```

* string类简化了字符串合并操作。可以使用运算符+将两个string对象合并起来，还可以使用运算符+=将字符串附加到string对象的末尾。

```Cpp
#include <string>
using namespace std;

string str3;
str3 = str1 + str2;
str1 += str2;
```

## 01-03
### string类的其他操作

* 使用strcpy()将字符串复制到字符串数组中，使用函数strcat()将字符串附加到字符数组末尾：

```Cpp
strcpy(charr1,charr2);
strcat(charr1,charr2);
```
