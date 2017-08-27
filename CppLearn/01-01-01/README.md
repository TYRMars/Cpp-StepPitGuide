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

* 像iostream这样的文件叫包含文件(include file)---由于它们被包含在其他文件中；也叫头文件(header file)---由于它们被包含在文件起始处。
* C++编译器自带了很多头文件，每个头文件都支持一组特定的工具。
