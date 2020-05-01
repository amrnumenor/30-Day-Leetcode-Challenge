class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x, y;
        priority_queue<int> pq;
        for(int x : stones)
            pq.push(x);
        while(pq.size() > 1) {
            y = pq.top();
            pq.pop();
            x = pq.top();
            pq.pop();
            if(y - x != 0)
                pq.push(y - x);
        }
        if(!pq.empty())
            return pq.top();
        else
            return 0;
    }
};