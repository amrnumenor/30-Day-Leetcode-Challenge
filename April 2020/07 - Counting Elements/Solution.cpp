class Solution {
public:
    int countElements(vector<int>& arr) {
        vector<int> arr_plus;
        int ctr = 0;
        for(int x : arr) 
            arr_plus.push_back(x + 1);        
        for(int i = 0; i < arr_plus.size(); ++i) {
            auto it = find(arr.begin(), arr.end(), arr_plus[i]);
            if(it != arr.end()) ctr++;
        }
        return ctr;
    }
};