# Approach: 
Number of beams=number of lasers in current row * number of beams in next non-empty row
```
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count=0;
        int prev=0;
        for(int i=0;i<bank.size();i++){
            int curr=0;
            for (char c:bank[i]){
                if (c=='1'){
                    curr+=1;
                }
            }
            if (curr>0){
                count+=curr*prev;
                prev=curr;
            }
       }
       return count;
    }
};
```
