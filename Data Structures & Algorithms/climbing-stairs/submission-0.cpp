class Solution {
public:
    int climbStairs(int n) {
        int stairs[45];
        stairs[0] = 1;
        stairs[1] = 2;
        stairs[2] = 3;
        for(int i=3; i<45; i++) stairs[i] = stairs[i-2] + stairs[i-1];
        return stairs[n-1];
    }
};
