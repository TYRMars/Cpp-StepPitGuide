# 03-03-01
## 分治法的基本思想

* 划分：既然是分治，当然需要把规模为n的原问题划分为k个规模较小的子问题，并尽量使这k个子问题的规模大致相同。
* 求解子问题：各子问题的解法与*原问题的解法通常是相同的*，可以用递归的方法求解各个子问题，有时递归处理也可以用来循环来实现。
* 合并：把各个子问题的解合并起来，合并的代价因情况不同有很大差异，分治算法的有效性很大程度上依赖于合并的实现。
* 适用条件
    - 使用递归实现；
    - 问题的规模缩小到一定程度就可以容易地解决；
    - 问题可以分解为若干个规模较小的相同问题，即该问题具有最优子结构性质；
    - 问题分解出的子问题的解可以合并为该问题的解；
    - 问题所分解的子问题个各子问题都是相互独立的，即子问题之间不包含公共的子问题