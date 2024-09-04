class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int rev = 0, org = x;
        while (x!=0) {
            if (rev>INT_MAX/10 || rev<INT_MIN/10)
                return false;
            rev = rev*10 + x%10;
            x/=10;
        }
        return rev == org;
    }
};
