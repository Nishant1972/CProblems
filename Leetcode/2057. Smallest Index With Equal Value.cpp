class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int n = nums.size(), ans, flag = 0;
        for(int i = 0; i < n; ++i) {
            if(i%10 == nums[i]) {
                ans = i; 
                flag = 1;
                break;
            }
        }
        return (flag) ? ans : -1;
    }
};
