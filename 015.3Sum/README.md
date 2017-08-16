## LeetCode 015 3SUM

Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note: The solution set must not contain duplicate triplets.

For example, given array S = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]

如果随机找$C_n^3$种方案。假定满足条件的三个数为a,b,c，这三个数索引分别为i, j, k。先排序，从数组的头确定一个数a，b的索引比a大1，c为数组的尾，有三种情况

a + b + c = target 则i++ k-- 并把这三个数记录下来
a + b + c < target 则j++
a + b + c < target 则k--
终止条件b < c。
相当于确定两个，动一个，这样比较好确定方案

![Markdown](http://i4.bvimg.com/606002/bee2f959117cc6be.jpg)