class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int n = m.size();
        unordered_set<int> s;
        
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j)
                s.insert(m[i][j]);
            if(s.size() != n)
                return false;
            s.clear();
        }
        
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j)
                s.insert(m[j][i]);
            if(s.size() != n)
                return false;
            s.clear();
        }
        return true;
    }
};