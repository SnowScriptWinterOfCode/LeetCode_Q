import java.util.LinkedList;
import java.util.Queue;

public class namita0210_java{
    class MyStack {
        private Queue<Integer> mainQueue;
        private Queue<Integer> auxiliaryQueue;
    
        /** Initialize your data structure here. */
        public MyStack() {
            mainQueue = new LinkedList<>();
            auxiliaryQueue = new LinkedList<>();
        }
    
        /** Push element x onto stack. */
        public void push(int x) {
            // Move all elements from the mainQueue to auxiliaryQueue
            while (!mainQueue.isEmpty()) {
                auxiliaryQueue.offer(mainQueue.poll());
            }
    
            // Add the new element to the mainQueue
            mainQueue.offer(x);
    
            // Move elements back from auxiliaryQueue to mainQueue
            while (!auxiliaryQueue.isEmpty()) {
                mainQueue.offer(auxiliaryQueue.poll());
            }
        }
    
        /** Removes the element on top of the stack and returns that element. */
        public int pop() {
            if (empty()) {
                throw new IllegalStateException("Stack is empty");
            }
            return mainQueue.poll();
        }
    
        /** Get the top element. */
        public int top() {
            if (empty()) {
                throw new IllegalStateException("Stack is empty");
            }
            return mainQueue.peek();
        }
    
        /** Returns whether the stack is empty. */
        public boolean empty() {
            return mainQueue.isEmpty();
        }
        
    }
    
}


