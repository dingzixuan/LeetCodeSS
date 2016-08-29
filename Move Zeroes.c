void moveZeroes(int* nums, int numsSize) {
    int* p = nums;
    for(int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            do {
                if (p - nums + 1 == numsSize) {
                    break;
                }
                p++;
            } while (*p == 0);
            nums[i] = *p;
            *p = 0;
        } else {
            p++;
        }
    }
}