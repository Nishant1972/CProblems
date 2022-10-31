class Solution {
public:
    long long minimumRemoval(vector<int>& b) {
        // 1 4 5 6
        // for each element find operation to make all element equal to that.
        // Let operation for 4: 1 + (5-4) + (6-4) = 4
        // Find min of all operation.
       
        sort(b.begin(), b.end());
        
        int n = b.size();
        long long sum = 0;
        
        for(int i = 0; i < b.size(); ++i) 
            sum += b[i];
        
        long long int mn = sum - 1LL*n*b[0];
        for(int i = 0; i < b.size(); ++i)
            mn = min(mn, sum-1LL*(n-i)*b[i]); 

        // l[i-1]+r[i+1] = sum - b[i]
        return mn;
    }
};
