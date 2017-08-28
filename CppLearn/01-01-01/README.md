# 01-01-01
## 了解C++

### 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-01#01-01)`程序实例说明`
* [01-02](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-01#01-02)`C++预处理器`
* [01-03](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-01#01-03)`main()函数`

### 01-01
#### 程序实例

```Cpp
#include <iostrem> //a PREPROCESSOR directive  预处理器指令
int main()//function header 函数头部
{
  using namespace std;
  cout << "Come up and C++ me some time.";
  cout << endl;
  cout << "You won't regret it!" << endl;
  return 0;
} //end of function body
```

### 01-02
#### C++预处理器与iostream文件

```Cpp
#include <iostrem> //a PREPROCESSOR directive  预处理器指令
```

* 预处理器编译指令


### 01-03
#### main()函数

```Cpp
int main()
{
  statements
  return 0;
}
```

* 这几行表明有一个名为mian()的函数，并描述了该函数的行为。这几行代码构成了函定义(function definition)。主要有两部分组成
  * 第一部分是`函数头`:`int main()`
  * 第二部分是`函数体`:`{//括号中所包含的}`
* main()中最后最后一条语句叫做返回语句(return statement)，他结束该函数。

### 01-04
#### 头文件名

* `<iostrem>`
* 像iostream这样的文件叫包含文件(include file)---由于它们被包含在其他文件中；也叫头文件(header file)---由于它们被包含在文件起始处。
* C++编译器自带了很多头文件，每个头文件都支持一组特定的工具。

### 01-05
#### 名称空间

* 如果使用iosstream，而不是iostream.h，则应使用下面的名称空间编译指令来使用iostream中的定义对程序可用
* `using namespace std;`
* 这叫做using编译指令。详细请看第九章
* 使用命名空间的好处：
    * 名称空间支持是C++的特征，旨在让你编写大型程序时，如果需要引用多个厂商的代码组合起来的程序，更易于组织。
    * 实际开发中的潜在问题，可能使用两个已经封装好的产品，而他们都包含一个名为wanda()的函数。
    * 这样，使用wanda()函数时，编译器将不知道是哪个版本，但如果使用名称空间，就可以使用不同的wanda()函数

```Cpp
Misroflop::wanda("go dancing ");
Piscine::wanda("a fish named Desire");
```

* 按照这种方式，类、函数和变量便是C++编译器的组件标准，它们现在都被放置在名称空间`std`中。
* 意味着在`iostream`中定义的用于输出的cout变量实际上是std::cout，而endl实际上是std::endl。因此可以省略编译指令using。

```Cpp
std::cout << "Come up and C++ me some time";
std::cout << std::endl
```

* 上面方法很麻烦，所以想着方便(使用iostream.h和cout)，但是using编译指令可以让你毫不费力的进行转换。不必在最前面加上`std::`
* 那就是使用`using namespace std;`
* 但是在大型项目上，也产生了问题。更好的办法是，只使用所需的名称可用，可以通过如下方法进行声明来实现：

```Cpp
using std::cout;
using std::endl;
using std::cin;
```

* 用如上编译指令代替下述代码后，便可以使用`cin`和`cout`，而不必加上`std::`前缀
