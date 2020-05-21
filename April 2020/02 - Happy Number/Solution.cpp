class Solution {
public:
    int sumDigitSquare(int n) {
        int totalSum = 0;
        while(n) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        
        return totalSum;
    }
    
    bool isHappy(int n) {
        set<int> s;
        s.insert(n);
        while(true) {
            if(n == 1)
                return true;
            n = sumDigitSquare(n);
            if(s.find(n) != s.end())
                return false;
            s.insert(n);
        }
        return false;
    }
};