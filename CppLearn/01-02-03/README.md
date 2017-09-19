# 01-02-03
## 浮点数

* 浮点类型，他们是C++的第二组基本类型。浮点数能够表示带小数部分的数字。
* 使用浮点类型可以表示诸如2.5、3.14159和122442.32这样的数字。计算机将这样的值分成两部分存储。一部分表示值，另一部分用于对值进行放大或缩小。

## 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-03#01-01)`书写浮点数`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-03#01-02)`浮点类型`
* [01-03](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-03#01-03)`浮点常量`
* [01-04](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-03#01-04)`浮点数的优缺点`

## 01-01
### 书写浮点数

* `C++`有两种书写浮点数的方式。
1. 第一种是使用常用的标准小数点表示法：

```Cpp
12.34
939001.32
0.00023
8.0
```

  - 即使小数部分为0（如8.0），小数点也将确保该数字以浮点格式（而不是整数格式）表示。（`C++标准`允许实现表示不同的区域；例如，提供了使用欧洲方法的机制，即使逗号而不是句点用作小数点。然而，这些选项控制的是数字🔢在输入和输出中的外观，而不是数字在代码中的外观。）是数字在代码中的外观。）

2. 第二种表示浮点数的方法叫做E表示法，其外观是像这样的：`3.45E6`，这里指的是3.45与1000000相乘的结果；E6指的是10的6次方，即1后面6个0。
  - 因此3.46E6表示的是3450000，6被称为指数，3.45被称为尾数。

```Cpp
2.52e+8
8.33E-4
7E5
-18.32e13
1.69e12
5.98E24
9.11e-31
```

  - 记住：d.dddE+n指的是将小数点向右移n位，而d.dddE-n指的是将小数点向左移n位。之所以称为“浮点”，就是因为小数点可以移动。

## 01-02
### 浮点类型

* 和ANSI C 一样，C++也有3种浮点类型：`flout`、`double`和`long double`。
* 这些类型是按它们可以表示的有效数位和允许的指数最小范围来描述的。有效位`(significant figure)`是数字中有意的位。
* 事实上，C和C++对于有效位数的要求是，`float`至少`32位`，`double`至少`64位`，`long double`为80、96或128位。

```Cpp
#include <iostream>
int main()
{
  using namespace std;
  cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
  float tub = 10.0/3.0;
  double mint = 10.0/3.0;
  const float million = 1.0e6;

  cout << "tub = " << tub;
  cout << " a million tubs = " << million * tub;
  cont << ", \nand ten million tubs = ";
  cont << 10 * million * tub << endl;

  cout << "mint =" << mint << "and a million mints =";
  cout << million * mint << endl;
  return 0;
}
```
