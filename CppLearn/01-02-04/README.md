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
