C++

Approach-1

Explaination

push(x): This method adds a new element x to the queue and updates the topele variable to store the value of the most recently pushed element.

pop(): This method emulates the behavior of a stack's pop operation. It first moves size - 1 elements from the front of the queue to the back of the queue using the push method. This reordering effectively makes the front element the top element of the stack. Then, it removes and returns the front element of the queue.

top(): This method returns the value of the most recently pushed element, which is stored in the topele variable.

empty(): This method simply checks if the queue is empty.



#include<queue>

class MyStack {

    queue<int> q1;
        queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(q1.empty()){
        q1.push(x);
        }
        else{
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        }
    }
    
    int pop() {
        if(q1.empty()){
            return -1;
        }
        int temp=q1.front();
        q1.pop();
        return temp;
        
    }
    
    int top() {
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};


JAVA

Approach-1(With one queue)


class MyStack {
    private Queue<Integer> q = new LinkedList<>();

    MyStack() {
        
    }

    void push(int x) {
        q.add(x);
        int v = q.size() - 1;
        int i = 0;
        while (i < v) {
            q.add(q.poll());
            i++;
        }
    }

    int pop() {
        return q.poll();
    }

    int top() {
        return q.peek();
    }

    boolean empty() {
        return q.isEmpty();
    }
}


C++

Approach-1(With two queue)

Explaination

Push: To push an element, the code transfers all elements from q1 to q2 to maintain order. Then, the new element is enqueued into q1, and finally, elements are transferred back from q2 to q1.

Pop: The front element of q1 is dequeued and returned, simulating the pop operation of a stack.

Top: The front element of q1 is returned without dequeuing it, representing the top of the stack.

Empty: The stack is considered empty if q1 is empty.



class MyStack {
public:
    queue<int>q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        while(q1.size()>0){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(q2.size()>0){
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
       int x=q1.front();
        q1.pop();
       return x;   
    }
    
    int top() {
       return q1.front();
    }
    
    bool empty() {
       return q1.size()==0; 
    }
};


Python


class MyStack:
    def __init__(self):
        self.q = deque()

    def push(self, x: int) -> None:
        self.q.append(x)
        v = len(self.q) - 1
        i = 0
        while i < v:
            self.q.append(self.q.popleft())
            i += 1

    def pop(self) -> int:
        return self.q.popleft()

    def top(self) -> int:
        return self.q[0]

    def empty(self) -> bool:
        return len(self.q) == 0
