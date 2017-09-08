# 01-01-03
## C++函数

### 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-03#01-01)`使用有返回值的函数`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-03#01-02)`函数变体`
* [01-03](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-03#01-03)`用户自定义函数`


## 01-01
### 使用有返回值的函数

* 有返回🔙值的函数将生成一个值，而这个值可以赋给变量或在其他表达式中使用。
* 标准C/C++库包含一个名为sqrt()的函数，它返回平方根。假设要设计6.25的平方根，并将这个值赋给变量x，则可以在程序中使用下面的语句:

```Cpp
x = sqrt(6.25) //返回的值是2.5
```

* 表达式`sqrt(6.25)`将调用`sqrt()`函数。表达式`sqrt(6.25)`被称为函数调用，被调用的函数叫做被调用函数(called function)，`包含函数调用的函数叫做调用函数`。
* 圆括号`()`中的值是发给函数的信息，这被称为传递给函数。以这种方式发给函数的值叫做参数。函数sqrt()得到的结果是2.5，并在将个值发给你调用函数；
* 发送回去的值叫做函数的返回值(return value)。

注意⚠️：C++程序应当为程序中使用的每个函数提供原型

* 函数原型之于函数就像变量声明之于变量————指出设计的类型
* 例如：C++库将sqrt()函数定义成将一个(可能)带小数部分的数字作为参数，并返回一个相同类型的数字。有些语言将这种数字成为实数，但是`C++`将这种类型称为`double`。sqrt()的函数原型就如下：

```Cpp
double sqrt(double); //function prototype
```

* 第一个`double`意味着`sqrt()`将返回一个`double`值。括号中的`double`意味着`sqrt()`需要一个`double`参数。
* 因此该原型对`sqrt()`的描述和下面代码中使用的函数相同。

```Cpp
double x;
x = sqrt(6.25);
```

* 在程序中使用`sqrt()`时，也必须提供原型。可以用两种方法来实现:
    * 在源码文件中输入函数原型；
    * 包含在头文件cmath(老的为math.h)，其中定义了原型。

* 第二种方法更好，因为头文件更可能使头文件正确✅
* 对于C++库中的每个函数，都在一个或多个头文件中提供了其原型。请通过手册或在线帮助查看函数描述来确定应使用哪个头文件。
* 不要混淆函数原型和函数定义。可以看出，原型只描述函数接口。也就是说，它描述的是发给函数的信息和返回的信息。
* 而定义中包含了函数的编译代码。
* 如计算平方根的代码。C和C++将库函数的这两项特性(原型和定义)分开了。
* 库文件中包含了函数的编译代码，而头文件中则包含原型。 [.h头文件 .lib库文件 .dll动态库文件之间的关系](http://blog.csdn.net/yusiguyuan/article/details/12649737)
* 应在首次使用函数之前提供其原型。通常的做法是吧原型放到main()函数定义的前面。

#### 函数库sqrt()的用法

* 它通过包含cmath文件来提供该函数的原型。

```Cpp
#include <iostream>
#include <cmath>

int main()
{
  using namespace std;

  double area;
  cout << "Enter the floor area, in square feet, of your home: ";
  cin >> area;
  double side;
  side = sqrt(area);
  cout << "That's the equivalent of a square " << side
       << "feet to the side." << endl;
  cout << "How fascinating!" << endl;
  return 0;
}
```

注意：如果使用老的编译器，则头文件为` #include <math.h>`

#### 使用库函数

* C++库函数储存在库文件中。编译器编译程序时，它必须在库文件搜索您使用的函数。至于自动搜索哪些文件，将因编译器而异。

* C++允许在程序的任何地方声明新变量，，而且C++还允许在创建变量时对它进行赋值，因此也可以`double side = sqrt(area);`
* 这个过程

## 01-02
### 函数变体

#### 多个参数

* 有些函数可能需要多项信息。这些函数使用多个参数，参数使用逗号分开。例如，数学函数`pow()`接受两个参数，返回值为以第一个参数为底，第二个参数为指数的幂。
* 函数原型如下:

```Cpp
double pow(double,double); // prototype of a function with two arguments
```

* 如果计算5的8次方，可以这样使用该函数：

```Cpp
answer = pow(5.0,8.0);
```

#### 没有参数

* 另一些函数不接受任何参数。例如，有一个C库(与cstdlib或stdlib.h相关的库)包含rand()函数，该函数不接受任何参，并返回一个随机整数，该函数原型如下：

```Cpp
int rand(void);
```

* 关键字void明确指出，该函数不接受任何参数。如果省略void，让括号为空，则C++将其解释为一个不接受任何参数的隐式声明。可以这样使用该函数：

```Cpp
myGuess = rand();
```

* C++中即使没有参数也要有括号
