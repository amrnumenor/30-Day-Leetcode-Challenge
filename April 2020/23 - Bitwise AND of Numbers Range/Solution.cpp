class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int count = 0;
        while(m != n) {
            m >>= 1;
            n >>= 1;
            cout<<m<<" "<<n<<endl;
            count++;    
        }
        for(int i = 1; i <= count; ++i)
            cout<<(m<<1)<<endl;
        return m<<count;
    }   
};