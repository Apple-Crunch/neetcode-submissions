class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max = 0;
        for(int i=0; i<heights.size() - 1; i++){
            for(int j = i+1; j<heights.size(); j++){
                if(max <min(heights[i], heights[j]) * (j-i)) max = min(heights[i], heights[j]) * (j-i);
            }
        }
        return max;
    }
};
