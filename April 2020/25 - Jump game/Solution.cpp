// Greedy solution
// iterate from back to front 
// find out if it can reach the leftmost idx
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastIdx = nums.size() - 1;
        for(int i = lastIdx - 1; i >= 0; --i) {
            // check if the currentIdx + currentElemt is larger or equal to last index
            // if yes, current index become last index
            // repeat until it either reach or not reach the leftmost index
            if(i + nums[i] >= lastIdx)
                lastIdx = i;
        }
        return lastIdx == 0;
    }
};