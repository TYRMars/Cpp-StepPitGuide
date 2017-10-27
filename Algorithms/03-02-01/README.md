# 03-01-01
## 选择排序算法-Selection Sort

* o(n^2)算法

### 目录
* [01-01](https://github.com/TYRMars/AlgorithmLearn/tree/master/Algorithms/03-01-01#01-01)`选择排序的基本思想`

## 01-01
### 选择排序的基本思想
* 选择排序
* 选择排序从数组的开头开始，将第一个元素和其他元素进行比较。检查完所有元素后，最小的元素会被放到数组的第一个位置，然后算法会从第二个位置继续。这个过程一直进行，当进行到数组的倒数第二个位置时，所有的数据便完成了排序。
* 选择排序会用到嵌套循环。外循环从数组的第一个元素一定到倒数第二个元素；内循环从第二个数组元素移动到最后一个元素，查找比当前外循环

### 伪代码 

```c
SelectionSort(A[0...n-1])
//该算法用选择排序对给定的数组排序
//输入：一个可排序数组A[0...n-1]
//输出：生序排列的数组A[0...n-1]
for i<-0 to n-2 do
  min <-i
  for j<-i+1 to n-1 do
   if A[j] < A[min] min<- j
  swap A[i] and A[min]
```

<p align="center"><img src="http://www.2cto.com/uploadfile/Collfiles/20160918/20160918092144584.gif" /></p>
