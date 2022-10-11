class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int count = 0;
        while((target != 1) && (maxDoubles != 0)) {
            target = (target&1) ? target-1 : target/2;
            if(!(target&1)) --maxDoubles;
            ++count;
        }
        return target - 1 + count;
    }
};
