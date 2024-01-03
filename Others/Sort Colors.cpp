class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int p1=0,p2=1; 
        while(p2<n){
            if (nums[p1]==0 && nums[p2]==0){
                p1++;
                p2++;
            }
            else if(nums[p1]==0 && nums[p2]!=0){
                p1++;
                p2++;
            }
            else if (nums[p1]!=0 && nums[p2]==0){
                swap(nums[p1],nums[p2]); 
                p1++; 
                p2++;
            }
            else if (nums[p1]!=0 && nums[p2]!=0){
                p2++;
            }
        }
        p1=n-2,p2=n-1;
        while(p1>-1){
            if (nums[p1]==2 && nums[p2]==2){
                p1--;
                p2--;
            }
            else if(nums[p1]==2 && nums[p2]!=2){
                swap(nums[p1],nums[p2]); 
                p1--; 
                p2--;
            }
            else if (nums[p1]!=2 && nums[p2]==2){
                p1--; 
                p2--;
            }
            else if (nums[p1]!=2 && nums[p2]!=2){
                p1--;
               
            }
        }
    }
};
