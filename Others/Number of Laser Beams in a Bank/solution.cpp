class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0;
        int curr = 0;
        for(string s: bank){
               int sum = 0;
            for(char c: s){
                if(c=='1'){
                   sum++;
                }
            }
            if(sum!=0){
               curr += (prev*sum);
               prev = sum;
            }
            
        }
        return curr;
    }
};