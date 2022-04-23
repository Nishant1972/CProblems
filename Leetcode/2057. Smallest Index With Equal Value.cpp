class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size(), ans = -1;
        for(int i = 0; i < n; ++i) {
            if(i%10 == nums[i]) {
                ans = i; break;
            }
        }
        return ans;
    }
};