class Solution {
public:
    int reverse(int x) {
        long long temp{x}, val, rev{0};
        if (x < 0){
            temp = temp - (2*temp);
        }
        while (temp > 0){
            val = temp%10;
            temp = temp / 10;
            rev = (rev*10) + val;
        }
        if (rev > INT_MAX || rev < INT_MIN){
            return 0;
        }
        if (x < 0){
            rev = rev - (2*rev);
            return rev;
        }
        return rev;
    }
};