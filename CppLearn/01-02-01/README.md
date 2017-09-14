# 01-02-01
## 简单变量

* 程序通常都需要存储信息。为了把信息储存在计算机中，程序必须记录3个基本属性：
    - 信息将存储在哪里
    - 要存储什么值
    - 存储何种类型的信息

### 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-01#01-01)`变量名`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-01#01-02)`整型`
* [01-03](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-01#01-03)`整型short、int、long和long long`
* [01-04](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-01#01-04)`无符号类型`
* [01-05](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-02-01#01-05)`选择整数类型`

## 01-01
### 变量名

* C++提倡使用有一定含义的变量名，（基本所有的写业务的时候都用有含义的变量名）
* 例如代表差旅费
* cost_of_trip或者costOfTrip。
* 必须要遵守以下C++的基本命名规则：
    - 在名称中只能使用字符、数字和下划线`(_)`。
    - 名称第一个字符不能是数字。
    - 区分大写字符和小写字符。
    - 不能将C++关键字用作名称。
    - 以下两个下划线或下划线和大写字母打头的名称被保留给实现（编译器及其使用的资源）使用。以一个下划线开头的名称被保留给实现，用作全局标识符。
    - C++对于名称的长度没有限制，名称中所有的字符都有意义，但有些平台有长度限制。

* 以下是一些有效和无效的C++名称：

```Cpp
int poodle; //valid 有效
int Poodle; //valid and distinct from poodle 有效并区别于 poodle
int POODLE; //valid and even more distinct 有效甚至更加明显
Int terrier; //invalid -- has to be int,not Int 不可使用，定义不能首字母大写 int才可以
int my_stars3; //valid 有效
int _Mystars3; //valid but reserved -- starts with underscore 有效但保留——以下划线开始（有的语言会把开头是下划线的变量当成私有变量）
int 4ever; //invalid beacause starts with a digit; 无效，因为开始是数字
int double; //invalid -- double is a C++ keyword; double 是一个C++关键字
int begin; //vaild -- begin is pascal keyword; begin 是一个Pascal关键字
int __fools; //valid but reserved -- starts with two underscores 有效但保留--以两个下划线开始
int the_very_best_variable_i_can_be_version_112; //valid
int honky-tonk; //invalid -- no hyphens allowed 没有连字符允许
```

## 01-02
### 整型

* 整数就是没有小数的数字。如果无限大的整数看作很大，则不可能用有限的计算机内存来表示所有的整数。因此语言只能表达所有整数的一个子集。所以C++提供了好几种，可以根据程序进行先择。
* 不同C++整型使用不同的内存量来存储整型。使用的内存量越大，可以表示的整数值范围也越大。另外，有的类型（符号类型）可表示正值和负值，而有的类型（无符号类型）不能表示负值。术语宽度（width）用于描述存储整数时使用的内存量。使用的内存越多，则越宽。
* C++的基本整型（按宽度递增的顺序排列）分别为char、short、int、long和C++11新增的long long，其中每个类型都有有符号版本和无符号版本，因此总共有10种类型可供选择。
* char是

## 01-03
### 整型short、int、long和long long

* 计算机内存由一些叫做位(bit)的单元组成。C++的short、int、long和long long类型通过使用不同数目的位来存储值，最多能够表示4种不同的整数宽度。
* C++提供了灵活的标准，它确保了最小长度
    - short至少16位；
    - int至少与short一样长；
    - long至少32位，且至少与int一样长；
    - long long至少64位，且至少与long一样长。

```Cpp
#include <iostream>
#include <climit>
int main()
{
  using namespace std;
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_long = LLONG_MAX;

  //sizeof
  cout << "int is" << sizeof(int) << "bytes." << endl;
  cout << "short is" << sizeof n_short << "bytes." << endl;
  cout << "long is" << sizeof n_long << "bytes." << endl;
  cout << "long long is" << sizeof n_llong << "bytes." << endl;
  cout << endl;

  cout << "Maximum values:" << endl;
  cout << "int:" << n_int << endl;
  cout << "short:" << n_short << endl;
  cout << "long:" << n_long << endl;
  cout << "long long:" << n_llong << endl << endl;

  cout << "Minimum int value = " << INT_MIN << endl;
  cout << "Bite per byte = " << CHAR_BIT << endl;
  return 0;
}
```

#### 1.运算符sizeof和头文件limits
* sizeof运算符指出，在8位字节的系统中，int的长度为4个字节。可对类型名或变量名使用sizeof运算符。
* 对类型名(如int)使用sizeof运算符时，应将名称放在括号中；
* 对变量名(如n_short)使用该运算符，括号是可选的

| 符号常量        | 表示           |
| :------------- | :------------- |
| CHAR_BIT      | char的位数       |
| CHAR_MAX   | char的最大值   |
| CHAR_MIN   | char的最小值   |
| SCHAR_MAX   | signed char 的最大值  |
| SCHAR_MIN   | signed char 的最小值  |
| UCHAR_MAX   | unsigned char 的最大值 |
| SHRT_MAX   | short的最大值  |
| USHRT_MAX   | unsigned short 的最大值  |
| INT_MAX   | int的最大值  |
| INT_MIN   | int的最小值  |
| UNIT_MAX   | long的最大值  |
| LONG_MIN   | long的最小值  |
| ULONG_MAX   | unsigned long的最大值  |
| LLONG_MAX   | long long 的最大值  |
| LLONG_MIN   | long long 的最小值  |
| ULLONG_MAX  | unsigned long long 的最大值  |

#### 2.初始化
* 初始化将赋值与声明合在一起。

```Cpp
int n_int = INT_MAX;
```

* 也可以使用字面值常量来初始化。可以将变量初始化为另一个变量，条件是后者已经定义。甚至可以使用表达式来初始化变量，条件是当程序执行到该声明时，表达式中所有的值都是已知的：

```Cpp
int uncles = 5;
int aunts = uncles;
int chairs =a aunts + uncles
```

* 如果将uncles的声明移到语句列表最后，则另外两条初始化语句将非法，因为这样当程序试图对其他变量进行初始化时，uncles的值是未知的。

#### 3.C++11的初始化

* 还有另一种初始化方法，这种方式用于数组和结构，但在C++98中，也可用于单变量：

```Cpp
int hamburgers = {24};
```

* 将大括号初始化器用于单值变量的情形还不多，但C++标准使得这种情形更多了。首先，采用这种方式时，可以使用等号（=），也可以不使用：

```Cpp
int emus{7};
int rheas = {12};
```

* 其次，大括号内可以不包含任何东西。在这种情况下，变量将被初始化为零：

```Cpp
int rocs = {};
int psychics{};
```

## 01-04
### 无符号类型

* 前面介绍的4种类型都有一种不能存储负数值的无符号变换体，其优点是可以增大变量能够存储的最大值。例如，如果short表示的范围为-32768到+32767，则无符号版本的表示范围为0-65535。
* 当然，仅当数值不会为负时才应使用无符号类型，如人口、粒数。
* 要创建无符号版本的基本整型，只需要使用关键字unsigned来修改声明即可：

```Cpp
unsigned short change;
unsigned int rovert;
unsigned quarterback; // unsigned int quarterback
unsigned long gone;
unsigned long long lang_lang;
```

* unsigned 本身时 unsigned int

```Cpp
#include <iostream>
#define ZERO 0     //makes ZERO symbol for 0 value
#include <climits> //defines INT_MAX as largest int value
int main()
{
  using namespace std;
  short sam = SHRT_MAX;
  unsigned short sue = sam;

  cout << "Sam has" << sam << " dollars and Sue has " << Sue;
  cout << " dollars deposited." << endl
       << "Add $1 to each account." << endl << "Now";
  sam = sam + 1;
  sue = sue + 1;
  cout << "Sam has " << sam << " dollars and Sue has " << sue;
  cout << "dollars deposited.\nPoor Sam;" << endl;
  sam = ZERO ;
  sue = ZERO ;
  cout << "Sam has" << sam << "dollars and Sue has" << sue;
  cout << "dollars deposited." << endl
  cout << "Take $1 from each account." << endl << "Now";
  sam = sam - 1;
  sue = sue - 1;
  cout << "Sam has " << sam << "dollars and Sue has" << sue;
  cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
  return 0;
}
```

*
