class Solution {
public:
    int minimumDifference(vector<int>& a, int k) { 
        sort(a.begin(), a.end());
        int mn = INT_MAX;
        for(int i = 0; i <= a.size()-k; ++i) 
            mn = min(mn, a[k-1+i]-a[i]);
        return mn;
    }
};