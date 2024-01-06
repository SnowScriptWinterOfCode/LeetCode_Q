## Approach
The solution uses a Depth-First Search (DFS) approach to explore the connected bombs. The main steps in the approach are as follows:

1. Calculate Distance Function ('dist'): The 'dist' function is used to calculate the squared distance between two bomb locations. This function is crucial for determining if one bomb is within the range of another.
2. Depth-First Search Function ('dfs'): The 'dfs' function performs a Depth-First Search to explore the connected bombs within the range. It returns the count of bombs that can be detonated starting from a given bomb index.
3. Main Function ('maximumDetonation'): This function is the entry point for calculating the maximum number of bombs that can be detonated. It builds an adjacency list ('adj') based on bomb ranges and then iterates through each bomb, applying DFS to find the connected components.

## Code
```cpp
class Solution {
public:
    // Function to calculate the squared distance between two points
    long long dist(vector<int> &a, vector<int> &b) {
        long long x = a[0] - b[0];
        long long y = a[1] - b[1];
        return x * x + y * y;
    }

    // Depth-First Search (DFS) to explore the connected bombs
    int dfs(vector<vector<int>>& bombs, unordered_map<int, vector<int>> &adj, int idx, vector<int> &vis) {
        vis[idx] = true;
        int ans = 0;
        for (int i : adj[idx]) {
            if (!vis[i])
                ans += dfs(bombs, adj, i, vis);
        }
        return ans + 1;
    }

    // Function to find the maximum number of bombs that can be detonated
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        
        // Map to store the adjacency list for connected bombs
        unordered_map<int, vector<int>> adj;

        // Building the adjacency list based on bomb ranges
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n; j++) {
                long long dis = dist(bombs[i], bombs[j]);
                long long r1 = bombs[i][2], r2 = bombs[j][2];
                if (dis <= r1 * r1)  adj[i].push_back(j);
                if (dis <= r2 * r2)  adj[j].push_back(i);
            }
        }

        int ans = INT_MIN;

        // Loop to check detonation for each bomb
        for (int i = 0; i < n; i++) {
            vector<int> vis(n, false);
            if (!vis[i])
                ans = max(ans, dfs(bombs, adj, i, vis));
        }

        return ans;
    }
};
