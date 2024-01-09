# Finding Eventual Safe Nodes

## Approach:

A terminal node is a node without any outgoing edges (i.e., outdegree = 0). A node is considered to be a safe node if all possible paths starting from it lead to a terminal node. The task is to find all safe nodes and return them sorted in ascending order.
If we closely observe, all possible paths starting from a node are going to end at some terminal node unless there exists a cycle and the paths return back to themselves. Let’s understand it considering the below graph:

## Algorithm:

1. Traverse all components of the graph.
2. Use Depth-First Search (DFS) traversal.
3. Maintain two visited arrays in the DFS call: one for visited nodes (`vis`) and the other for visited nodes in the current traversal only (`pathVis`).
4. Additionally, use an extra array (`check`) to mark the safe nodes.
5. While making a DFS call:
   - Mark the node as visited in both `vis` and `pathVis`.
   - Traverse through its adjacent nodes:
      - If the adjacent node is not visited, make a new DFS call recursively with that node.
      - If the adjacent node is visited and also on the same path (i.e., marked visited in the `pathVis` array), return true (indicating a cycle).
      - If the adjacent node is visited but not on the same path, continue to the next adjacent node.
   - If there are no further nodes to visit, mark the node as safe in the `check` array and unmark the current node in the `pathVis` array. Return false.
6. Backtrack to the previous node with the returned value.

## C++ Code:

```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool dfsCheck(int node, vector<int> adj[], int vis[], int pathVis[], int check[]) {
        vis[node] = 1;
        pathVis[node] = 1;
        check[node] = 0;

        for (auto it : adj[node]) {
            if (!vis[it]) {
                if (dfsCheck(it, adj, vis, pathVis, check) == true) {
                    check[node] = 0;
                    return true;
                }
            } else if (pathVis[it]) {
                check[node] = 0;
                return true;
            }
        }
        check[node] = 1;
        pathVis[node] = 0;
        return false;
    }

public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int pathVis[V] = {0};
        int check[V] = {0};
        vector<int> safeNodes;

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsCheck(i, adj, vis, pathVis, check);
            }
        }

        for (int i = 0; i < V; i++) {
            if (check[i] == 1) safeNodes.push_back(i);
        }

        return safeNodes;
    }
};

int main() {
    vector<int> adj[12] = {{1}, {2}, {3}, {4, 5}, {6}, {6}, {7}, {}, {1, 9}, {10}, {8}, {9}};
    int V = 12;
    Solution obj;
    vector<int> safeNodes = obj.eventualSafeNodes(V, adj);

    for (auto node : safeNodes) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
