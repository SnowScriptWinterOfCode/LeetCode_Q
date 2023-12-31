class Solution {
public:
    int maxArea(vector<int>& height) {
        // use two pointer approach
        int i=0;int mx=0;
        int j=height.size()-1;
        while(i<j){
            mx=max(mx,(min(height[i],height[j])*(j-i)));
            if(height[i]<height[j])i++;
            else if(height[j]<height[i])j--;
            else{
                i++;j--;
            }
                
        }
        return mx;
    }
};
