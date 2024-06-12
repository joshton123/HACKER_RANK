class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q ;
    void push(int x) {
        int size = q.size();
        q.push(x);
        for(int i=0 ; i<size ; i++){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int d = q.front();
        q.pop();
        return d;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};