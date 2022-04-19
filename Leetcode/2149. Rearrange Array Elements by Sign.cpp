class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        vector<int> v(a.size());
        int n = 0, p = 1;
        
        for(auto &x : a) {
            if(x > 0) {
                v[n] = x;
                n += 2;
            }
            else {
                v[p] = x;
                p += 2;
            }
        }
        return v;
       
    }
};