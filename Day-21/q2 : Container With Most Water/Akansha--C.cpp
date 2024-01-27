class Solution {
public:
    int maxArea(vector<int>& height) {
         int a=height.size();
        int i=0;
        int j=a-1;
        int z=a-1;
        int maxElement;
        vector <int> b;
        while(i<j){
            int x=min(height[i],height[j]);
            int pro=x*z;
            b.push_back(pro);
            if(x==height[i]){
                i++;
            }
            else if(height[i]==height[j]){
                i++;
                if(i>a-1){
                    break;
                }
            }
            else{
                j--;
            }
            z--;
        }
        for (int y = 0; y< a-1; ++y) {
            if (b[y] > maxElement) {
                maxElement = b[y];
            }
        }
        return maxElement;
    }
};