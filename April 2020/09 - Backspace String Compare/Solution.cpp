class Solution {
public:
     string Build(string x) {
        string str = "";
        for(int i = 0; i < x.size(); ++i) {
            if(x[i] != '#')
                str += x[i];
            else if(!str.empty())
                str.pop_back();
        }
        return str;
    }
    
    bool backspaceCompare(string S, string T) {
        return Build(S) == Build(T);
    }
};