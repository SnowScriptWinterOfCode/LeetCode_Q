```
class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer> st=new Stack<>();
        int i=0;
        while(i<asteroids.length){
            if(asteroids[i]<0){
                if(st.size()==0 || st.peek()<0){
                    st.push(asteroids[i]);
                    i++;
                }
                else if(st.peek()==Math.abs(asteroids[i])){
                    st.pop();
                    i++;
                }
                else if(st.peek()>Math.abs(asteroids[i])){
                    i++;
                }
                else if(st.peek()<Math.abs(asteroids[i])){
                    st.pop();
                }
                else{
                    st.push(asteroids[i]);
                    i++;
                }
            }
            else{
                st.push(asteroids[i]);
                i++;
            }
        }
        int[] ans= new int[st.size()];
        int k=st.size()-1;
        while(st.size()>0){
            ans[k]=st.pop();
            k--;
        }
        return ans;
        
    }
}
```
