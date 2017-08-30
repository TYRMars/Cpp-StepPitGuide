# 01-01-02
## C++语句

### 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/CppLearn/01-01-02#01-01)`声明语句和变量`

### 01-01
#### 声明语句和变量

* c++程序是一组函数，而每个函数又是一个数组。C++有好几种语句，下面介绍其中的一些。
* 声明语句创建变量，赋值语句给该变量提供一个值。另外，该程序还演示了cout的新功能。

```C++
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
