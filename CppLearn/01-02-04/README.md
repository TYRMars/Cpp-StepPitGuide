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
* 在上面程序中，除法运算符表示了3种不同的运算：int除法、float除法和double除法。C++根据上下文（这里是操作数的类型）
