class Solution {
public:
    long long powM(int a, long long b, int m) {
        if(b == 0)
            return 1;
        int k = powM(a, b/2, m);
        
        if(b&1)
            return (((1LL*k*k)%m)*a)%m;
        else
            return (1LL*k*k)%m;
    }
    
    int countGoodNumbers(long long n) {
        int m = 1000000007, a = 20;
        // by P&C -> 5*4*5*4 if(n is even)
        //           5*4*5*4*5 else
        
        int res = powM(a, n/2, m);
        
        if(n&1)
            return (1LL*res*5)%m;
        else
            return res;
        
    }
};