class MinStack {
    //first element of pair store the value,
    //second element of pair store the min value    
    stack<pair<int, int>> SP; 
public:
    MinStack(){}
    
    void push(int x) {
        if(SP.empty())
            SP.push({x, x});
        else
            SP.push({x, min(SP.top().second, x)});
    }
    
    void pop() {
        SP.pop();
    }
    
    int top() {
        return SP.top().first;
    }
    
    int getMin() {
        return SP.top().second;
    }
};