class Solution {
public:
    bool isPalindrome(int x) {
        long n = x;
        long newN = 0;
        while(n>0){
            newN = newN * 10 + n % 10;
            n /= 10;
        }
        return x == newN;
    }
};