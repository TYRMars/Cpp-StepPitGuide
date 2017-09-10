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
