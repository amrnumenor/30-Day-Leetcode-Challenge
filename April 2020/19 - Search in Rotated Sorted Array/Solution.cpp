class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        
        while(l <= r) {
            int mid = l - (l - r) / 2;
            int midNum = nums[mid], rightNum = nums[r], leftNum = nums[l];
            
            // if found return index
            if(midNum == target)
                return mid;
            
            if(midNum >= leftNum) {
                if(target >= leftNum and target <= midNum) r = mid - 1;
                else l = mid + 1;
            } else {
                if(target <= rightNum and target >= midNum) l = mid + 1;
                else r = mid - 1;
            }
        }
        
        // not found
        return -1;
    }
};