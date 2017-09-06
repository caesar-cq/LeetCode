# LeetCode  2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
题目给定的两个链表指针l1、l2常理来说指向第一个有效元素，不是指向头结点的指针。因此，返回的指针也是指向有效结点的指针，不是指向头结点。
 
链表最好使用带头结点的表示方法，方便链表操作！头结点的数据域无用，随便初始化，用的是其指针域。

![Markdown](http://i4.bvimg.com/606002/bee2f959117cc6be.jpg)