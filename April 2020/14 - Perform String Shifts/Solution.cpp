class Solution {
public:    
    string stringShift(string s, vector<vector<int>>& shift) {
        int numShift = 0;
        string res = s;
        for(int i = 0; i < shift.size(); ++i)
            numShift += (shift[i][0] ? 1 : -1) * shift[i][1];
        for(int i = 0; i < s.size(); ++i){
            res[mod(i + numShift, s.size())] = s[i];
        }
        return res;
    }
    
    int mod(int a, int b) {
        int c = a % b;
    return (c < 0) ? c + b : c;
    }
};