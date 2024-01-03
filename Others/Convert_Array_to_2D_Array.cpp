class Solution {
public:
   vector<vector<int>> findMatrix(vector<int>& nums) {
       unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }

        int count = nums.size();
        int rows = 0;
        for (auto i : mp) {
            if (i.second > rows) {
                rows = i.second;
            }
        }

        int cols = mp.size();
        vector<vector<int>> result(rows,vector<int> (cols));
        int colindex=0;
        for(auto i : mp){
            int rowindex = 0;
            for (int j = 0; j < i.second; ++j) {
            result[rowindex++][colindex] = i.first;
             }
             colindex++;
        }
        //unique could also have been used here but the elements should have been sorted
        for (int i = 0; i < rows; ++i) {
    result[i].erase(remove(result[i].begin(), result[i].end(), 0), result[i].end()); }

        return result;
    }
};
