class Solution {
public:
    bool checkValidString(string s) {
        int minOpen = 0, maxOpen = 0;
        
        for(char c : s) {
            maxOpen += c != ')' ? 1 : -1; // case for '(' and '*'
            minOpen += c == '(' ? 1 : -1; // case for ')' and '*'
            if(maxOpen < 0)
                break;
            minOpen = max(minOpen, 0);
        }
        
        return minOpen == 0;
    }
};