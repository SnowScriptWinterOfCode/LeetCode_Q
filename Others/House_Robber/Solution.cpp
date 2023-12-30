
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = 0;
        int curr = 0;

        for(int i =0;i<n;i++){
            int temp=prev;
            prev = max(curr+ nums[i] , prev);
            curr = temp;
        }
        return prev;
