class MyStack {
public:
    queue<int> q;
    
    void push(int x) {
      q.push(x);
      for(int i=0;i<q.size()-1;i++)
      {
          q.push(q.front());
          q.pop();
      }
    }
    
    int pop() {
       int k = q.front();
        q.pop();
        return k;
    }
    
    int top() {
       return q.front(); 
    }
    
    bool empty() {
        return q.empty();
    }
};
