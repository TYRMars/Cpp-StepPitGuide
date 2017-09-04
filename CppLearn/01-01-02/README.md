# 01-01-02
## C++语句

## 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-02#01-01)`声明语句和变量`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-02#01-02)`赋值语句`
* [01-03](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-02#01-03)`cin与cout`

## 01-01
### 声明语句和变量

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

#### 为什么变量必须要声明

* 程序中的声明语句叫做定义声明(defining declaration)语句。简称为定义(definition)。这意味着它将导致编译器为变量分配内存空间。在较为复杂的情况下，还可能应用声明(reference declaration)。这些声明命令计算机使用在其他地方定义的变量。
* `int`被存储的数据类型，`carrots`变量名，`;`分号表示语句结束

## 01-02
### 赋值语句

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


## 01-03
### cin与cout

```Cpp
//input and output
#include <iostream>

int main()
{
  using namespace std;

  int carrots;

  cout << "How many carrots do you have?" << endl;
  cin >> carrots; //C++ input
  cout << "Here are two more"
  carrots = carrots + 2;
  cout << "Now you have" << carrots << "carrots." << endl;
  return 0;
}
```

* 运行程序输入一个值。为实现，使用了cin，这是与cout对应的用于输入的对象。而且还演示了cout对象的多功能性。
* 运行状况如下
    - How many carrots do you have?
    - 12
    - Here are two more. Now you have 14 carrots;

* 包含两个特性：用cin来读取键盘输入以及将四条输出语句组合成一条。

#### cin输入

* 执行`cin >> carrots;`。信息从`cin`流向`carrots`，就像C++将输出看作是流出程序的字符流一样，它也将输入看作是输入程序的字符流。`iostream`文件将`cin`定义为一个表示这种流的对象。
* 输出时，`<<`运算符将字符串插入到输出流中;输入时，cin使用`>>`运算符从输入流中抽取字符。
* 通常，需要在运算符右侧提供一个变量，以接收抽取的信息(符号<<和>>被选择用来指示信息流的方向)
* 与`cout`一样，`cin`也是一个智能对象。它可以将通过键盘输入的一系列字符(即输入)转换为接收信息的变量能够接受的形式。
* 程序之中将`carrots`声明为一个整型变量，因此输入被转换为计算机用来存储整数的数字形式

#### cout输出

* cout不光可以用来打印字符串，而且可以打印变量。

```Cpp
cout << carrots;
```

* 程序不会去打印"carrots"，而是打印存储在`carrots`的整数值

#### 使用cout进行拼接

* iostream文件中定义了`<<`运算符，可以像如下一样进行拼接

```Cpp
cout << "Now you have" << carrots << "carrots" << endl;
```

* 如同以下

```Cpp
cout << "Now you have"
cout << carrots
cout << "carrots"
cout << endl;
```

* 按照有关建议，最好如下写法

```Cpp
cout << "Now you have"
     << carrots
     << "carrots"
     << endl;
```
