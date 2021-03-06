﻿学习笔记 
# 期末总结
## 一、算法思想
对于程序而言，所能处理的都是重复性的问题，因此算法的核心思想是化繁为简，寻找重复性。做算法题的时候，需要使用机器思维，而不是人工推算。使用数学归纳的思想，将问题拆分成可重复解决的子问题。

## 二、做题方法
做题的两个关键：一是不要死磕，如果没思路，就直接看答案，通过记忆答案的方式掌握解法，二是要过遍数，题目只做一遍是不够的，需要过遍数才能掌握。
五毒神掌法，指题目要至少做五遍，每一遍的效果是不同的。
第一遍：不要死磕，看代码学习，包括中国区和世界区的高票解答。
第二遍：当学习了代码之后，不看现成的代码，自己实现。
第三遍：一天之后，重新做题。
第四遍：一周之后，重新做题。
第五遍：面试之前，做题巩固。

## 学习内容简介：
哈希表、映射、集合，树、二叉树、二叉搜索树，堆和二叉堆、图， 数组、链表、跳表，
 栈、队列、优先队列、双端队列，泛型递归、树的递归，分治、回溯， 深度优先搜索和广度优先搜索，
贪心算法，二分查找，字典树和并查集，高级搜索，AVL和红黑树的实现和特性。 

### 具体内容：
1、对于链表的问题，可能会需要复杂的代码设计，但是可以先寻找子结构，基于递归的思想，简化问题。
2、遇到涉及到计算的问题，例如要计算几个数字的和或者存水的体积，可以用双指针的方法。
3、一些问题用最笨的方法求解，往往需要两层for循环，但是这样一般不能AC，可以考虑用map的机制，存贮中间结果，尽量用一层循环。
4、将访问过的数据存到set中， 可以用来判断是否有重复。

#### 递归和回溯算法：
主要用于解决排列组合问题。组合问题主要包括，给定数组，返回所有的排列，返回固定大小的所有的子集等。算法的主要方法就是分
治和回溯。分治的本质还是递归，依然是找子问题。最后组合子问题返回；回溯依然是递归的一种实现方式，都是要找到一种归去来兮的感觉。回溯算法的模板是，先在主函数F中嵌套一个递归函数G
，这G中会递归调用G，参数是处理，为了降低计算复杂度，或者为了满足题目的特殊的要求，需要剪枝。经典的求幂函数 Pow(x,n）是一个基础题，也是高频题，需要熟练掌握。
解决此问题，就要用到分治法。 可以每次将n减半，分别进行处理，对于幂值是负值的情况，就先求正数的情形，最后取结果的倒数即可。对于8皇后问题，就是用回溯算法解决。有一个重要的问题就是，
判断皇后是否可以互相攻击时，可以用三个数组来代表可以攻击的标志数字，判断是否在同一行，或者是在两条对角线上。在进入下一行搜索后，要将之前添加的状态归位，就是
需要移除之前的添加的状态，防止影响其他的位置的判断。

#### 哈希表：
哈希表的插入，查找，添加和删除操作的平均计算复杂度都是O(1)，在最坏的情况下，哈希会产生很多的冲突，会使得其退化成链表的形式。
但是，随着计算机的内存大扩大和哈希函数的不断优化，所有的操作基本上都是O(1)的。哈希表在统计若干元素的个数是有很大
的用途。可以用数组实现，数组的下标可以对应特定的字符或字符串，数组中的值可以表示对应字符或字符串的性质，如频率或个数。
例如，可以用长度为26的数字来构造一个哈希表，数组下标对应着26个英文字母。

#### 映射和set：
中的数据类型可以很广泛，既可以是int型，也可以是复合形式的的，map可以保存高维的数据，尤其是可以保存对象和该对象对应
的性质。一个经典的应用就是求数组中的两个数字和等于目标的下标，用map实现哈希表，计算复杂度是O(n)的。
同时，可以用set来实现删除重复元素的目的。

#### 二叉搜索树：
二叉搜索树是一种非常重要的二叉树，每个节点都有一个数值，父节点中的数值大于左子树上所有的数值，同时也小于右子树
上所有的数值。查找的时间计算复杂度是log(n)的。二叉树的前，中和后序遍历可以用递归的方法解决。一般在面试时，解决
二叉树的遍历都是用递归方法。

#### 深度优先搜索和广度优先搜索：
都是针对图和树的遍历算法，主要可以解决最佳路径的搜索问题。深度优先搜索可以解决二叉树的前、中、后遍历，广度优先搜索可以得到最短路径，
和二叉树的层序遍历。

#### 贪心算法：
作出在当前看来最好的选择。也就是说贪心算法并不从整体最优考虑，它所作出的选择只是在某种意义上的局部最优选择。贪心算法可以解决一些最优化问题。
求图中最小生成树，求哈夫曼编码等。然而对于工程和生活中的问题，贪心算法一般不能得到我们的所要求的答案。

 

