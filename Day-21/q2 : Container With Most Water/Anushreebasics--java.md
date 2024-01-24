```
class Solution {
    public int maxArea(int[] height) {
        int s=0;
        int e=height.length-1;
        int ans=Integer.MIN_VALUE;
        while(s<e){
            int h=Math.min(height[s],height[e]);
            int w=e-s;
            int area=h*w;
            ans=Math.max(ans,area);
            if(height[s]<height[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
        
    }
}
```
