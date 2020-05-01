class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int L, R;
        L = R = 1;
        for(int i = 0, j = nums.size()-1; i < nums.size() && j >= 0; ++i, --j) {
            ans[i] *= L;
            ans[j] *= R;
            L *= nums[i];
            R *= nums[j];
        }
        return ans;
    }
};