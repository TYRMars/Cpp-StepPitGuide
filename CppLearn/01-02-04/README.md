# 01-02-04
## 算数运算符

* C++使用运算符来运算。它提供了几种运算符来完成5种基本的算数计算：加法、减法、乘法、除法以及求模。
* 每种运算符都使用两个值（操作数）来计算结果。运算符及其操作数构成了表达式
* 下面是C++中算数运算符的基本用法：
  - `+`运算符对操作数执行加法运算。
  - `-`运算符从第一个数中减去第二个数。
  - `*`运算符将操作数相乘。
  - `/`运算符用第一个数除以第二个数。如果两个操作数都是整数，则结果为商的整数部分。如果无法整除，小数部分将被丢弃。
  - `%`运算符求模，它生成第一个数除以第二个数后的余数。

```Cpp
#include <iostream>

int main()
{
  using namespace std;
  float hats, heads;

  cout.setf(ios_base::fixed,ios_base::floatfield);
  cout << "Enter a number:";
  cin >> hate;
  cout << "Enter another number";
  cin >> heads;

  cout << "hats = " << hats << "; heads =" << heads << endl;
  cout << "hats + heads = " << hats + heads << endl;
  cout << "hats - heads = " << hats - heads << endl;
  cout << "hats * heads = " << hats * heads << endl;
  cout << "hats / heads = " << hats / heads << endl;
  return 0;
}
```

## 目录

* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-04#01-01)`运算符优先级和结合性`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-04#01-02)`除法分支`
* [01-03](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-04#01-03)`求模运算符`
* [01-04](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-04#01-04)`类型转换`

## 01-01
### 运算符优先级和结合性

* C++的使用规则

## 01-02
### 除法分支

* 除法运算符`(/)`的行为取决于操作数的类型。如果两个操作数都是整数，则C++将执行整数除法。
* `cout.setf(ios_base::fixed,ios_base::floatfield)`
* `ios_base::fixed`是设置cout为定点输出格式
* `ios_base::floatfield`是设置输出时按浮点格式，小数点后有6位数字

```Cpp
#include <iostream>
int main()
{
  using namespace std;
  cout.setf(ios_base::fixed,ios_base::floatfield);
  cout << "Integer division: 9/5 =" << 9/5 << endl;
  cout << "Floating-point division : 9.0/5.0 =";
  cout << 9.0 / 5.0 << endl;
  cout << "Mixed division: 9.0 / 5 =" << 9.0 / 5 << endl;
  cout << "double constants: 1e7 / 9.0 =";
  cout << 1.e7 / 9.0 << endl;
  cout << "float constants: 1e7f/9.0f = ";
  cout << 1.e7f / 9.0f << endl;
  return 0;
}
```

#### 运算符重载
* 在上面程序中，除法运算符表示了3种不同的运算：int除法、float除法和double除法。C++根据上下文（这里是操作数的类型）来确定运算符的含义。使用相同的符号进行多种操作叫做运算符重载（operator overloading）。C++有一些内置的重载示例。C++还允许扩展运算符重载，以便能够用于用户定义的类，因此在这里看到的是一个重要的OOP属性

## 3.4.3
### 求模运算符

* 它可以与整数除法相结合，尤其适用于解决要求将一个量分成不同的整数单元的问题，例如将英寸转换为英尺和英寸，或者将美元转化为元、角、分、厘

```Cpp
#include <iostream>
int main()
{
  using namespace std;
  const int Lbs_per_stn = 14;
  int lbs;

  cont << "Enter your weight in pounds:";
  cin >> lbs;
  int stone = lbs / Lbs_per_stn;
  int pounds = lbs % Lbs_per_stn;
  cout << lbs << "pounds are" << stone
       << "stone," << pounds << " pounds(s) . \n";
  return 0;
}
```

## 3.4.4
### 类型转换

* C++丰富的类型允许根据需求选择不同的类型
* C++自动执行很多类型转换
  - 将这一种算数类型的赋值给另一种算数类型的变量时，C++将对值进行转换；
  - 表达式中包含不同的类型时，C++将对值进行转换；
  - 将参数传递给函数时，C++将对值进行转换。

### 1
#### 初始化赋值转换

* C++允许将一种类型的值赋给另一个类型的变量。这样做时，值将被转换为接收变量的类型

```Cpp
so_long = thirty;
```

* 潜在的数值转换问题

| 转换 | 潜在的问题    |
| :------------- | :------------- |
| 将较大的浮点类型转换为较小的浮点类型，如将double转换为float | 精度（有效数位）降低，值可能超出目标类型的取值范围，在这种情况下，结果将是不确定的 |
| 将浮点类型转换为整数   | 小数部分丢失，原来的值可能超出目标类型的取值范围，在这种情况下，结果将是不确定的  |
| 将较大的整数类型转换为较小的整数，如将long转换为short   | 原来的值可能超出目标类型的取值范围，通常只复制右边的字节  |
