## LeetCode 004 Median of Two Sorted Arrays

Given n non-negative integers a1, a2, ..., an, where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains the most water.

Note: You may not slant the container and n is at least 2.

要找到两条纵线，然后这两条线以及X轴构成的容器能容纳最多的水。
解析：以[4,6,2,6,7,11,2]来讲解
1.首先假设我们找到能取最大容积的纵线为i，j（假定i < j），那么得到的最大容积C=min(ai,aj)*(j - i)；
2.下面我们看到这么一条性质：
a，在j的右端没有一条线会比它高！
b，在i的左端也不会有比它高的线！
3.所以我们从两头向中间靠拢，同时更新候选值；在收拢区间的时候优先从x，y中较小的边开始收缩；
直观的解释就是：容积即面积，它受长和高的影响，当长度减少的时候，高必须增长才有可能提升面积，所以我们从长度最长开始递减， 然后寻找更高的线来更新候补；

![Markdown](http://i4.bvimg.com/606002/bee2f959117cc6be.jpg)