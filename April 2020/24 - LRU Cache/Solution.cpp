class LRUCache {
    int capacity;
    list<pair<int, int>> lrulist;
    unordered_map<int, list<pair<int, int>>::iterator> hash;
    
    void moveToFront(int key, int val) {
        // erase and insert element to the front of list
        lrulist.erase(hash[key]);// O(1) since using iterator
        lrulist.push_front(make_pair(key, val));
        hash[key] = lrulist.begin();
    }
    
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(hash.find(key) == hash.end()) return -1;
        // move the key to front(most recent)
        int val = (*hash[key]).second;
        moveToFront(key, val);
        return val;
    }
    
    void put(int key, int value) {
        if(hash.find(key) != hash.end())
            moveToFront(key, value);
        else {
            lrulist.push_front(make_pair(key, value));
            hash[key] = lrulist.begin(); 
            if(hash.size() > capacity) {
                hash.erase(lrulist.back().first);// least recent
                lrulist.pop_back();
            }
        }
    }
};