class FirstUnique {
    
    unordered_map<int, int> _mp;
    queue<int> _q;
    
public:
    FirstUnique(vector<int>& nums) {
        for(int num : nums)
            add(num);
    }
    
    int showFirstUnique() {
        while(!_q.empty() && _mp[_q.front()] > 1)
            _q.pop();
        
        if(_q.empty())
            return -1;
        return _q.front();
    }
    
    void add(int value) {
        _q.push(value);
        _mp[value]++;
    }
};
