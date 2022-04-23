// class Solution {
// public:
//     string addSpaces(string s, vector<int>& spaces) {
//         vector <char> a;
//         for(auto x : s) {
//             a.push_back('1');
//             a.push_back(x);
//         }
//         for(auto x : spaces) 
//             a[2*x] = ' ';
        
//         string res;
//         for(auto x : a) {
//             if(x == ' ' || (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
//                 res.push_back(x);
//         }
//         return res;
    
//     }
// };

//Method-2:

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
    
        for(int i = 0, j = 0; i < s.size(); ++i) {
            if(j < spaces.size() && i == spaces[j]) {
                ans.push_back(' ');
                ++j;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};