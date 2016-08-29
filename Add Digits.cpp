// loop solution
class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }
        int sum = 0;
        do {
            sum += num % 10;
            num = num / 10;
        } while (num >= 10);
        return addDigits(sum + num);
    }
};

// digital root o(1) solution
class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};
