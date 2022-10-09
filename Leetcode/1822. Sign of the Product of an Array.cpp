class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c = 0, flag = 1;
        for(auto x : nums) {
            if(x == 0) 
                flag = 0;
            else if(x < 0)
                ++c;
        }
        if(!flag)
             return 0;
        return (c&1) ? -1 : 1;
    }
};
