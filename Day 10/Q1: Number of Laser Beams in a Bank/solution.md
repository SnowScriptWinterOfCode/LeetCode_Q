```
class Solution {
public:
// Time complexity: O(M∗N)
    int numberOfBeams(vector<string>& bank) {
        int prev = 0 ;
        int ans = 0 ;
        for(auto it: bank){     
            int lasers = 0 ;   
            for(int i=0; i<it.size(); i++){
                if(it[i]=='1'){
                    lasers ++;  
                }
            }       
            ans = ans + lasers*prev; 
            if(lasers!=0) prev = lasers;  
        }
        return ans;
    }
};
```
