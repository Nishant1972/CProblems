class Solution {
public:
    int countElements(vector<int>& nums) {
        int mn = nums[0], mx = nums[0];
        for(int i = 0; i < nums.size(); ++i) {
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
        }
        
        int count = 0;    
        for(auto x : nums) {
            if(x != mn && x != mx)
                ++count;
        }
        return count;
    }
};
