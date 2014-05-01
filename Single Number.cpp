class Solution {
public:
    int singleNumber(int A[], int n) {
        if (n==0) {
            return 0;
        }
        int x = A[0];
        for (int i = 1; i < n; i++) {
            x = x^A[i];
        }
        return x;
    }
};
