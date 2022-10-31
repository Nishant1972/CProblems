class Solution {
public:
    int countOperations(int a, int b) {
        int count = 0;
        while(a && b) {
            (a > b) ? a -= b : b -= a;
            ++count;
        }  
        return count;
    }
};
