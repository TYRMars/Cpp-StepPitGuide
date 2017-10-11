# 01-03-01
## 数组

* short months[12];
* typename arrayName[arraySize]

* 作为复合类型
* 数组之所以被称为复合类型，是因为它是使用其他类型来创建的（C语言使用术语“派生类型”，但由于C++对类关系使用术语“派生”，所以它必须创建一个新术语）。不能仅仅将某东西声明为数组，它必须是特定类型的数组。没有通用的数组类型，但存在很多特定的数组类型，如char数组或long数组

```Cpp
#include <iostream>

int main()
{
  using namespace std;
  int yams[3];
  yams[0] = 7;
  yams[1] = 8;
  yams[2] = 6;

  int yamcosts[3] = {20,30,5};

  cout << "Tomtal yams = ";
  cout << yams[0] + yams[1] + yams[2] << endl;
  cout << "The package with " << yams[1] << "yams costs";
  cout << yamcosts[1] << "cents per yam.\n";
  int total = yams[2] * yamcosts[2];
  cout << "The total yam expense is " << total << "cents.\n";
  cout << "\nSize of yams array = " << sizeof yams;
  cout << "bytes.\n";
  cout << "Size of one element = " << sizeof yams[0];
  cout << "bytes.\n";
  return 0;
}
```

### 数组初始化规则

* C++有几条关于初始化数组的规则，它们限制了初始化的时刻，决定了数组的元素数目与初始化器中值的数目不相同时将发生的情况
* 只有在定义数组时才能使用初始化，此后就不能使用了，也不能将另一个数组赋给另一个数组

```Cpp
int cards[4] = {3,6,8,10}; //ok
int hand[4];//ok
hand[4] = {5,6,7,8}; // not ok
hand = cards; // not ok
```
