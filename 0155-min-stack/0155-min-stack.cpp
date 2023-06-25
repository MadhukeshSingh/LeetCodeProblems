class MinStack {
public:
    int MinStackHu[1000000];
    int t = -1;

    MinStack() {}

    void push(int val) {
        t++;
        MinStackHu[t] = val;
    }

    void pop() {
        if (t == -1) {
            return;
        } else {
            t--;
        }
    }

    int top() {
        return MinStackHu[t];
    }

    int getMin() {
        int mini = INT_MAX;
        for (int i = 0; i <= t; i++) {
            mini = std::min(mini, MinStackHu[i]);
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */