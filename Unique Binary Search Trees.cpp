class Solution {
public:
    int rootNumTrees(int root, int s, int t) {
        int left = 0;
        int right = 0;
        if (root == s) left = 1;
        else {
            for (int i = s; i <= root - 1; i++) {
                left += rootNumTrees(i, s, root - 1);
            }
        }
        if (root == t) right = 1;
        else {
            for (int j = root + 1; j <= t; j++) {
                right += rootNumTrees(j, root + 1, t);
            }
        }
        return left * right;
    }
    int numTrees(int n) {
        int count = 0;
        for (int i = 1; i<=n; i++) {
            count += rootNumTrees(i, 1, n);
        }
        return count;
    }
};
