class Solution {
public:
    string firstPalindrome(vector<string>& words) {
     for(int k = 0; k < words.size(); ++k) {
         int i = 0, j = x.size()-1;
         while(i <= j) {
             if(words[k][i] != words[k][j])
                 break;
             ++i; --j;
         }
         if(i > j)
             return x;
     }
        return "";
    }
};
