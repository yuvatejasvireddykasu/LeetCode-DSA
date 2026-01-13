class MinStack {
public:
int x=0;
vector<int> s;
vector<int> m;
    MinStack() {
        
    }
    
    void push(int val) {
      if(x==0){
        s.push_back(val);
        m.push_back(val);
        x++;
      }else{
        m.push_back(min(val,m[x-1]));
        s.push_back(val);
        x++;
      }
    }
    
    void pop() {
     if(x==0)
     return;
     m.pop_back();
     s.pop_back();
     x--;
    }
    
    int top() {
        return s[x-1];
    }
    
    int getMin() {
        return m[x-1];
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