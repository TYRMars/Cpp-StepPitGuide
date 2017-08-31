# 01-01-02
## C++语句

### 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-02#01-01)`声明语句和变量`

### 01-01
#### 声明语句和变量

* c++程序是一组函数，而每个函数又是一个数组。C++有好几种语句，下面介绍其中的一些。
* 声明语句创建变量，赋值语句给该变量提供一个值。另外，该程序还演示了cout的新功能。

```Cpp
##include <iostream>

int main()
{
  using namespace std;

  int carrots;

  carrots = 25;
  cout << "I have";
  cout << carrots;
  cout << "carrots";
  cout << endl;
  carrots = carrots - 1;
  cout << "Crunch, crunch. Now I have" << carrots << "carrots." << endl;
  return 0;
}
```

* 使用声明语句来指出存储类型并提供📍位置标签。

```Cpp
int carrots;
```

* 需要内存以及该内存单元的名称，具体来说这条语句指出程序需要是够的存储空间

##### 为什么变量必须要声明

* 程序中的声明语句叫做定义声明(defining declaration)语句。简称为定义(definition)。这意味着它将导致编译器为变量分配内存空间。在较为复杂的情况下，还可能应用声明(reference declaration)。这些声明命令计算机使用在其他地方定义的变量。
* `int`被存储的数据类型，`carrots`变量名，`;`分号表示语句结束

### 01-02
#### 赋值语句

* 赋值语句是将赋值给存储单元。
* carrots 25;
* 符号=叫做赋值运算。C++(和C)有一项不寻常的特性————可以连续使用赋值运算符。

```Cpp
int steinway;
int baldwin;
int yamaha;
ymaha = baldwin = steinway = 88;
```

* 赋值将从右向左。首先，88被赋值给steinway:然后，steinway的(现在是88)被赋给baldwin;
* 然后baldwin的值88被赋值给yamaha(C++遵循C的爱好，允许外观奇怪的代码)。

```Cpp
carrots = carrots - 1;
```

* 赋值运算符将这个carrots-1是一个算术表达式。计算机将变量carrots的值25减去1，得到24。
* 然后，赋值运算符将这个新赋值存储到变量carrots对应的内存单元中。

### 01-03
#### cout的新花样

* cout不光可以用来打印字符串，而且可以打印变量。

```Cpp
cout << carrots;
```

* 程序不会去打印"carrots"，而是打印存储在`carrots`的整数值
