class Solution {
public:
    int countElements(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        int count = 0;
        
        for(auto x : nums) {
            if(x != mn && x != mx)
                ++count;
        }
        return count;
    }
};