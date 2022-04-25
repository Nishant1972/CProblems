class Solution {
public:
    string largestOddNumber(string s) {
        int n = s.size();
        for(int i = n-1; i >= 0; --i) {
            if((s[i]-'0')&1)
                break;
            s.pop_back();
        }
        return s;
    }
};