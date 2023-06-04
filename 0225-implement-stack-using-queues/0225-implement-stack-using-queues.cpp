class MyStack {
    queue<int>main_que, aux_que;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        while(!main_que.empty()){
            int num = main_que.front();
            main_que.pop();
            aux_que.push(num);
        }
        main_que.push(x);
         while(!aux_que.empty()){
            int num = aux_que.front();
            aux_que.pop();
            main_que.push(num);
        }
    }
    
    int pop() {
        int num = main_que.front();
        main_que.pop();
        return num;
    }
    
    int top() {
        return main_que.front();
    }
    
    bool empty() {
        return main_que.empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */