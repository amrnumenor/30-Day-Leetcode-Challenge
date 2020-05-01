class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ump; //performance
        vector<vector<string>> ans;
        string t;
        for(string s : strs) {
            t = s;
            sort(t.begin(), t.end());
            ump[t].push_back(s);
        }
        for(auto x : ump) {
            ans.push_back(x.second);
        }
        return ans;
    }
};