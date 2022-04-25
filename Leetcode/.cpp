class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c = 0;
        for(auto x : nums) {
            if(x == 0) 
                return 0;
            else if(x < 0)
                ++c;
        }
        return (c&1) ? -1 : 1;
    }
};