class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> v;
        // n-1 + n + n+1 = num
        // 3n = num
        // n = num/3 if(num%3 == 0)
        if(num%3 == 0) {
            v.push_back(num/3-1);
            v.push_back(num/3);
            v.push_back(num/3+1);
        }
        return v;
    }
};