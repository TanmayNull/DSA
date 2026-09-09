class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000)
            return 0;

        if(n < 1000000LL)
            return n - 999;

        if(n < 1000000000LL)
            return 999000LL
                 + (n - 999999LL) * 2;

        if(n < 1000000000000LL)
            return 999000LL
                 + 999000000LL * 2
                 + (n - 999999999LL) * 3;

        if(n < 1000000000000000LL)
            return 999000LL
                 + 999000000LL * 2
                 + 999000000000LL * 3
                 + (n - 999999999999LL) * 4;

        return 999000LL
             + 999000000LL * 2
             + 999000000000LL * 3
             + 999000000000000LL * 4
             + (n - 999999999999999LL) * 5;
    }
};