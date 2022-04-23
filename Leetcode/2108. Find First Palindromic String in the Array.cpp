class Solution {
public:
    string firstPalindrome(vector<string>& words) {
     for(auto x : words) {
         int i = 0, j = x.size()-1;
         while(i <= j) {
             if(x[i] != x[j])
                 break;
             ++i; --j;
         }
         if(i > j)
             return x;
     }
        return "";
    }
};