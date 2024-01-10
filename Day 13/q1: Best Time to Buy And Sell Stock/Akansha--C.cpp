class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int l[n],r[n];
        l[0]=prices[0];
        r[n-1]=prices[n-1];
        
        for(int i=1;i<n;i++){
            l[i]=min(l[i-1],prices[i]);
        }

        for(int i=n-2;i>=0;i--){
            r[i]=max(r[i+1],prices[i]);
        }

        int maxProfit=0;
        for(int i=0;i<n;i++){
            maxProfit=max(maxProfit,r[i]-l[i]);
        }

        return maxProfit;
    }
};