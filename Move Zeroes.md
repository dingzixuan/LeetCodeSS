#### Move Zeros:
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.

####思路
最外层以下标顺序遍历数组的每一个元素，决定该位置应被填充的值；  
当nums[i] == 0时，说明值需要被后面的元素填充；否则不需要；  
另一个指针用来向后寻找应该被填充的值，原理为*向后找到最近的一个非零元素*；  
    1. 若被填充，则该指针位置的值要变成零（类似和前面元素交换）  
    2. 控制此指针不越数组的界。