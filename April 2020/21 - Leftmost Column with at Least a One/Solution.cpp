class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &bM) {
        vector<int> dim = bM.dimensions();
        int n = dim[0], m = dim[1];
        int i, j = m;
        int rptr = m, lptr = 0;
        
        for(i = 0; i < n; ++i) {
            lptr = 0;
            // binary search
            while(lptr < rptr) {
                int mid = lptr - (lptr - rptr) / 2;
                if(bM.get(i, mid))
                    rptr = mid;
                else
                    lptr = mid + 1;
            }
            // assign leftmost column with one to j
            j = lptr;
        }
        
        return j == m ? -1 : j;
    }
};