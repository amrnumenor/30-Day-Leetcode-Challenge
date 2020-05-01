class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans;
        map<int, int> mp;
        for(int x : nums) {
            mp[x] += 1; 
        }
        for(auto it = mp.begin(); it != mp.end(); ++it) {
            if(it->second == 1)
                ans = it->first;
        }
        return ans;
    }
};