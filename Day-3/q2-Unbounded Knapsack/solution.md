C++


Memorization


#include <bits/stdc++.h>

using namespace std;

int knapsackUtil(vector<int>& wt, vector<int>& val, int ind, int W, vector<vector<int>>& dp) {

    if (ind == 0) {
    
        return (W / wt[0]) * val[0];
        
    }
    
    if (dp[ind][W] != -1)
    
        return dp[ind][W]; 
        
    int notTaken = 0 + knapsackUtil(wt, val, ind - 1, W, dp);
    
    int taken = INT_MIN;
    
    if (wt[ind] <= W)
    
        taken = val[ind] + knapsackUtil(wt, val, ind, W - wt[ind], dp);
        
    return dp[ind][W] = max(notTaken, taken);
    
}

int unboundedKnapsack(int n, int W, vector<int>& val, vector<int>& wt) {

    vector<vector<int>> dp(n, vector<int>(W + 1, -1)); 
    
    return knapsackUtil(wt, val, n - 1, W, dp);
    
}
























Tabulation

#include <bits/stdc++.h>

using namespace std;

int unboundedKnapsack(int n, int W, vector<int>& val, vector<int>& wt) {

    vector<vector<int>> dp(n, vector<int>(W + 1, 0)); 
    
    for (int i = wt[0]; i <= W; i++) {
    
        dp[0][i] = (i / wt[0]) * val[0]; 
        
    }
    for (int ind = 1; ind < n; ind++) {
    
        for (int cap = 0; cap <= W; cap++) {
        
            int notTaken = 0 + dp[ind - 1][cap]; 
            
            int taken = INT_MIN;
            
            if (wt[ind] <= cap)
            
                taken = val[ind] + dp[ind][cap - wt[ind]]; 
                
            dp[ind][cap] = max(notTaken, taken); 
            
        }
        
    }
    
    return dp[n - 1][W]; 
    
}



















Java


Memorization


import java.util.*;

class TUF {

    static int knapsackUtil(int[] wt, int[] val, int ind, int W, int[][] dp) {
    
        if (ind == 0) {
        
            return ((int) (W / wt[0])) * val[0];
            
        }
        
        if (dp[ind][W] != -1)
        
            return dp[ind][W];
            
        int notTaken = 0 + knapsackUtil(wt, val, ind - 1, W, dp);
        
        int taken = Integer.MIN_VALUE;
        
        if (wt[ind] <= W)
        
            taken = val[ind] + knapsackUtil(wt, val, ind, W - wt[ind], dp);
            
        return dp[ind][W] = Math.max(notTaken, taken);
        
    }
    
    static int unboundedKnapsack(int n, int W, int[] val, int[] wt) {
    
        int[][] dp = new int[n][W + 1];
        
        for (int row[] : dp)
        
            Arrays.fill(row, -1);
            
        return knapsackUtil(wt, val, n - 1, W, dp);
        
    }
    
}












Tabulation


import java.util.*;

class TUF {

    static int unboundedKnapsack(int n, int W, int[] val, int[] wt) {
    
        int[][] dp = new int[n][W + 1];
        
        for (int i = wt[0]; i <= W; i++) {
        
            dp[0][i] = ((int) i / wt[0]) * val[0];
            
        }
        
        for (int ind = 1; ind < n; ind++) {
        
            for (int cap = 0; cap <= W; cap++) {
            
                int notTaken = 0 + dp[ind - 1][cap];
                
                int taken = Integer.MIN_VALUE;
                
                if (wt[ind] <= cap)
                
                    taken = val[ind] + dp[ind][cap - wt[ind]];
                    
                dp[ind][cap] = Math.max(notTaken, taken);
                
            }
            
        }
        
        return dp[n - 1][W]; 
        
    }
    
}
