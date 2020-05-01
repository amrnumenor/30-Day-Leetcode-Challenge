class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp; // we store index of every sum
        int longestCont = 0, sum = 0;
        mp[0] = -1
        for(int i = 0; i <nums.size(); ++i) {
            sum += (nums[i] == 1 ? 1 : -1);
            auto it = mp.find(sum);
            if(it != mp.end())
                longestCont = max(longestCont, i - mp[sum]);
            else
                mp[sum] = i;
        }
        return longestCont;
    }
};