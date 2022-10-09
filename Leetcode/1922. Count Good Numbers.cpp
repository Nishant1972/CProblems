class Solution {
public:
    long long powM(int a, long long b, int m) {
        if(b == 0) return 1;
        int k = powM(a, b/2, m);
        return (b&1) ? (((1LL*k*k)%m)*a)%m : (1LL*k*k)%m;
    }
    
    int countGoodNumbers(long long n) {
        int m = 1000000007, a = 20;
        if(n == 0) return 1;
        
        int res = powM(a, n/2, m);
        return (n&1) ? (1LL*res*5)%m : res;
    }
};
