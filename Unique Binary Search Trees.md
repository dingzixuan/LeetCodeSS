####Unique Binary Search Trees:
Given n, how many structurally unique BST's (binary search trees) that store values 1...n?  
For example,  
Given n = 3, there are a total of 5 unique BST's.  
   1         3     3      2      1  
    \       /     /      / \      \  
     3     2     1      1   3      2  
    /     /       \                 \  
   2     1         2                 3  

####思路：
BST左小右大，中根序序遍历二叉树；  
①分别以1…n为根的二叉树有多少？ => ②以i为根范围在s到t之间的二叉树有多少？ => s~i-1构成左子树，i+1~t构成右子树，左右子树个数乘积即为结果，左右子树计算回归到②
