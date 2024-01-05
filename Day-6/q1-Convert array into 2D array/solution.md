//Optimal solution O(N)
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(nums.size() + 1);
       
        vector<vector<int>> ans;
        for (int c : nums) {
            if (freq[c] >= ans.size()) { //add a new list
                ans.push_back({});
            }
            
            // Store the integer in the list corresponding to its current frequency.
            ans[freq[c]].push_back(c);
            freq[c]++;
        }
        
        return ans;
    }

//Brute Force O(n^2)
class Solution {
public:
    bool exist(vector<int>&temp, int num){
        for ( int j = 0 ; j < temp.size() ; j ++ ){
            if(temp[j]==num)
                return true;
        }
        return false;
    }

    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        
        unordered_map<int, int>freq;
        
        for(int i=0; i<nums.size(); i++)
            freq[nums[i]]++;
        
        while (!freq.empty()){
            vector<int>temp;
            vector<int> keysToRemove;  // Keys to remove after the loop
            for ( auto &it: freq ){
                if(!exist(temp, it.first)){
                    temp.push_back( it.first );
                    it.second--;
                    
                    if (it.second == 0) 
                        keysToRemove.push_back(it.first);
                    
                }            
            }
            // Remove keys from the map
            for (int key : keysToRemove) 
                freq.erase(key);
            
            ans.push_back(temp);
        }
        return ans;
    }
};
