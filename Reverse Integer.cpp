class Solution {
public:
    int reverse(int x) {
        if (x==0) return 0;
        int x1 = abs(x);
        int arr[12];    //存放逆序数列
        memset(arr, 0, sizeof(arr));
        int i = 0;  //arr迭代变量
        int m = 1;  //乘子:1,10,100...
        int y = 0;  //要return的数
        //把x的绝对值逆转存入数组
        while(x1!=0) {
            arr[i] = x1%10;
            x1 = x1/10;
            i++;
            m = m*10;
        }
        //把数组中的重构成整数
        m = m/10;
        i = 0;
        while (m!=0) {
            y = y + m*arr[i];
            m = m/10;
            i++;
        }
        return x>0?y:y*(-1);
    }
};
