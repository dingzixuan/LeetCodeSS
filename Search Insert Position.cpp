class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        int order = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] == target) {
                return i;
            }
            if (A[i] < target) {
                order ++;
            }
        }
        return order;
    }
};
