```
class MyStack {
    Queue<Integer> q;
    public MyStack() {
        q=new LinkedList<>();
    }
    
    public void push(int x) {
        if(q.size()==0){
            q.add(x);
            return;
        }
        Queue<Integer> temp=new LinkedList<>();
        while(q.size()>0){
            temp.add(q.remove());
        }
        q.add(x);
        while(temp.size()>0){
            q.add(temp.remove());
        }
    }
    
    public int pop() {
        if(q.size()>0){
            return q.remove();
        }
        return -1;
    }
    
    public int top() {
        return q.peek();
    }
    
    public boolean empty() {
        if(q.size()>0){
            return false;
        }
        return true;
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */
```
