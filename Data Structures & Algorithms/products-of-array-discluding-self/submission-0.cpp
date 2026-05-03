class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vec;
        vec.resize(nums.size());
        for (int i = 0; i < nums.size(); i++) {
	        vec[i] = 1;
	        for (int j = 0; j < nums.size(); j++) {
		        if (j == i) continue;
		        vec[i] *= nums[j];
	        }
        }
        return vec;
    }
};
