class Solution {
//use the same array solution
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroIdx = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i])
                nums[nonZeroIdx++] = nums[i];
        }
        for(int i = nonZeroIdx; i < nums.size(); ++i) {
            nums[i] = 0;
        }
    }
};