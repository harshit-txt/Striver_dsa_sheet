class Solution {
public:
    bool isPowerOfTwo(int n) {
        unsigned long long check{1};
        if (n == 1){
            return true;
        }
        else if(n == 0){
            return false;
        }
        for (int i{0}; i < n/2; i++){
            check = check * 2;
            if (check == n){
                return true;
            }
        }
        return false;
    }
};