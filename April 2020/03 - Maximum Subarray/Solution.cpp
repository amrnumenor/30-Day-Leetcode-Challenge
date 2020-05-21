class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0], winSum = nums[0];
        for(int i = 1; i < nums.size(); ++i) {
            winSum = max(winSum + nums[i], nums[i]);
            maxSum = max(maxSum, winSum);
        }        
        return maxSum;
    }
};